/****************************************
*     C a modern approach
*       chapter 3 programming projects 2
*             Mohamed Ali
*     formatting user input
*****************************************/
#include <stdio.h>

int main( void )
{   int d,m,y,n=0;
    float price=0;
    printf("enter item number :");
    scanf("%d",&n);
    printf("enter unit price : ");
    scanf("%f",&price);
    printf("enter the date as (m/d/y) : ");
    scanf("%d/%d/%d",&m,&d,&y);
    printf("item\tunit\tPurchase\n    \tPrice\tDate\n%-5d\t$%6.2f\t%2d/%2d/%4d",n,price,m,d,y);


    return 0;
}
