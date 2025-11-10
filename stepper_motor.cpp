// Stepper motor
#include <Servo.h>
Servo myservo;
int value;
double angle;
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(9);
}
void loop() {
// put your main code here, to run repeatedly:
value=analogRead(A0);
angle=map(value,0,1023,0,180);
Serial.println(angle);
myservo.write(angle);
delay(5000);
}
