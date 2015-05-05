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
  lightItUp(RELAY1);
  lightItUp(RELAY2);
  lightItUp(RELAY3);
}
 
 /**
 Function to light up the lights connected to the passed in pin number with a 4 second light time.
 */
 void lightItUp(int pin)
 {
   digitalWrite(pin,LOW);
   delay(4000);
   digitalWrite(pin,HIGH);
 }
