//Find exact power of 2 of a given number using bitwise operator.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    //check if the number is a power of 2 using bitwise operator and print the result
    printf("%d is %s power of 2\n", num,(num > 0 && (num &(num-1)) == 0) ? "an exact" : "not an exact");
    return 0;
}