
#ifndef CATIX_SERVO_PLATFORM_CONSTANTS
#define CATIX_SERVO_PLATFORM_CONSTANTS


#define High_from_angle (0)
#define High_to_angle   (900)

#define FL_High_from  (480)
#define FL_High_to (285)

#define RL_High_from  (110)
#define RL_High_to (300)

#define FR_High_from  (110)
#define FR_High_to (300)

#define RR_High_from  (485)
#define RR_High_to (290)


#define Low_from_angle (570)
#define Low_to_angle   (900)

#define FL_Low_from  (180)
#define FL_Low_to  (270)

#define RL_Low_from  (405)
#define RL_Low_to  (315)

#define FR_Low_from  (400)
#define FR_Low_to  (310)

#define RR_Low_from  (195)
#define RR_Low_to  (275)

#pragma pack(push,1)
typedef struct _Base
{
   uint16_t FL_high = 0;
   uint16_t FL_low  = 0;

   uint16_t RL_high = 0;
   uint16_t RL_low  = 0;

   uint16_t FR_high = 0;
   uint16_t FR_low  = 0;

   uint16_t RR_high = 0;
   uint16_t RR_low  = 0;
   
} Base;
#pragma pack(pop)

uint16_t getPulse(uint8_t servo, Base *base)
{
  uint16_t pulse = 0;

  if(servo == 0)
    pulse = map(base->FL_high, High_from_angle, High_to_angle, FL_High_from, FL_High_to);
  
  if(servo == 1)
    pulse = map(base->FL_low, Low_from_angle, Low_to_angle, FL_Low_from, FL_Low_to);

  if(servo == 2)
    pulse = map(base->RL_high, High_from_angle, High_to_angle, RL_High_from, RL_High_to);

  if(servo == 3)
    pulse = map(base->RL_low, Low_from_angle, Low_to_angle, RL_Low_from, RL_Low_to);
    
  if(servo == 4)
    pulse = map(base->FR_high, High_from_angle, High_to_angle, FR_High_from, FR_High_to);

  if(servo == 5)
    pulse = map(base->FR_low, Low_from_angle, Low_to_angle, FR_Low_from, FR_Low_to);
  
  if(servo == 6)
    pulse = map(base->RR_high, High_from_angle, High_to_angle, RR_High_from, RR_High_to);

  if(servo == 7)
    pulse = map(base->RR_low, Low_from_angle, Low_to_angle, RR_Low_from, RR_Low_to);

  return pulse;
};

#endif
