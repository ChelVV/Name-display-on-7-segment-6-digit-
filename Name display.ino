int steady = 0;
int blink1 = 0;
int blink2 = 0;
int blink3 = 0;

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
void loop() {
  digitalWrite(0, HIGH); //R
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  
  digitalWrite(0, HIGH); //O
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  digitalWrite(12, LOW);
  
  digitalWrite(0, HIGH); //C
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  
  digitalWrite(4, HIGH); //H
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);

  digitalWrite(0, HIGH); //E
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

  digitalWrite(3, HIGH); //L
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);


  while(steady<50) {    
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(13, HIGH);
  delay(1);
  digitalWrite(13, LOW);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(12, HIGH);
  delay(1);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  digitalWrite(12, LOW);
  
  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(11, HIGH);
  delay(1);
  digitalWrite(11, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  
  digitalWrite(4, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(1);
  digitalWrite(10, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);

  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(1);
  digitalWrite(9, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  delay(1);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  steady++;
  }
  
  steady = 0;
  delay(100); //off state

  while(blink1<150) {    
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(13, HIGH);
  delay(1);
  digitalWrite(13, LOW);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(12, HIGH);
  delay(1);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  digitalWrite(12, LOW);
  
  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(11, HIGH);
  delay(1);
  digitalWrite(11, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  
  digitalWrite(4, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(1);
  digitalWrite(10, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);

  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(1);
  digitalWrite(9, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  delay(1);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  blink1++;
  }
  
  blink1 = 0;
  delay(150); //off

  while(blink2<50) {    
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(13, HIGH);
  delay(1);
  digitalWrite(13, LOW);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(12, HIGH);
  delay(1);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  digitalWrite(12, LOW);
  
  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(11, HIGH);
  delay(1);
  digitalWrite(11, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  
  digitalWrite(4, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(1);
  digitalWrite(10, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);

  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(1);
  digitalWrite(9, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  delay(1);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  blink2++;
  }
  
  blink2 = 0;
  delay(150); //off

  while(blink3<50) {    
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(13, HIGH);
  delay(1);
  digitalWrite(13, LOW);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(12, HIGH);
  delay(1);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  digitalWrite(12, LOW);
  
  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(11, HIGH);
  delay(1);
  digitalWrite(11, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  
  digitalWrite(4, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(1);
  digitalWrite(10, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);

  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(1);
  digitalWrite(9, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  delay(1);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  blink3++;
  }
   blink3 = 0;
}
