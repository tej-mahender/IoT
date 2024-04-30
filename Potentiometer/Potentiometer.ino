void setup(){
  Serial.begin(9600);
}
void loop(){
 int value=analogRead(A0);
 Serial.print("Ananlog Value: ");
 Serial.println(value);
 delay(1000);
}
