const int potPin = A5; // Pin For Potentionmeter

int ledPINS[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}; // Unused LED Pin Array

void setup() { 
  
  // LED Pins

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

  Serial.begin(9600); // Begin Serial Call
}

void loop() {

  int A5Val = analogRead(potPin); // Voltage Across Potentiometer
  float timeDelay = A5Val * (5.0 / 1023.0); // Converts Read Data To Correct Voltage

  Serial.print("Current Potentiometer Value: ");
  Serial.println(timeDelay); // Displays Current Potentiometer Value
    delay(50);

  for(int i = 0; i < 3; i++){
    
    // Clockwise LED Rotation

    digitalWrite(2, HIGH); delay(i);
    digitalWrite(3, HIGH); digitalWrite(2, LOW); delay(timeDelay);
    digitalWrite(4, HIGH); digitalWrite(3, LOW); delay(timeDelay);
    digitalWrite(5, HIGH); digitalWrite(4, LOW); delay(timeDelay);
    digitalWrite(6, HIGH); digitalWrite(5, LOW); delay(timeDelay);
    digitalWrite(7, HIGH); digitalWrite(6, LOW); delay(timeDelay);
    digitalWrite(8, HIGH); digitalWrite(7, LOW); delay(timeDelay);
    digitalWrite(9, HIGH); digitalWrite(8, LOW); delay(timeDelay);
    digitalWrite(10, HIGH); digitalWrite(9, LOW); delay(timeDelay);
    digitalWrite(11, HIGH); digitalWrite(10, LOW); delay(timeDelay);
    digitalWrite(12, HIGH); digitalWrite(11, LOW); delay(timeDelay);
    digitalWrite(13, HIGH); digitalWrite(12, LOW); delay(timeDelay);
    digitalWrite(13, LOW); delay(timeDelay);
  }

  for(int i2 = 0; i2 < 3; i2++){

    // Counter-Clockwise LED Rotation

    digitalWrite(13, HIGH); delay(timeDelay);
    digitalWrite(12, HIGH); digitalWrite(13, LOW); delay(timeDelay);
    digitalWrite(11, HIGH); digitalWrite(12, LOW); delay(timeDelay);
    digitalWrite(10, HIGH); digitalWrite(11, LOW); delay(timeDelay);
    digitalWrite(9, HIGH); digitalWrite(10, LOW); delay(timeDelay);
    digitalWrite(8, HIGH); digitalWrite(9, LOW); delay(timeDelay);
    digitalWrite(7, HIGH); digitalWrite(8, LOW); delay(timeDelay);
    digitalWrite(6, HIGH); digitalWrite(7, LOW); delay(timeDelay);
    digitalWrite(5, HIGH); digitalWrite(6, LOW); delay(timeDelay);
    digitalWrite(4, HIGH); digitalWrite(5, LOW); delay(timeDelay);
    digitalWrite(3, HIGH); digitalWrite(4, LOW); delay(timeDelay);
    digitalWrite(2, HIGH); digitalWrite(3, LOW); delay(timeDelay);
    digitalWrite(2, LOW); delay(timeDelay);
  }
}
