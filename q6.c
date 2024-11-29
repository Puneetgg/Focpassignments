#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Input the values for X and Y coordinate : ");
    scanf("%d %d", &num1, &num2); 

    if (num1 > 0 && num2 > 0)
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n", num1, num2);
    else if (num1 < 0 && num2 > 0)
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n", num1, num2);
    else if (num1 < 0 && num2 < 0)
        printf("The coordinate point (%d, %d) lies in the Third quadrant.\n", num1, num2);
    else if (num1 > 0 && num2 < 0)
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n", num1, num2);
    else if (num1 == 0 && num2 == 0)
        printf("The coordinate point (%d,%d) lies at the origin.\n", num1, num2); 
}