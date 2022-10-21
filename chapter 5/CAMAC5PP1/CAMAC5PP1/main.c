/* Book name : C a modern approach
*  Chapter   : 4
*  Programming Project 1
*  Name      : CAMAC5PP1.c (c a modern approach chapter 5 example 1
*  Author    : Mohammed Ali
*  purpose   : printing the number of entered digits
*/
#include <stdio.h>
int main (void)
{

    int x=0;
    printf("enter a number : ");
    scanf("%d",&x);
    if (x>0 && x<100)
    {
        printf("you entered a number with 2 digits");
    }
    else if (x>=100 && x<1000)
    {
    printf("you entered a number with 3 digits");

    }
    else
    {
        printf("you entered a number of one digit");
    }

    return 0;
}
