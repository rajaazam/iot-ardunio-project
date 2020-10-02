
cont int LDR =13;
int idr_value;
void setup() {
  // put your setup code here, to run once:
pinMode (2,OUTPUT);
pinMode (LDR,INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (2,HIGH);
  delay(5000);
  digitalWrite (2, LOW);
  idr_value = analogRead(LDR);
   if(idr_value<400);
   digitalWrite (LED1, HIGH);
   else
   digitalWrite(LED1,LOW);

}
