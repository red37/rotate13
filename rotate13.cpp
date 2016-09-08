/* Rotates alphabet by 13. Takes input via serial port and sends out output from it too.*/


int inByte = 0;             
void setup() {

  Serial.begin(9600);   
  while (!Serial) {
         ; 
         } 
  establishContact();  
  } 
void loop() {
  
  if (Serial.available() > 0)       
         {
         inByte = Serial.read();        
         
         if (inByte >= 'A' && inByte <= 'M')
            {
            inByte += 13;
            } 
         else if (inByte >= 'N' && inByte <= 'Z')
            {
            inByte -= 13;
            } 
         else if (inByte >= 'a' && inByte <= 'm')
            {
            inByte += 13;
            } 
         else if (inByte >= 'n' && inByte <= 'z')
            {
            inByte -= 13;
            } 
         Serial.write(inByte);   
         } 
}  
void establishContact()
   {
  
   while (Serial.available() <= 0)
          {
          Serial.print('A');   
          delay(1000);           
          } 
   Serial.println();
   } 
