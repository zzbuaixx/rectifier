#define EXPORT_CLARKEPARK_H_
	#include "ClarkePark.h"
//	#include "UserIncludes.h"   //???奇葩问题
#undef EXPORT_CLARKEPARK_H_


void CLARKE_MACRO(CLARKE* v)
{
	v->f32Alpha = v->f32As;
	v->f32Beta = (v->f32As+2.0f*v->f32Bs)*0.5773502692f;
}

void ICLARKE_MACRO(ICLARKE* v)
{
	v->f32As = v->f32Alpha;
	v->f32Bs = -0.5f*v->f32Alpha + 1.732f*v->f32Beta;
  v->f32Cs = -0.5f*v->f32Alpha - 1.732f*v->f32Beta;
}


void PARK_MACRO(PARK* v)
{
	v->f32Ds = v->f32Alpha*v->f32Cosine + v->f32Beta*v->f32Sine;
	v->f32Qs = v->f32Beta*v->f32Cosine - v->f32Alpha*v->f32Sine;
}
//反park变换
void IPARK_MACRO(IPARK* v)
{
	v->f32Alpha = v->f32Ds*v->f32Cosine - v->f32Qs*v->f32Sine;
	v->f32Beta = v->f32Qs*v->f32Cosine + v->f32Ds*v->f32Sine;
}




