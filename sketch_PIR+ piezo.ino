boolean PIR=7;
int LED=2;
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
pinMode(PIR,INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
PIR=digitalRead(7);
if(PIR==HIGH){
digitalWrite(LED,HIGH);
tone(4,300);
}else{
digitalWrite(LED,LOW);
noTone(4);
}
}
