int LED1=11;
int LED2=10;
int LED3=9;
int LED4=8;
int LED5=7;
int LED6=6;
int LED7=5;
int LED8=4;
int LED9=3;
void setup() {
Serial.begin(9600);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
pinMode(3,OUTPUT);
}
void loop() {
 if (Serial.available())
{
int readveri= Serial.read();  
if ( readveri=='1')
{
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
}
if ( readveri=='2')
{
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
}
if ( readveri=='3')
{
digitalWrite(9,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
}
if ( readveri=='4')
{
digitalWrite(8,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
}
if ( readveri=='5')
{
digitalWrite(7,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
}
if ( readveri=='6')
{
digitalWrite(6,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
}
if ( readveri=='7')
{
digitalWrite(5,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
}
if ( readveri=='8')
{
digitalWrite(4,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
}
if ( readveri=='9')
{
digitalWrite(3,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
}

}
}
