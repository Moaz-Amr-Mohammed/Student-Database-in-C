#include<stdio.h>
#include "STDTYPE.h"
#include "SDB.h"
#include<stdlib.h>
static student database[10];
static u8 num=0;
Bool SDB_IsFull (){
if(num>=10){return t;}
else{return f;}	
}
u8 SDB_GetUsedSize(){
	return num;
	}
Bool SDB_AddEntry(){
if(SDB_IsFull ()){
		printf("The database is full");
		return f;
	}
else{
printf("Enter the student data \n");
student st;
student*ptr=&st;
printf("Enter Student_ID : \n");
scanf("%d",&ptr->Student_ID );
printf("Enter Student_year \n");
scanf("%d",&ptr->Student_year);
printf("Enter Course1_ID \n");
scanf("%d",&ptr->Course1_ID);
printf("Enter Course1_grade \n");
scanf("%d",&ptr->Course1_grade);
printf("Enter Course2_ID \n");
scanf("%d",&ptr->Course2_ID);
printf("Enter Course2_grade \n");
scanf("%d",&ptr->Course2_grade);
printf("Enter Course3_ID \n");
scanf("%d",&ptr->Course3_ID);
printf("Enter Course3_grade \n");
scanf("%d",&ptr->Course3_grade);
database[num++]=*ptr;
return t;
}
	
} 
void SDB_DeletEntry (u32 id){
if(SDB_IsIdExist (id)){
for(int i=0;i<num;i++){
	if(database[i].Student_ID==id){
	for(int j=i;j<num-1;j++){
	database[j]=database[j+1];	
		}	
	num--;}
}	
}	
else{printf("ID doesn't exist");}		
} 
Bool SDB_ReadEntry (u32 id){
for(int i=0;i<num;i++){
if(database[i].Student_ID==id){
student*ptr=&database[i];
printf("The Student_ID is %d \n",ptr->Student_ID);
printf("The Student_year is %d \n",ptr->Student_year);
printf("The Course1_ID is %d \n",ptr->Course1_ID);
printf("The Course1_grade is %d \n",ptr->Course1_grade);
printf("The Course2_ID is %d \n",ptr->Course2_ID);
printf("The Course2_grade is %d \n",ptr->Course2_grade);
printf("The Course3_ID is %d \n",ptr->Course3_ID);
printf("The Course3_grade is %d \n",ptr->Course3_grade);
return t;
}
else{printf("ID not recognized");}		
}
return f;		
}
void SDB_GetList (u8 * count, u32 * list){	
*count=num;
printf("The number of ids in the database is %d\n",*count);	
for(int i=0;i<*count;i++){
list[i]=database[i].Student_ID;
printf("The student whose id is %d is number %d on the list\n",list[i],i+1);		
}	
		
}
Bool SDB_IsIdExist (u32 id){
	
for(int i=0;i<num;i++){
if(database[i].Student_ID==id){
	
return t;	
	
}
}

	
return f;	
}