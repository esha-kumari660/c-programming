//	Write a program to swap two numbers using bitwise operator
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter  first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    
    //Swap the numbers using bitwise XOR operator
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    
    printf("After swapping: num1 = %d, num2 = %d\n",num1,num2);
    return 0;
}