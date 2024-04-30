int red=11;
int green=10;
int blue=9;
void setup(){
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}
void loop(){
  RGB(255,0,0);
  delay(1000);
  RGB(0,255,0);
  delay(1000);
  RGB(0,0,255);
  delay(1000);
}
void RGB(int r,int g,int b){
  analogWrite(red,r);
  analogWrite(green,g);
  analogWrite(blue,b);
}
