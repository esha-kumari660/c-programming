/*
Given two integers say a and b. Find the quotient after 
dividing a by b without using multiplication, division, and 
mod operator
*/
#include <stdio.h>

int divide(int a, int b) {
    if (b == 0) {
        return -1;
    }

    int sign = 1;
    if (a < 0 && b > 0) {
        sign = -1;
        a = -a;  
    } else if (a > 0 && b < 0) {
        sign = -1;
        b = -b;  
    } else if (a < 0 && b < 0) {
        a = -a; 
        b = -b;
    }

    int quotient = 0;
    
    while (a >= b) {
        int temp = b, multiple = 1;

        while (a >= (temp << 1)) {
            temp <<= 1; 
            multiple <<= 1; 
        }
        a -= temp;
        quotient += multiple;
    }
    return sign * quotient;
}

int main() {
    int a, b;
    printf("Enter the first integer (a): ");
    scanf("%d", &a);
    printf("Enter the second integer (b): ");
    scanf("%d", &b);
    int result = divide(a, b);
    if (result != -1) {
        printf("The quotient of %d divided by %d is: %d\n", a, b, result);
    }

    return 0;
}
