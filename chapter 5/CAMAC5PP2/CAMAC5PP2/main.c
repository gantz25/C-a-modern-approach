/* Book name : C a modern approach
*  Chapter   : 5
*  Programming Project 2
*  Name      : CAMAC5PP2.c (c a modern approach chapter 5 example 2
*  Author    : Mohammed Ali
*  purpose   : Taking 24 hours time and printing 12 hour
*/
#include <stdio.h>
int main(void)
                            {

                                int x,y=0;
                                printf("Enter a 24 hour time : ");
                                scanf("%d:%d",&x,&y);
                                if (x>=1 && x<13)
                                {
                                    printf("Equivalent 12-hour time : %d:%d AM",x,y);
                                }
                                else
                                {
                                x-=12;
                                printf("Equivalent 12-hour time : %d:%d PM",x,y);
                                };





                                return 0;
                            }
