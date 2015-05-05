#define GREEN_RELAY  6                        
#define YELLOW_RELAY  7                        
#define RED_RELAY  8                        

 
void setup()
{    
  pinMode(GREEN_RELAY, OUTPUT);       
  pinMode(YELLOW_RELAY, OUTPUT);
  pinMode(RED_RELAY, OUTPUT);

}
 void loop()
{
  lightItUp(GREEN_RELAY);
  lightItUp(YELLOW_RELAY);
  lightItUp(RED_RELAY);
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
