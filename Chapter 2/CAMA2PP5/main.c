/* Book name : C a modern approach
*  Chapter   : 2
*  Programming Project :1
*  Name      : CAMA2PP4.c (c a modern approach chapter 2 example 2 and 4
*  Author    : Mohammed Ali
*  purpose   : taking an input x then printing the function 3x^5+2x^4-5x^3-x^2+7x-6 and using hroner's rule
*/
# include <stdio.h>

int main(void){

        int x=0;
        printf("please enter a value of x:   ");
        scanf("%d",&x);
        printf("%d\n",3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6);
        printf("Horner's rule\n%d",((((3*x+2)*x-5)*x-1)*x+7)*x-6);

return 0;
                           }
