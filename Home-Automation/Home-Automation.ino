#include <ThingSpeak.h>
#include <ESP8266WiFi.h>
WiFiClient client;

unsigned long ChannelNumber = 980157;             // Channel ID
const char *APIKey = "CL8DHB4NZ43291ZI";    // Read API Key
const int fieldNumber = 1;  // Assuming you are reading from field 1

void setup() {
  pinMode(13, OUTPUT); // D7
  Serial.begin(115200);
  Serial.println();
  WiFi.begin("POCO PHONE", "9004652173");  // Write WiFi name & password
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
  ThingSpeak.begin(client);
}

void loop() {
  int A = ThingSpeak.readLongField(ChannelNumber, fieldNumber, APIKey);
    Serial.println(A);
    digitalWrite(13, A);
  }
