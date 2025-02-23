// Find sum of fibonacci series up to N using function
#include <stdio.h>

int fibonacciSum(int N) {
    int a = 0, b = 1, nextTerm, sum = 0;

    if (N <= 0) {
        return 0;
    }

    sum += a;
    
    if (N >= 1) {
        sum += b;
    }

    for (int i = 2; i < N; i++) {
        nextTerm = a + b;
        sum += nextTerm;
        a = b;
        b = nextTerm;
    }

    return sum;
}

int main() {
    int N;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    int result = fibonacciSum(N);
    printf("Sum of the Fibonacci series up to %d terms is: %d\n", N, result);

    return 0;
}
