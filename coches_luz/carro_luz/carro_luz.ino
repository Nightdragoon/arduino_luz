
int ledpin = 13;
int inPin = 7;
bool val = false;
int secondVal = 9;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin , OUTPUT);
  pinMode(inPin, INPUT);  
   Serial.begin(9600);

}

void loop() {
  secondVal = digitalRead(inPin);
  Serial.print("valor de entrada:");
  Serial.println(secondVal);
  Serial.print("valor de booleano:");
  Serial.println(val);
  if(secondVal == HIGH && val == true){
    val = false;
    Serial.println("funcion funcion desactivada");
    delay(300);
  }
  if(secondVal == HIGH && val == false){
    val = true;
    Serial.println("funcion acrtivda");
    delay(300);
  }

  if(val){
    for(int i = 0; i < 3; i++){
    digitalWrite(ledpin , HIGH);
    delay(500);
    digitalWrite(ledpin, LOW);
    delay(500);
  }

  delay(3000);
  }

}
