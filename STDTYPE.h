#ifndef STDTYPE_H_
#define STDTYPE_H_
/*unsigned data*/
typedef unsigned char          u8 ;
typedef unsigned short int     u16;
typedef unsigned long int      u32;
typedef unsigned long long int u64;


/*signed data*/
typedef signed char            s8 ;
typedef signed short int       s16;
typedef signed long int        s32;
typedef signed long long int   s64;


/*float*/
typedef float                  f32;
typedef double                 f64;


/*Bool*/
typedef enum {f,t}Bool;


/*null*/
#define null ((void*)0)
#endif