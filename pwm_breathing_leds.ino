int pin11=11;
 int pin10=10;
 int pin9=9;
 int pin6=6;
 int brightness1=225;
 int brightness2=150;
 int brightness3=0;
void setup()
{
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{  
  for(int i=0;i<3;i++)
    
  {analogWrite(11,brightness3);
   delay(250);
     analogWrite(11,brightness2);
     delay(250);
     analogWrite(11,brightness1);
   delay(250);}
  
  digitalWrite(11,LOW);
  delay(250);
  
   for(int i=3;i<6;i++)
  {analogWrite(10,brightness3);
     delay(250);
      analogWrite(10,brightness2)
          delay(250);;
      analogWrite(10,brightness1);
   delay(250);}
   digitalWrite(10,LOW);
  delay(250);
   
  for(int i=6;i<9;i++)
  {analogWrite(9,brightness3);
     delay(250);
   analogWrite(9,brightness2);
     delay(250);
   analogWrite(9,brightness1);
   delay(250);}
   digitalWrite(9,LOW);
  delay(250);
  
  for(int i=9;i<12;i++)
  {analogWrite(6,brightness3);
     delay(250);
   analogWrite(6,brightness2);
     delay(250);
   analogWrite(6,brightness1);
   delay(250);}
   digitalWrite(6,LOW);
  delay(250);
  
  
  for(int i=12;i<16;i++)
  { digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(6,HIGH);
   delay(250);}
  
  delay(1000);
   
  for(int i=16;i<20;i++)
  {digitalWrite(11,LOW);
   digitalWrite(10,LOW);
   digitalWrite(9,LOW);
   digitalWrite(6,LOW);
   delay(250);}
  
  delay(1000);
}
