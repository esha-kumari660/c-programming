//Enter arithmetic operator from user, perform operation on two numbers according to the operator using ternary operator
#include<stdio.h>
int main(){
    char operator;
    float num1, num2, result;
    
    //Input operater and two numbers
    printf("Enter operator(+, -,*,/):");
    scanf("%c", &operator);
    printf("Enter first number: ");
    scanf("%f ",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);
    
    //Perform the operation using ternary operator
    result = (operator == '+') ? num1 + num2:
             (operator == '-') ? num1 - num2:
             (operator == '*') ? num1 * num2:
             (operator == '/') ? (num2 !=0 ? num1 / num2 : 0) : 0;
    //Output the result   
    
     printf("result:%2f\n",result);       
    return 0;
}