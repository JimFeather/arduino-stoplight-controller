#define RELAY1  6                        
#define RELAY2  7                        
#define RELAY3  8                        

 
void setup()
{    
  pinMode(RELAY1, OUTPUT);       
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);

}
 
 void loop()
{
   digitalWrite(RELAY1,LOW);           // Green light on
   delay(4000);
   digitalWrite(RELAY1,HIGH);          // Green light off
 
   digitalWrite(RELAY2,LOW);           // Yellow Light on
   delay(4000);
   digitalWrite(RELAY2,HIGH);          // Yellow light off
 
   digitalWrite(RELAY3,LOW);           // Red light on
   delay(4000);
   digitalWrite(RELAY3,HIGH);          // Red light off  
 }
