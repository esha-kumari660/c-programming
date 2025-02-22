#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < 2 * n - 1; i++) {
        
        int a;
        if (i < n) a = 2 * (n - i) - 1;
        else a = 2 * (i - n + 1) + 1;

        for (int j = 0; j < a; j++)
            printf(" ");

        for (int k = 0; k < 2 * n - a; k++) {
            if (k == 0 || k == 2 * n - a - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}
