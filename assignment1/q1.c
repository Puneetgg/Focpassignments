#include <stdio.h>

int main() {
    int num, realnum, rem, n = 0;
    int result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    realnum = num;

    while (realnum != 0) {
        realnum /= 10;
        ++n;
    }

    realnum = num;

    while (realnum != 0) {
        rem = realnum % 10;

        int power = 1;
        for (int i = 0; i < n; i++) {
            power *= rem;
        }

        result += power;
        realnum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num );
    else
        printf("%d is not an Armstrong number.\n", num );

    return 0;
}