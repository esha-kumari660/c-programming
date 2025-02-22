#include <stdio.h>

int main()
{
    int rows;
    printf("enter the no of rows:");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++){
        for (int j = i; j <= rows; j++) {
       }
       for(int k=1; k<= i; k++){
           printf("*");
       }
        printf("\n");
    }
    return 0;
}
