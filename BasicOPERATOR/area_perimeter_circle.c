#include<stdio.h>
int main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    float area_circle = 3.14*radius;
    float perimeter_circle = 2*3.14*radius;
    printf("Area of a circle is:%.2f \n",area_circle);
    printf("Perimeter of a circle is:%.2f",perimeter_circle);
    return 0;
}