#define EXPORT_PI_H_
	#include "PI.h"
#undef EXPORT_SVGEN_H_

void PIParameter_Init()
{
	pi_pll.f32Kp = 1.0f;
	pi_pll.f32Ki = 0.001f;
	pi_pll.u16En = 1;
	pi_pll.f32Umax = 1.5f;
	pi_pll.f32Umin = -1.5f;
	
	pi_Id.f32Ref = 0;
	pi_Id.f32Kp = -3.0f;
	pi_Id.f32Ki = -0.005f;
	pi_Id.u16En = 1;
	pi_Id.f32Umax = 1.0f;
	pi_Id.f32Umin = 0.4f;
	
	pi_Iq.f32Ref = 0;
	pi_Iq.f32Kp = -3.0f;
	pi_Iq.f32Ki = -0.005f;
	pi_Iq.u16En = 1;
	pi_Iq.f32Umax = 0.4f;
	pi_Iq.f32Umin = -0.4f;
	
	
}

void PIRegulator(PI_CONTROLLER* v)
{
	if(v->u16En == 1)
	{ 
		v->f32Err = v->f32Ref - v->f32Fbk;    //求误差
		//ui=kp*Uerr+i1
		v->f32ui = v->f32Kp*v->f32Err + v->f32i1;  //求输出
		
		if(v->f32ui > v->f32Umax)             //输出限幅
			v->f32Out = v->f32Umax;
		else if(v->f32ui < v->f32Umin)
			v->f32Out = v->f32Umin;
		else
			v->f32Out = v->f32ui;
		//v1=ui-out
		v->f32v1 = v->f32ui - v->f32Out;   //计算被限幅了多少
		//i1=i1+ki*err-v1
		v->f32i1 = v->f32i1 + v->f32Ki*v->f32Err - v->f32v1; //限幅部分从积分中减去，让比例项弥补，保证积分相最小化		
	}
	else
	{
		v->f32ui = 0;
		v->f32i1 = 0;
		v->f32v1 = 0;
		v->f32Out = 0;
	}
}

