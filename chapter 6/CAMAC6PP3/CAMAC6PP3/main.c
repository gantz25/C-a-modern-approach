#include <stdio.h>
int main ( void )
{

    printf(" enter a fraction : ");
    int m , n , d , f , i = 0 ;
    scanf("%d/%d",&m,&n);
    d = m ;
    f = n ;
    while ( n != 0)
    {
       i = m % n ;
       m = n ;
       n = i ;
    } ;
    printf("the lowest term is : %d/%d",d/m,f/m);


    return 0 ;
}
