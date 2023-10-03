const int potPin = A5;
const int testLED = 2;


void setup() { 
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  for(int i = 0; i < 10000; i++){
    int A5Val = analogRead(potPin);
    float potVal = A5Val * (5.0 / 1023.0);
    analogWrite(testLED, potVal);
    Serial.print("Current Potentiometer Value: ");
    Serial.println(potVal);
    delay(10);
  }
}

void loop() {

}
