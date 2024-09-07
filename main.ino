#include <WiFi.h>
#include <SinricPro.h>
#include <SinricProSwitch.h>

// إعدادات Wi-Fi
const char* ssid = "WIFI-NAME";
const char* password = "";

// بيانات الجهاز في sinric PRO

#define APP_KEY           "79aefecc-3652-446b-a92a-9dfdca847f35"      
#define APP_SECRET        "e03eaeb5-f180-4ad5-b454-65cd48637d1a-a676692c-c59a-4931-8465-e7b9495e4efd"   
#define SWITCH_ID         "66d9c1b046a89b75c2655c35"

// إعدادات الليد
const int ledPin = 2;

bool onPowerState(const String &deviceId, bool &state) {
  Serial.printf("Device %s turned %s\r\n", deviceId.c_str(), state?"ON":"OFF");
  digitalWrite(ledPin, state ? HIGH : LOW);
  return true;
}

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("\nConnected to Wi-Fi");

  SinricProSwitch &mySwitch = SinricPro[SWITCH_ID];
  mySwitch.onPowerState(onPowerState);

  SinricPro.begin(APP_KEY, APP_SECRET);
}

void loop() {
  SinricPro.handle();
}
