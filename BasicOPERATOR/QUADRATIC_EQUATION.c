//Write a program to determine the roots of quadratic equation
#include <stdio.h>
#include <math.h> 

int main() {
    int a, b, c;
    float d,root1, root2;
    printf("Enter coefficients a: ");
    scanf("%d ", &a);
    printf("Enter coefficients b: ");
    scanf("%d ", &b);
    printf("Enter coefficients c: ");
    scanf("%d ", &c);
    
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf(" %.2f and %.2f\n", root1, root2);
        }
        else if (d == 0) {
            root1 = -b / (2.0 * a);
            printf(" %.2f\n", root1);
        }
        else {
            printf("roots are imajanary");
        }

    return 0;
}