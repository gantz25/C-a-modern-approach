/* Book name : C a modern approach
*  Chapter   : 2
*  Programming Project :1
*  Name      : CAMA2PP8.c (c a modern approach chapter 2 example 2 and 4
*  Author    : Mohammed Ali
*  purpose   : a program that calculate the remaining balance on a loan after the first ,second and third monthly payments
*/
# include <stdio.h>

int main(void)
                           {

                               float balance,interest_rate,monthly_interest,payment=0;
                               printf("Enter the amount of loan: ");
                               scanf("%f",&balance);
                               printf("Enter the amount of interest rate: ");
                               scanf("%f",&interest_rate);
                               printf("Enter the amount of monthly payments: ");
                               scanf("%f",&payment);
                               monthly_interest=interest_rate/100/12;
                               float Fpayment=balance-payment+balance*monthly_interest;//the balance increase each month with monthly interest rate of the last amount you have
                               float Spayment=Fpayment-payment+Fpayment*monthly_interest;
                               float Tpayment=Spayment-payment+Spayment*monthly_interest;
                               printf("Balance after first payment: %.2f\n",Fpayment);
                               printf("Balance after second payment: %.2f\n",Spayment);
                               printf("Balance after the third payment: %.2f\n",Tpayment);
                               return 0;
                           }
