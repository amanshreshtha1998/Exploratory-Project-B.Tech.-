int sensor = A5;

int LED1 = A4;
int LED2 = A3;

int OUT = 9;

int del = 3000;

void setup() {
  pinMode(sensor, INPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(OUT,  OUTPUT);
  
}

void loop() {
  if (analogRead(sensor)<50){
    analogWrite(OUT, 100);      // 5:00 PM
    digitalWrite(LED1, HIGH);
    delay(del);

    analogWrite(OUT, 150);      // 6:00PM
    delay(del);

    analogWrite(OUT, 200);      // 7:00 PM  
    delay(del);

    analogWrite(OUT, 255);      // 8:00 PM
    delay(del);

    analogWrite(OUT, 255);      // 9:00 PM    
    delay(del);

    analogWrite(OUT, 255);      // 10:00 PM
    delay(del);

    analogWrite(OUT, 255);      // 11:00 PM
    delay(del);
    
    analogWrite(OUT, 200);      // 12:00 AM
    digitalWrite(LED2, HIGH);
    delay(del);

    analogWrite(OUT, 200);      // 1:00 AM
    delay(del);

    analogWrite(OUT, 150);      // 2:00 AM
    delay(del);

    analogWrite(OUT, 150);      // 3:00 AM
    delay(del);

    analogWrite(OUT, 100);      // 4:00 AM
    delay(del);

    analogWrite(OUT, 100);      // 5:00 AM
    delay(del);

    analogWrite(OUT, 0); 
    
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  } 
}
