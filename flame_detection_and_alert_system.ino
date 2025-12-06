#include <Servo.h>

Servo servoMotor;

const int flamePin = 2;     // DO pin of flame sensor
const int buzzerPin = 8;    // Buzzer pin
const int servoPin = 9;     // Servo signal pin

void setup() {
  pinMode(flamePin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  servoMotor.attach(servoPin);

  servoMotor.write(90); // Start in middle position
  Serial.begin(9600);


