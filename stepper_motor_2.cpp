// Stepper motor
#include <Servo.h>
Servo myservo;
int angle;
void setup() {
// put your setup code here, to run once:
myservo.attach(9);
Serial.begin(9600);
}
void loop() {
// put your main code here, to run repeatedly:
for (int angle=0;angle<=180;angle+=10)
{Serial.println(angle);
myservo.write(angle);
delay(1000);
}
for(int angle=180;angle>=0;angle-=10)
{Serial.println(angle);
myservo.write(angle);
delay(1000);
}
}
