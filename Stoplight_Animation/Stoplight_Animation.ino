
// LED Stoplight Animation 

int RED = 13;
int YELLOW = 12;
int GREEN = 11;

void setup() {
   pinMode(RED, OUTPUT);
   pinMode(YELLOW, OUTPUT);
   pinMode(GREEN, OUTPUT);
}

// green & red light lengths are in a standard 3:2 ratio
void loop() {
  digitalWrite(RED, HIGH);
  delay(24000); // 24s red light             
  digitalWrite(RED, LOW);     
  delay(100);                 
  digitalWrite(YELLOW, HIGH);    
  delay(3000); // 3s yellow light     
  digitalWrite(YELLOW, LOW);    
  delay(100);                  
  digitalWrite(GREEN, HIGH);     
  delay(36000); // 36s green light             
  digitalWrite(GREEN, LOW);     
  delay(100);
  digitalWrite(YELLOW, HIGH);    
  delay(3000); // 3s yellow light      
  digitalWrite(YELLOW, LOW);
  delay(100);                    
}
