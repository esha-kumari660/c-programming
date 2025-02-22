// print the of the Fibonacci series 
#include<stdio.h>
int main()
{
    int n, i, t1 = 0, t2 = 1, nextTerm ;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        printf("%d", t1);
        else if (i == 1)
        printf("%d", t2);
        else
        {
            nextTerm = t1 + t2;
            t1 = t2 ;
            t2 = nextTerm ;
            printf("%d", nextTerm);
            }
            }
            return 0;
            
}