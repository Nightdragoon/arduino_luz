int ledPin = 13;
int buttonPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT); 
  Serial.begin(9600);
}

void loop() {

  int buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);

  if (buttonState == HIGH) {

    
    for (int i = 0; i < 3; i++) {
      digitalWrite(ledPin, HIGH);
      delay(300);
      digitalWrite(ledPin, LOW);
      delay(300);
    }

    
    digitalWrite(ledPin, HIGH);
    delay(3000);

    
    digitalWrite(ledPin, LOW);
    delay(3000);

  } else {
    
    digitalWrite(ledPin, LOW);
  }
}
