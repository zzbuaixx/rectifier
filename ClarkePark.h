#ifndef CLARKEPARK_H_
#define CLARKEPARK_H_

#if defined(EXPORT_CLARKEPARK_H_)
  #define EXTERN
#else
  #define EXTERN extern
#endif
	
typedef struct CLARKE_  //CLARKE变换结构体
{
	float  f32As;
	float  f32Bs;
	float  f32Cs;
	float  f32Alpha;
	float  f32Beta;
} CLARKE;

typedef struct ICLARKE_  //CLARKE变换结构体
{
	float  f32As;
	float  f32Bs;
	float  f32Cs;
	float  f32Alpha;
	float  f32Beta;
} ICLARKE;

typedef struct PARK_  //PARK变换结构体
{
	float  f32Alpha;
	float  f32Beta;
	float  f32Angle;
	float  f32Ds;
	float  f32Qs;
	float  f32Sine;
	float  f32Cosine;
} PARK;
	
typedef struct IPARK_  //反park变换结构体
{
	float  f32Alpha;
	float  f32Beta;
	float  f32Angle;
	float  f32Ds;
	float  f32Qs;
	float  f32Sine;
	float  f32Cosine;
} IPARK;	

	




//EXTERN IPARK ipark_pi;
//EXTERN IPARK ipark_dinj;
//EXTERN IPARK ipark_cmp1;   //第一个矢量补偿的电流
//EXTERN IPARK ipark_cmp2;   //第一个矢量补偿的电流
//EXTERN CLARKE clarke;  //当前拍
//EXTERN CLARKE clarke_last;   //上一拍的
//EXTERN CLARKE clarke_base;   //基波电流
//EXTERN CLARKE clarke_short;
//EXTERN PARK park;//当前拍
//EXTERN PARK park_base;//基波电流
//EXTERN PARK park_comp1;//采样矢量1
//EXTERN PARK park_comp2;//采样矢量2

//EXTERN ICLARKE iclarke_cmp1;  //第一个矢量补偿的电流
//EXTERN ICLARKE iclarke_cmp2;  //第一个矢量补偿的电流

EXTERN PARK Upark;
EXTERN PARK Ipark;
EXTERN IPARK Uipark;
											
EXTERN void CLARKE_MACRO(CLARKE* v);		
EXTERN void PARK_MACRO(PARK* v);
EXTERN void IPARK_MACRO(IPARK* v);	
	
#undef EXTERN
#endif

