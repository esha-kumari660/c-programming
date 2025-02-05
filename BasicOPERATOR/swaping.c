#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",num2);
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Swaping two number (using third variable): %d%d\n",num1,num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("swapping two number (without using third variable): %d%d\n",num1,num2);

    (num1 = num1 + num2, num2 = num1 - num2, num1 = num1 - num2);
    printf("Swapping two number (within single statement using comma operator): %d%d",num1,num2);
    return 0;

}