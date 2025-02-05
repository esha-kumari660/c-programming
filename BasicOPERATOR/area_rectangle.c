#include<stdio.h>
int main()
{
    int length,width;
    printf("Enter length: ");
    scanf("%d",&length);
    printf("Enter width: ");
    scanf("%d",&width);
    int area_rectangle = length*width;
    printf("Area of rectangle is:%d",area_rectangle);
    return 0;
}