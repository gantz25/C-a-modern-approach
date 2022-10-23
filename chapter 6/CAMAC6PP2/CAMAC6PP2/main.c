#include <stdio.h>
int main ( void )
{

    printf("enter two integers : ");
    int m , n , remainder = 0 ;
    scanf("%d %d",&m,&n);
    // Euclid's algorithm :
    /* having two ints if one of them is 0 then you should stop and the other one has the GCP
    otherwise you should compute the remainder if m is divided by n then copy n into m and the remainder into n then repeat till
    the remainder is 0 */
    while( n != 0)
    {
        remainder = m % n ;
        m = n ;
        n = remainder ;
    } ;
    printf("the remainder is %d ", m ) ;

    return 0 ;
}
