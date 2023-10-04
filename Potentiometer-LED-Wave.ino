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
  float Voltage = A5Val * (5.0 / 1023.0); // Converts Read Data To Correct Voltage
  int LEDTime = Voltage * (100.0);
  
  Serial.print("Current Potentiometer Value: ");
  Serial.println(Voltage); // Displays Current Potentiometer Value
    delay(50);
    
    digitalWrite(2, HIGH); delay(LEDTime);
    digitalWrite(3, HIGH); digitalWrite(2, LOW); delay(LEDTime);
    digitalWrite(4, HIGH); digitalWrite(3, LOW); delay(LEDTime);
    digitalWrite(5, HIGH); digitalWrite(4, LOW); delay(LEDTime);
    digitalWrite(6, HIGH); digitalWrite(5, LOW); delay(LEDTime);
    digitalWrite(7, HIGH); digitalWrite(6, LOW); delay(LEDTime);
    digitalWrite(8, HIGH); digitalWrite(7, LOW); delay(LEDTime);
    digitalWrite(9, HIGH); digitalWrite(8, LOW); delay(LEDTime);
    digitalWrite(10, HIGH); digitalWrite(9, LOW); delay(LEDTime);
    digitalWrite(11, HIGH); digitalWrite(10, LOW); delay(LEDTime);
    digitalWrite(12, HIGH); digitalWrite(11, LOW); delay(LEDTime);
    digitalWrite(13, HIGH); digitalWrite(12, LOW); delay(LEDTime);
    digitalWrite(13, LOW); delay(LEDTime);
}
