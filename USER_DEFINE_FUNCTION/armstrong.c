/*
Write a program to print out all the Armstrong number  
between 100 and 500 using user define function
*/
#include <stdio.h>
#include <math.h>

int isArmstrong(int b) {
    int sum = 0;
    int a= b;
    int digits = 0;

    while (b != 0) {
        b /= 10;
        digits++;
    }

    b = a;

    while (b != 0) {
        int digit = b % 10;
        sum += pow(digit, digits);
        b /= 10;
    }

    return sum == a;
}

int main() {
    printf("Armstrong numbers between 100 and 500 are:\n");
    
    for (int b = 100; b < 500; b++) {
        if (isArmstrong(b)) {
            printf("%d ", b);
        }
    }

    return 0;
}
