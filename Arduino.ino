#include <LiquidCrystal.h>

// LCD pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// LED pins
int greenLED = 3;
int yellowLED = 4;
int redLED = 5;

// Sensor pin
int sensorPin = A0;

void setup() {
   Serial.begin(9600);

   lcd.begin(16, 2);
   lcd.print("Warming up...");

   pinMode(greenLED, OUTPUT);
   pinMode(yellowLED, OUTPUT);
   pinMode(redLED, OUTPUT);

   delay(3000); // short warm-up
}

void loop() {
   int airValue = analogRead(sensorPin);
   String status;

// Air quality thresholds (you can adjust later)
   if (airValue < 200) {
     status = "Good";
     digitalWrite(greenLED, HIGH);
     digitalWrite(yellowLED, LOW);
     digitalWrite(redLED, LOW);
}
   else if (airValue < 400) {
     status = "Moderate";
     digitalWrite(greenLED, LOW);
     digitalWrite(yellowLED, HIGH);
     digitalWrite(redLED, LOW);
}
   else {
     status = "Poor";
     digitalWrite(greenLED, LOW);
     digitalWrite(yellowLED, LOW);
     digitalWrite(redLED, HIGH);
}

// Update LCD
   lcd.clear();
   lcd.setCursor(0, 0);
   lcd.print("Air Quality:");
   lcd.setCursor(0, 1);
   lcd.print(status);

// Send data to Python
   Serial.print(airValue);
   Serial.print(",");
   Serial.println(status);

   delay(1000);
}
