#include <AFMotor.h>  
const int motorspeed = 200;  
AF_DCMotor motorG(1);  
AF_DCMotor motorM(2);  
void setup() {
  motorG.setSpeed(motorspeed);  // Set the speed of motor G
  motorM.setSpeed(motorspeed);  // Set the speed of motor M
  // Release motors (stop them initially)
  motorG.run(RELEASE);
  motorM.run(RELEASE);
}
void loop() { 
  // Forward motion
  motorG.run(FORWARD);  
  motorM.run(FORWARD);  
  delay(5000);         
  // Backward motion
  motorG.run(BACKWARD);  
  motorM.run(BACKWARD); 
  delay(5000);          
  // Left turn
  motorG.run(FORWARD);  
  motorM.run(RELEASE);  
  delay(500);          
  // Right turn
  motorG.run(RELEASE);  
  motorM.run(FORWARD);  
  delay(500);          
  // Stop
  motorG.run(RELEASE);  
  motorM.run(RELEASE);  
  delay(500);          
}
