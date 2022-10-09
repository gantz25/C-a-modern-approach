/****************************************
*     C a modern approach
*       chapter 3 programming projects 4
*             Mohamed Ali
*     formatting FRACTIONS
*****************************************/
# include <stdio.h>

int main ( void ){

int x1,x2,x3,x4=0;
printf("enter two fractions separated with a plus sign : ");
scanf("%d/%d+%d/%d",&x1,&x2,&x3,&x4);
int dom =x2*x4;
int nom = x1*x4+x3*x2;
printf("The sum is : %d/%d",nom,dom);


return 0;}
