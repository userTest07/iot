// Ultrasonic sensor
int inpin=9;
int outpin=10;
int bpin=8;
long dur;
float dist;
void setup() {
// put your setup code here, to run once:
pinMode(inpin, OUTPUT);
pinMode(outpin,INPUT);
pinMode(bpin,OUTPUT);
Serial.begin(9600);
}
void loop() {
// put your main code here, to run repeatedly:
digitalWrite(inpin, LOW);
delay(2);
digitalWrite(inpin, HIGH);
delay(5);
digitalWrite(inpin, LOW);
dur=pulseIn(outpin,HIGH);
dist=dur*0.034/2;
Serial.print("Distance:");
Serial.print(dist);
Serial.println(" cm");
if(dist<50)
{
digitalWrite(bpin,HIGH);
delay(100);
}
else{
digitalWrite(bpin,LOW);
delay(100);
}
}
