int in1=6;
int in2=7;
int enA=9;
void setup() {
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enA, OUTPUT);
}

void loop() {
  int value=analogRead(A0);
  int speed=map(value,0,1023,0,255);
  if(Serial.available()>0){
    char state=Serial.read();
    if(state=='1'){
      Serial.println("Forward");
      digitalWrite(in1,1);
      digitalWrite(in2,0);
      analogWrite(enA,speed);
      delay(1000);
    }
     if(state=='0'){
      Serial.println("Backward");
      digitalWrite(in1,0);
      digitalWrite(in2,1);
      analogWrite(enA,speed);
      delay(1000);
    }
  }
}
