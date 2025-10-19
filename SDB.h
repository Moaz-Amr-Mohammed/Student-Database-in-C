#ifndef SDB_H_
#define SDB_H_
#include "STDTYPE.h"
typedef struct SimpleDb 
{ 
u32 Student_ID; 
u32 Student_year; 
u32 Course1_ID; 
u32 Course1_grade; 
u32 Course2_ID; 
u32 Course2_grade; 
u32 Course3_ID; 
u32 Course3_grade; 
} student;
Bool SDB_IsFull ();
u8 SDB_GetUsedSize();
Bool SDB_AddEntry(); 
void SDB_DeletEntry (u32 id); 
Bool SDB_ReadEntry (u32 id);
void SDB_GetList (u8 * count, u32 * list);
Bool SDB_IsIdExist (u32 id);
void SDB_APP ();
void SDB_action (u8 choice); 
#endif