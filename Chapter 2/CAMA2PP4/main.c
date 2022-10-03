/* Book name : C a modern approach
*  Chapter   : 2
*  Programming Project :1
*  Name      : CAMA2PP4.c (c a modern approach chapter 2 example 2 and 4
*  Author    : Mohammed Ali
*  purpose   : writing a program that print an entered amount of money with 5% tax added
*/
# include <stdio.h>
# define   TAX   .05f

int main(void)
{
    float money=0;
    printf("enter the amount of money : ");
    scanf("%f",&money);
    printf("                            ------\nWith Tax added            : $%f",money*TAX+money);

    return 0;
}
