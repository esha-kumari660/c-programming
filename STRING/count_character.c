// Count total numbers of character present into it
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,b=0;
    printf("Enter a string: ");
    getc(a);
    for(i=0;a[i]!=NULL;i++)
    {
        b++;
    }
    printf("Total number of character in string is: %d",b);
    return 0;
}