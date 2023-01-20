#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

#include "CatixServoPlatformConstants.h"

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void setup()
{
  Serial.begin(115200);
  Serial.setTimeout(0xffffffff);

  pwm.begin();
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(50);  // Analog servos run at ~50 Hz updates

  delay(10);
}

uint16_t pulses[8] = {0, 0, 0, 0, 0, 0, 0, 0};

void allServoSet(Base *base)
{
  // Pulses
  for(int servo = 0; servo < 8; servo++)
  {
    pulses[servo] = getPulse(servo, base);
  }

  // PWM
  for(int servo = 0; servo < 8; servo++)
  {
    pwm.setPWM(servo, 0, pulses[servo]);  
  }
}

Base base;

void loop()
{
  int r = Serial.readBytes((char *)&base, sizeof(base));

  if(r == sizeof(base))
    allServoSet(&base);
}
