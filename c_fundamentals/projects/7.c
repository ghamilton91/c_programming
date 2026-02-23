/*
    Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay 
    that amount using the smallest number of $20, $10, $5 and $1 bills:

    Enter a dollar amount: 93

    $20 bills: 4
    $10 bills: 1
    $5 bills: 0
    $1 bill: 3

    Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce
    the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use
    integer values throughout, not floating-point numbers.
*/

#include <stdio.h>

int main(void)
{
    int dollar_amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amount);

    printf("$20 bills: %d\n", (dollar_amount / 20));
    dollar_amount = dollar_amount - (dollar_amount / 20) * 20;
    printf("$10 bills: %d\n", (dollar_amount / 10));
    dollar_amount = dollar_amount - (dollar_amount / 10) * 10;
    printf("$5 bills: %d\n", (dollar_amount / 5));
    dollar_amount = dollar_amount - (dollar_amount / 5) * 5;
    printf("$1 bills: %d\n", (dollar_amount / 1));
    return 0;
}