#include<stdio.h>
int main(){
    float f,c;
    printf("Enter fahrenheit: ");
    scanf("%f",&f);
    printf("Enter celsius: ");
    scanf("%f",&c);
    float celsius = (f-32)*5/9; //fahreanheit into celsius
    float fahrenheit = (c*5/9)+32; // celsius into fahreanheit
    printf("Celsius is: %f\n",celsius);
    printf("Fahreanheit is: %f",fahrenheit);
    return 0;
}