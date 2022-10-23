//this project 11 and 12 but on repeat
#include <stdio.h>
int main ( void )
{
    int opt = 0;
    int i,repeat = 0 ;
    int n = 1 ;
    float sum = 0 ;
    float mult=0;
    float epsilon = 0 ;
   do {
    printf("This program can calculate e value of a number that you enter or keeps \ncalculating till it becomes smaller than a number you enter\nenter 1 for the first or 2 for the second\n");
   scanf("%d",&opt);
   if ( opt == 1 )
   {
    printf("enter an int ");
    scanf("%d",&i);
    sum = 0;
    while (n <= i)
    {
        mult = 1 ;
        for (int s = 1;s<=n;s++){mult*=s;};
        sum=sum+1/mult;
        n++;

    };
    printf("%f",sum);
    n=1;
    sum=0;
    mult=1;
   }
   else
    {

    sum = 0 ;
   printf("enter the epsilon : ") ;
   scanf("%f",&epsilon);
    while (1/mult >= epsilon)
    {
        mult = 1 ;
        for (int s = 1;s<=n;s++){mult*=s;};
        sum=sum+1/mult;
        n++;
    };
    printf("%f",sum);
    n=1;
    sum = 0;
    mult = 1 ;




    };
    printf("\ndo you want to repeat ? if yes enter 1 or no enter 0 ");
    scanf ("%d",&repeat);

   }while ( repeat == 1);
    return 0 ;
}
