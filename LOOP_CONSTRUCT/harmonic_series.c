// Harmonic series and its sum up to n
#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum +=(float)1/i;
    }
    printf("sum of harmonic series up to %d terms is %.5f",n,sum);
    return 0;
}