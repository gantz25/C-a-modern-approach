/* Book name : C a modern approach
*  Chapter   : 2
*  Programming Project :1
*  Name      : CAMA2PP4.c (c a modern approach chapter 2 example 2 and 4
*  Author    : Mohammed Ali
*  purpose   : taking an input x of usd dollars then showing how to pay it in 20,10,5 and 1's notes
*/
# include <stdio.h>

int main(void)
{
    int number_20,number_10,number_5,number_1,money=0;
    printf("Please enter the amount of money \n");
    scanf("%d",&money);
    number_20=money/20;
    number_10=(money-(number_20*20))/10;
    number_5=(money-(number_20*20)-(number_10*10))/5;
    number_1=(money-(number_20*20)-(number_10*10)-(number_5*5))/1;
    printf("\n$20  bills: %d\n$10  bills: %d\n$5  bills: %d\n$1  bills: %d",number_20,number_10,number_5,number_1);
    return 0;
}
