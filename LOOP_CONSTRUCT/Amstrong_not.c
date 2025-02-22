// Check that is number is Amstrong or not
#include<stdio.h>
int main()
{
    int n, sum = 0, temp, rem;
    printf("Enter any number: ");
    scanf("%d",&n);
    temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
        }
        if(n == sum)
        printf("%d is an Armstrong number", n);
        else
        printf("%d is not an Armstrong number", n);
    return 0;
}
