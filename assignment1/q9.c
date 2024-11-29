#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        int spaces = (rows - i) * 2;
        for (int k = 1; k <= spaces; k++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }

    return 0;
}