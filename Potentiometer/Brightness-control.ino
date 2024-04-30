int led=13;
void setup(){
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop(){
 int value=analogRead(A0);
 int brightness=map(value,0,1023,0,255);
 analogWrite(led,brightness);
 Serial.print("Ananlog Value: ");
 Serial.println(value);
 Serial.print("Brightness: ");
 Serial.println(brightness);
 delay(1000);
}
