// Sum of digits of any number
#include<stdio.h>

int sum(int);

int main()
{
    int n, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    a = sum(n);
    printf("Sum of digits of %d is %d", n, a);
    return 0;
}

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10 + sum(n / 10));
    }
}
