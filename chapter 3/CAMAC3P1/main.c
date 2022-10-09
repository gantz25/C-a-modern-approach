/****************************************
*     C a modern approach
*       chapter 3 programming projects 1
*             Mohamed Ali
*     writing a program to accept date from the user mm/dd/yyyy and displaying it in yyyymmdd
*****************************************/
#include <stdio.h>

int main ( void )
{
    printf("Enter a data (mm/dd/yyyy) : ");
    int m,d,y=0;

    scanf("%d/%d/%d",&m,&d,&y);

    printf("you entered the date %d%.2d%.2d",y,m,d);


    return 0;
}
