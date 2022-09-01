int Time1 ;
int Time2 ;
int distance1 ;
int distance2 ;

void setup()
{
 pinMode(2,OUTPUT);
 pinMode(3,INPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,INPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
 Serial.begin(9600);


}

void loop() 
{
 digitalWrite(2,HIGH);
 delayMicroseconds(10);
 digitalWrite(2,LOW);
 delayMicroseconds(5);
 digitalWrite(2,HIGH);
 delayMicroseconds(10);
 Time1 = pulseIn(3,HIGH);
 digitalWrite(8,HIGH);
 delayMicroseconds(10);
 digitalWrite(8,LOW);
 delayMicroseconds(5);
 digitalWrite(8,HIGH);
 delayMicroseconds(10);
 Time2 = pulseIn(9,HIGH);
    distance1= 0.0343*Time1/2;
    Serial.print("distane from sensor to object is =");
    Serial.println(distance1);
    delay(5);
    distance2= 0.0343*Time2/2;
    Serial.print("distane from sensor to object is =");
    Serial.println(distance2);
    delay(5);


   if(distance2>1 && distance2 <=5)
   {
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);               
   }


   if(distance2>5 && distance2 <=10)
   {

    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);            
 
   }

   if(distance2>10 && distance2 <=15)
   {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);   
    
   
   }
 if(distance2>15 && distance2 <=20)
   {
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW); 
   }
 
    if(distance2>20)
   {
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);           
    
   }
   
   if(distance1>1 && distance1 <=5)
   {
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);               
   }


   if(distance1>5 && distance1 <=10)
   {

    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);            
 
   }

   if(distance1>10 && distance1 <=15)
   {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);   
    
   
   }
 if(distance1>15 && distance1 <=20)
   {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW); 
   }
 
    if(distance1>20)
   {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);           
    
   }
}
