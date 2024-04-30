int led=13;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop() {
  if(Serial.available()>0){
    char state=Serial.read();
    if(state=='1'){
      Serial.println("LED ON");
      digitalWrite(led,HIGH);
    }
    if(state=='0'){
      Serial.println("LED OFF");
      digitalWrite(led,LOW);
    }
  }
  delay(1000);
}
