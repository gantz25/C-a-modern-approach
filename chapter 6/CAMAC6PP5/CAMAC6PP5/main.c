#include <stdio.h>

int main()
{
    int i , r = 0 ;
    int out = 0 ;
    printf("enter a number : ") ;
    scanf("%d",&i);
    while ( i != 0 )
    {
            r    = i % 10 ;
            out  = out * 10 + r  ;
            i   /= 10 ;
    } ;
    printf("the rev number is %d",out) ;


    return 0;
}
