/*
Given an integer n, calculate the square of a number without 
using *, / and pow().  
*/
#include <stdio.h>

int square(int n) {
    int result = 0;
    int odd_number = 1;

    for (int i = 1; i <= n; i++) {
        result += odd_number;  
        odd_number += 2;       
    }

    return result; 
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = square(n);
    printf("The square of %d is: %d\n", n, result);

    return 0;
}
