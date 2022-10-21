/* Book name : C a modern approach
*  Chapter   : 5
*  Programming Project 9
*  Name      : CAMAC5PP2.c (c a modern approach chapter 5 example 9
*  Author    : Mohammed Ali
*  purpose   : printing the earliest date
*/
#include <stdio.h>

int main(void)

{

    int x,y,z,s,d,f=0;
    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d",&x,&y,&z);
    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d/%d/%d",&s,&d,&f);
    if (z<=f && y<=d && x<=s)
            {
                printf("%d/%d/%d is earlier than %d/%d/%d",z,y,x,f,d,s);
            }
    else{printf("%d/%d/%d is earlier than %d/%d/%d",f,d,s,z,y,x);};



    return 0;
}
