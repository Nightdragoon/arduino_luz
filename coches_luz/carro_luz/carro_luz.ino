
int ledpin = 13;
int inPin = 7;
int val = 5;
int secondVal = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin , OUTPUT);
  pinMode(inPin, INPUT);  
   Serial.begin(9600);

}

void loop() {
  secondVal = digitalRead(inPin);

  Serial.println(secondVal);
  if(secondVal == HIGH){
    val = 7;
  }else{
    val = 5;
  }

  if(val == 7){
    for(int i = 0; i < 3; i++){
    digitalWrite(ledpin , HIGH);
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(500);
  }

  delay(3000);
  }else{
    digitalWrite(ledpin, LOW);
  }

}
