#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate,time;
    printf("Enter principal amount: ");
    scanf("%f",&principal);
    printf("Enter annual  interest rate: ");
    scanf("%f",&rate);
    printf("Enter number of yeras : ");
    scanf("%f",&time);
    float Amount = principal*pow((1 + rate / 100),time);
    float Compound_interest = Amount - principal;
    printf("Compound interest is: %.2f\n",Compound_interest);
    printf("Final amount is: %.2f",Amount);
    return 0;
}