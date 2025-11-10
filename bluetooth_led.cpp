// Bluetooth Model LED
#include<SoftwareSerial.h>
SoftwareSerial bluetooth(2,3);
int LED=13;
int Data;
void setup() {
// put your setup code here, to run once:
bluetooth.begin(9600);
Serial.begin(9600);
Serial.println("waiting for command...");
bluetooth.println("Send 1 to turn on the LED. Send 0 to turn off");
pinMode(LED,OUTPUT);
}
void loop() {
// put your main code here, to run repeatedly:
if(bluetooth.available()){
Data=bluetooth.read();
if(Data=='1'){
digitalWrite(LED,1);
Serial.println("LED on!");
bluetooth.println("LED on!");
}
else if (Data=='0'){
digitalWrite(LED,0);
Serial.println("LED off!");
bluetooth.println("LED off!");
}
else{;}
}
delay(100);
}
