 //check that number is prime or not
#include<stdio.h>
int main()
{

    int n,a=1,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while (a<=n)
    {
        if (n%a==0)
        {
            count++;
        }
        a++;
    }
    if (count==2)
    {
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
    return 0;
}
    
    