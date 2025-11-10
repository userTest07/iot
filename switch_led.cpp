Using switch to turn ON/OFF LED
int led1=12;
int switch1=10;
void setup(){
// put your setup code here, to run once:
pinMode(switch1,INPUT);
pinMode(led1,OUTPUT);
}
void loop(){
// put your main code here, to run repeatedly:
if (digitalRead(switch1)==HIGH)
{
digitalWrite(led1,HIGH);
}else{
digitalWrite(led1,LOW);
}
}
