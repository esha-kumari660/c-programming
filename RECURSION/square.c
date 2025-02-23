// sum of square of 1to n
#include<stdio.h>
int sum(int n);
int main()
{
    int n,a;
    printf("Enter a number:");
    scanf("%d",&n);
    a=sum(n);
    printf("Sum of square of 1 to %d is %d",n,a);
    return 0;
}
int sum(int n)
{
    if(n<1)
    {
        return (0);
    }
    else{
        return (n*n+sum(n-1));
    }
}