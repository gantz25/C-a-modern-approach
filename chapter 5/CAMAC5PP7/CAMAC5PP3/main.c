/* Book name : C a modern approach
*  Chapter   : 5
*  Programming Project 7
*  Name      : CAMAC5PP2.c (c a modern approach chapter 5 example 5
*  Author    : Mohammed Ali
*  purpose   : printing the max and min of 4 numbers
*/
#include <stdio.h>
int main(void)
{
    int x,y,z,s=0;
    printf("enter four integers : ");
    scanf("%d %d %d %d",&x,&y,&z,&s);
    int d,m=0;
    d=x>y?x:y;
    d=d>z?d:z;
    d=d>s?d:s;
    m=x<y?x:y;
    m=m<z?m:z;
    m=m<s?m:s;
    printf("Largest : %d\nSmallest : %d",d,m);






    return 0;
}
