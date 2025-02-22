/*
Enter character by user and check weather it is capital 
latter, small latter, digit or special charecter
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any character: ");
    scanf("%d",&n);
    if(n >= 65 && n <= 90)
    {
        printf("CAPITAL LATTER");
    }
    else if(n >= 97 && n <= 122)
    {
        printf("small latter");
    }
    else if(n >=48 && n <= 57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special charecter");
    }
    return 0;
}