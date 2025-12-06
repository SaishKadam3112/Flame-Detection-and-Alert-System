#include <Servo.h>

Servo servoMotor;

const int flamePin = 2;     // DO pin of flame sensor
const int buzzerPin = 8;    // Buzzer pin
const int servoPin = 9;     // Servo signal pin

void setup()
{
  pinMode(flamePin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  servoMotor.attach(servoPin);

  servoMotor.write(90); // Start in middle position
  Serial.begin(9600);

  Serial.println("Flame Detection System Started...");
}

void loop() {
  int flameStatus = digitalRead(flamePin);

 if (flameStatus == LOW)
{   // LOW = Flame detected
    Serial.println("🔥 Flame Detected!");

    digitalWrite(buzzerPin, HIGH);  // Turn on buzzer

   // Servo Tracking Movement
    for (int pos = 0; pos <= 180; pos++) 
    {
      servoMotor.write(pos);
      delay(5);
    }


