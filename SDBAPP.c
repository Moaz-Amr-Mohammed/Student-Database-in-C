#include<stdio.h>
#include "STDTYPE.h"
#include "SDB.h"
#include "SDB.c"
#include<stdlib.h>
void SDB_APP (){
u8 x=0;	
while (t){	
printf("1. To add entry, enter 1 \n");	
printf("2. To get used size in database, enter 2 \n");	
printf("3. To read student data, enter 3 \n");
printf("4. To get the list of all student IDs, enter 4 \n");
printf("5. To check if ID exists, enter 5 \n");
printf("6. To delete student data, enter 6 \n");
printf("7. To check if the database is full, enter 7 \n");
printf("8. To exit enter 0 \n");
printf("Your choice is : ");
scanf("%d",&x);
if(x==0){break;}
else SDB_action (x);
}

}
void SDB_action (u8 choice){
switch(choice){
case 1:{
SDB_AddEntry();	
break;	
}
case 2:{
printf("The used size in database is %d \n",SDB_GetUsedSize());
break;	
}	
case 3:{
printf("Enter id to read\n");
u32 a=0;
scanf("%d",&a);	
SDB_ReadEntry (a);	
break;	
}	
case 4:{
u8 count=0;	
u32 list[10];	
	
SDB_GetList (&count,list);	
break;	
}	
case 5:{
printf("Enter ID\n");
u32 a;
scanf("%d",&a);	
if(SDB_IsIdExist (a)){printf("ID Exists\n");}
else printf("ID doesn't exist\n");	
break;	
}	
case 6:{
printf("Enter ID\n");
u32 a;
scanf("%d",&a);	
SDB_DeletEntry (a);
break;	
}	
case 7:{
if(SDB_IsFull ()){printf("The database is full \n");}
else printf("There is space in the database \n");	
break;	
}	

	
	
}	
	
	
	
	
	
	
}