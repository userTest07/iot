Temperature sensor
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
// put your main code here, to run repeatedly:
int val=analogRead(A0);
float tempC=(val*5.0*100)/1024;
float tempK=(tempC*9.0/5.0)+32.0;
Serial.print("temp:");
Serial.print(tempC);
Serial.print("\xc2\xB0");
Serial.println("C");
Serial.print(tempK);
Serial.println("\xc2\xB0");
delay(10000);
}
