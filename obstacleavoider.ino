#define ECHOPIN 3 //Echo pin
#define TRIGPIN 2 //Trig pin
#define b 8 //+5V supply for Vcc
#define lm1 10//left motor 1
#define lm2 11//left motor 2
#define rm1 12//right motor 1
#define rm2 5//right motor 2
#define th 30//Setting threshold value to 30 cm
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ECHOPIN,INPUT);
pinMode(TRIGPIN,OUTPUT);
pinMode(7,INPUT);
pinMode(9,INPUT);
pinMode(8,OUTPUT);
pinMode(lm1,OUTPUT);
pinMode(lm2,OUTPUT);
pinMode(rm1,OUTPUT);
pinMode(rm2,OUTPUT);
digitalWrite(b,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(TRIGPIN,LOW);
delayMicroseconds(2);
digitalWrite(TRIGPIN,HIGH);
delayMicroseconds(10);
digitalWrite(TRIGPIN,LOW);
float distance=pulseIn(ECHOPIN,HIGH);
distance=distance/58;
Serial.println(distance);
delay(200);
if(distance<th)
{
  bck();//momentum control
  lft();
  Serial.println("LEFT");
}
else
{
  fwd();
  Serial.println("FORWARD");
}
}
void fwd()
{
  analogWrite(lm1,225);
  analogWrite(lm2,0);
  analogWrite(rm1,140);
  analogWrite(rm2,0);
}
void lft()
{
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,HIGH);
  digitalWrite(rm1,HIGH);
  digitalWrite(rm2,LOW);
}
void rit()
{
  digitalWrite(lm1,HIGH);
  digitalWrite(lm2,LOW);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,HIGH);
}
void stp()
{
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,LOW);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,LOW);
}
void bck()
{
  analogWrite(lm2,140);
  analogWrite(lm1,0);
  analogWrite(rm2,140);
  analogWrite(rm1,0);

}
