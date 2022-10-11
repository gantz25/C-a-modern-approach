/* Book name : C a modern approach
*  Chapter   : 4
*  Programming Project :1
*  Name      : CAMA2PP2.c (c a modern approach chapter 4 example 1 and 2 and 3
*  Author    : Mohammed Ali
*  purpose   : Taking two digits from user and printing the reverse then three
*/
# include <stdio.h>
int main (void){
                           int x,f,s,t= 0;

                           printf("enter a two digit number :");
                           scanf("%2d",&x);
                           s=x/10;
                           f=x%10;
                           printf("%d%d\n",f,s);
                           x=0;
                           printf("enter a 3 digit number : ");
                           scanf("%d",&x);
                           t=x/100;
                           s=x%100/10;
                           f=x%100%10;
                           printf("%d%d%d",f,s,t);
                           printf("\nenter another 3 : ");
                           int y,z=0;
                           scanf("%1d%1d%1d",&x,&y,&z);
                           printf("%d%d%d",z,y,x);


                           return 0;}
