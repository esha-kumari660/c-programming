/*
Write a program to print the entire prime no between 1 and  
300 using user define function 
*/
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1; 
}

int main() {
    printf("Prime numbers between 1 and 300 are:\n");
    
    for (int num = 1; num <= 300; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }

    return 0;
}
