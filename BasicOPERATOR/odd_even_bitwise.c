//Find odd/even number using bitwise operator
#include<stdio.h>
int main(){
    int num;
    
    //Input a number
    printf("Enter a number: ");
    scanf("%d",&num);
    
    //Use the bitwise operator and print the result directly
    printf("%d is %s \n",num,(num & 1) ? "odd" : "even");
    return 0;
    
}