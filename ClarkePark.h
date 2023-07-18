#ifndef CLARKEPARK_H_
#define CLARKEPARK_H_

#if defined(EXPORT_CLARKEPARK_H_)
  #define EXTERN
#else
  #define EXTERN extern
#endif
	
typedef struct CLARKE_  //CLARKE�任�ṹ��
{
	float  f32As;
	float  f32Bs;
	float  f32Cs;
	float  f32Alpha;
	float  f32Beta;
} CLARKE;

typedef struct ICLARKE_  //CLARKE�任�ṹ��
{
	float  f32As;
	float  f32Bs;
	float  f32Cs;
	float  f32Alpha;
	float  f32Beta;
} ICLARKE;

typedef struct PARK_  //PARK�任�ṹ��
{
	float  f32Alpha;
	float  f32Beta;
	float  f32Angle;
	float  f32Ds;
	float  f32Qs;
	float  f32Sine;
	float  f32Cosine;
} PARK;
	
typedef struct IPARK_  //��park�任�ṹ��
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
//EXTERN IPARK ipark_cmp1;   //��һ��ʸ�������ĵ���
//EXTERN IPARK ipark_cmp2;   //��һ��ʸ�������ĵ���
//EXTERN CLARKE clarke;  //��ǰ��
//EXTERN CLARKE clarke_last;   //��һ�ĵ�
//EXTERN CLARKE clarke_base;   //��������
//EXTERN CLARKE clarke_short;
//EXTERN PARK park;//��ǰ��
//EXTERN PARK park_base;//��������
//EXTERN PARK park_comp1;//����ʸ��1
//EXTERN PARK park_comp2;//����ʸ��2

//EXTERN ICLARKE iclarke_cmp1;  //��һ��ʸ�������ĵ���
//EXTERN ICLARKE iclarke_cmp2;  //��һ��ʸ�������ĵ���

EXTERN PARK Upark;
EXTERN PARK Ipark;
EXTERN IPARK Uipark;
											
EXTERN void CLARKE_MACRO(CLARKE* v);		
EXTERN void PARK_MACRO(PARK* v);
EXTERN void IPARK_MACRO(IPARK* v);	
	
#undef EXTERN
#endif

