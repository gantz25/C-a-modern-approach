/* Book name : C a modern approach
*  Chapter   : 5
*  Programming Project 4
*  Name      : CAMAC5PP2.c (c a modern approach chapter 5 example 4
*  Author    : Mohammed Ali
*  purpose   : using a simplified version of beaufort scale ,user enters wind speed in knots to display corresponding description
*/
#include <stdio.h>
int main (void)
                            {

                                int x=0;
                                printf("enter wind speed : ");
                                scanf("%d",&x);
                                if (x<1)
                                {
                                    printf("Calm");
                                }
                                else if (x>=1 && x<=3){printf("light air");}
                                else if (x>=4 && x<=27) { printf("Breeze");}
                                else if (x>= 28 && x<= 47){printf("Gale");}
                                else if (x >= 48 && x<=63) {printf("Storm");}
                                else {printf("Hurricance");};

                                return 0;
                            }
