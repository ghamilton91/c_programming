/* 
    Write a program that declares several int and float variables - without initializing
    them - and then prints their values. Is there any pattern to the values? (Usually there isn't)
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    float x, y;

    a = 3;
    b = 2;
    x = 10;
    y = 7.6;

    printf("A: %d B: %d\n", a, b);
    printf("X: %f Y: %f\n", x, y);
    return 0;
}