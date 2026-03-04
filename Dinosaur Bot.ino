// WRITTEN BY KANAN ABDULLAYEV

#include <Servo.h>
#define threshold 550
#define unpress_angle 110
#define press_angle 86

Servo myServo;                                                                                                                                            

int lightPin = A4;
int lightVal;

void setup() {
  Serial.begin(9600);
  myServo.attach(9);
  myServo.write(unpress_angle);
  pinMode(lightPin, INPUT);
}                              
void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  myServo.write(unpress_angle);
  delay(1);
  if (analogRead(A0) < threshold) {
    myServo.write(press_angle);
    delay(100);                  
  }       
} 

// WRITTEN BY KANAN ABDULLAYEV