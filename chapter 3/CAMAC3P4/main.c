/****************************************
*     C a modern approach
*       chapter 3 programming projects 4
*             Mohamed Ali
*     formatting PHONE NUMBERS
*****************************************/
int main( void )
{

    int x1,x2,x3=0;

    printf("enter a phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d",&x1,&x2,&x3);
    printf("You entered %d.%d.%d",x1,x2,x3);

    return 0;
}
