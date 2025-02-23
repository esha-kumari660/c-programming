// Enter any string by user and display the string in capital latter
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i;
    printf("Enter any string by user: ");
    gets(a);  // is a function in C that reads a line from the standard input (usually the keyboard)
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
            a[i] = a[i]-32;
        }
    }
    printf("String in capital letter: %s\n",a);
    return 0;
}