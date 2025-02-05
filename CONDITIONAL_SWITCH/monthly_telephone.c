/*	Write a program to calculate the monthly telephone bills as per the following rule.
    Minimum Rs. 100 for up to 50 calls
	Plus Rs. 0.80 per call for next 50 calls
	Plus Rs. 0.60 per call for next 100 calls
	Plus Rs. 0.40 per call for any call beyond 200 calls
*/
#include<stdio.h>
int main(){
    int call;
    float bill = 0.0;
    
    printf("Enter the number of calls made: ");
    scanf("%d",&call);
    if(call<=50)
    {
        bill=100;
    }
    else if(call>50 && call<=100)
    {
        bill=100+(call-50)*0.80;
    }
    else if(call>100 && call<=200)
    {
         bill=100+(50*0.80)+(call-100)*0.60;
    }
    else
    {
        bill=100+(50*0.80)+(100*0.60)+(call-200)*0.40;
    }
    printf("%f",bill);
    return 0;
}