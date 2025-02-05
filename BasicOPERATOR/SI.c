#include<stdio.h>
int main(){
    float p,r,t;
    printf("Enter principal of amount: ");
    scanf("%f",&p);
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    printf("Enter time: ");
    scanf("%f",&t);
    float simple_interest = (p*r*t)/100;
    printf("Simple interest is:%d ",simple_interest);
    return 0;
}