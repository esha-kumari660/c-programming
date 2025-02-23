/*
Given two numbers A and B. Write a program to count the 
number of bits needed to be flipped to convert A to B
*/
#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    
    while (n) {
        count += n & 1; 
        n >>= 1;         
    }
    
    return count;
}
int countBitsToFlip(int A, int B) {
    return countSetBits(A ^ B);
}

int main() {
    int A, B;
    printf("Enter the first number (A): ");
    scanf("%d", &A);
    printf("Enter the second number (B): ");
    scanf("%d", &B);
    int result = countBitsToFlip(A, B);
    printf("Number of bits to flip to convert %d to %d: %d\n", A, B, result);

    return 0;
}
