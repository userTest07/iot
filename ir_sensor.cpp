int irsensor1=2;
int led1=12;
void setup() {
// put your setup code here, to run once:
pinMode(irsensor1,INPUT);
pinMode(led1,OUTPUT);
Serial.begin(9600);
}
void loop() {
// put your main code here, to run repeatedly:
int sensorV=digitalRead(irsensor1);
if (sensorV== LOW)
{
digitalWrite(led1, HIGH);
Serial.println("object detected!!");
}
else
{
digitalWrite(led1, LOW);
Serial.println("NO object detected");
}
delay(1000);
}
