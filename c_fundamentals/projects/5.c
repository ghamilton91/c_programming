/*
    Write a program that asks the user to enter a vlue for x and then displays the value of the 
    following polynomial:

    3x5 + 2x4 - 5x3 - x2 + 7x - 6
*/

#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter a value: ");
    scanf("%d", &x);

    printf("Value of 3x5 + 2x4 - 5x3 - x2 + 7x - 6: %d.\n", (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6);
    return 0;
}