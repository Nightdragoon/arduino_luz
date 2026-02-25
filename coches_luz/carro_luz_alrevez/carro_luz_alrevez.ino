int ledPin = 13;
int buttonPin = 7;
int tiempo = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT); 
  Serial.begin(9600);
}

void loop() {

  int buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);

  if (buttonState == HIGH) {

    
    for (int i = 0; i < 10; i++) {
      digitalWrite(ledPin, HIGH);
      delay(300 + tiempo);
      digitalWrite(ledPin, LOW);
      delay(300+ tiempo);
    }

    
    digitalWrite(ledPin, HIGH);
    delay(3000);

    
    digitalWrite(ledPin, LOW);
    delay(3000);
     for (int i = 0; i < 10; i++) {
      digitalWrite(ledPin, HIGH);
      delay(300 + tiempo);
      digitalWrite(ledPin, LOW);
      delay(300+ tiempo);
    }

  } else {
    
    digitalWrite(ledPin, LOW);
  }
  tiempo + 100;
}
