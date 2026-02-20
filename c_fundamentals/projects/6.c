/*
    Modify the Programming Project 5 so that the polynomial is evaluated using the
    following formula:

    ((((3x + 2)x - 5)x - 1)x + 7)x-6
*/

#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter a value: ");
    scanf("%d", &x);

    printf("Value of ((((3x + 2)x - 5)x - 1)x + 7)x-6: %d.\n", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
    return 0;
}