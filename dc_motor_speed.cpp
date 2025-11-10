// DC motor at different speed
int motorpin=9;
void setup() {
// put your setup code here, to run once:
pinMode(motorpin,OUTPUT);
}
void loop() {
// put your main code here, to run repeatedly:
analogWrite(motorpin,0);
delay(5000);
analogWrite(motorpin,128);
delay(5000);
analogWrite(motorpin,255);
delay(5000);
}
