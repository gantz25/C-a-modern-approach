/****************************************
*     C a modern approach
*       chapter 3 programming projects 3
*             Mohamed Ali
*     formatting ISBN
*****************************************/
#include <stdio.h>

int main ( void ){

int x1,x2,x3,x4,x5=0;
printf("Enter ISBN:  ");
scanf("%d-%d-%d-%d-%d",&x1,&x2,&x3,&x4,&x5);
printf("GSI prefix: %d\nGroup Identifier: %d\nPublisher Code: %d\nItem Number: %d\nCheck Digit: %d",x1,x2,x3,x4,x5);


return 0;}
