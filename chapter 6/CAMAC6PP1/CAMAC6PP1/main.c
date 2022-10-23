#include <stdio.h>
int main ( void )
{
    float i,d = 0 ;
    while( 1 )
    {
       printf("Enter a number : ") ;
       scanf( "%f" , &i );
       if ( i > d )
       {
          d = i ;
       } ;
       if ( i == 0 )
       {
           break ;
       }
    } ;
    printf("the largest number was %f",d) ;


    return 0;
}
