// Shanja Ferdous
#define RED_LED 7
#define RED_LED2 6
#define RED_LED3 5
#define RED_LED4 4

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED, OUTPUT);
   pinMode(RED_LED2, OUTPUT);
   pinMode(RED_LED3, OUTPUT);
   pinMode(RED_LED4, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RED_LED, HIGH);
  delay(500);
  digitalWrite(RED_LED, LOW);
  delay(500);

  digitalWrite(RED_LED2, HIGH);
  delay(500);
  digitalWrite(RED_LED2, LOW);
  delay(500);
  
   digitalWrite(RED_LED3, HIGH);
  delay(500);
  digitalWrite(RED_LED3, LOW);
  delay(500);


 digitalWrite(RED_LED4, HIGH);
  delay(500);
  digitalWrite(RED_LED4, LOW);
  delay(500);
}
