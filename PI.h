#ifndef PI_H_
#define PI_H_

//#include "UserIncludes.h"
#include "stm32f4xx_hal.h"

#if defined(EXPORT_PI_H_)
  #define EXTERN
#else
  #define EXTERN extern
#endif

	
typedef struct PI_CONTROLLER_
{
	float  f32Ref;
	float  f32Fbk;
	float  f32Out;
	float  f32Kp;
	float  f32Ki;
	float  f32Umax;
	float  f32Umin;
	float  f32Err;
	float  f32ui;
	float  f32v1;
	float  f32i1;
	uint16_t    u16En;
	uint16_t    u16LoopIndex;
} PI_CONTROLLER;	



#ifndef PI
#define PI                 3.14159265358979f
#endif

EXTERN PI_CONTROLLER pi_pll;
EXTERN PI_CONTROLLER pi_Id;	
EXTERN PI_CONTROLLER pi_Iq;	
	
EXTERN void PIRegulator(PI_CONTROLLER* v);
EXTERN void PIParameter_Init(void);
	
	
	
	
	
	
	
#undef EXTERN
#endif

