int led=13;
int sensor=2;
void setup(){
  pinMode(led,OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(9600);
}
void loop(){
 int status=digitalRead(sensor);
  if(status==1){
  Serial.println("HIGH");
  digitalWrite(led,HIGH);
  }
  else{
    Serial.println("LOW");
    digitalWrite(led,LOW);
  }
}
