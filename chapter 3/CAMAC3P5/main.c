/****************************************
*     C a modern approach
*       chapter 3 programming projects 5
*             Mohamed Ali
*     formatting inouts
*****************************************/
#include <stdio.h>

int main ( void)
{
    int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,col1,col2,col3,col4,row1,row2,row3,row4,d1,d2=0;
    printf("enter the numbers from 1 to 16 by any order : ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10
          ,&x11,&x12,&x13,&x14,&x15,&x16);
     col1=x1+x5+x9+x13;
     col2=x2+x6+x10+x14;
     col3=x3+x7+x11+x15;
     col4=x4+x8+x12+x16;
     row1=x1+x2+x3+x4;
     row2=x5+x6+x7+x8;
     row3=x9+x10+x11+x12;
     row4=x13+x14+x15+x16;
     d1=x1+x6+x11+x16;
     d2=x4+x7+x10+x13;
    printf("Row sums : %d %d %d %d\nColumns sum : %d %d %d %d\nDiagonal sums : %d %d",row1,row2,row3,row4,col1,col2,col3,col4,d1,d2);


    return 0;
}
