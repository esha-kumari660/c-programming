/* Write a program to input the annual taxable income and compute the tax according to the given condition.
Total Annual Taxable Income	Tax Rate
Up to Rs. 1,00,000	No Tax
From 1,00,001 to 1,50,000	10% of the income tax exceeding Rs. 1,00,000
From 1,50,001 to 2,50,000	Rs. 5000 + 20% of the income tax exceeding Rs. 1,50,000
Above 2,50,000	Rs. 25000 + 30% of the income tax exceeding Rs. 2,50,000 */ 

#include <stdio.h>

int main() {
    float income, tax;
    int category;

    printf("Enter the annual taxable income: ");
    scanf("%f", &income);

    if (income <= 100000) {
        category = 1;  
    } 
    else if (income <= 150000) {
        category = 2; 
    } 
    else if (income <= 250000) {
        category = 3;
    } 
    else {
        category = 4;
    }

    switch (category) {
        case 1:  
            tax = 0;
            break;

        case 2:  
            tax = (income - 100000) * 0.10;
            break;

        case 3:  
            tax = 5000 + (income - 150000) * 0.20;
            break;

        case 4:  
            tax = 25000 + (income - 250000) * 0.30;
            break;

        default:
            tax = 0; 
            break;
    }

    printf("The tax to be paid is: Rs. %.2f\n", tax);

    return 0;
}