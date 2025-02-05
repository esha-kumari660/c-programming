#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    int greatest = (num1 > num2)? num1 : num2;
    printf("Greatest number is(using tenary operator): %d",greatest);
    return 0;
}