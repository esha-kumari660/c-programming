#include<stdio.h>
int poweroftwo(int n)
{
    return(n>0 &&(n &(n-1))==0);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(poweroftwo(n))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}