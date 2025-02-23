// Factorial of any number
#include<stdio.h>
int fact(int);
int main()
{
    int n,y;
    printf("Enter a number: ");
    scanf("%d",&n);
    y=fact(n);
    printf("Factorial of %d = %d",y);
    return 0;
}
int fact(int n)
{
    if(n<=1)
    {
        return(1);
    }
    else{
        return(n*fact(n-1));
    }
}