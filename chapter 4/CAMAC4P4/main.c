/* Book name : C a modern approach
*  Chapter   : 4
*  Programming Project 2
*  Name      : CAMA2PP2.c (c a modern approach chapter 4 project 4
*  Author    : Mohammed Ali
*  purpose   : displaying octal of int input
*/

#include <stdlib.h>
int main(void){

                           int x=0;
                           printf("Enter a number between 0 and 32767 : ");
                           scanf("%d",&x);
                           int x1,x2,x3,x4,x5,x6;
                           x1=x%8;
                           x2=x/8%8;
                           x3=x/64%8;
                           x4=x/64/8%8;
                           x5=x/64/64%8;
                           printf("%d%d%d%d%d",x5,x4,x3,x2,x1);

                   return 0;        }
