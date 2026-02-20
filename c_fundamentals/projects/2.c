/*
    Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3πr³.
    Write the function 4/3 as 4.0f/3.0f.(Try writing it as 4 / 3. What happens?)
*/

#include <stdio.h>

int main(void)
{
    #define SPHERE_RADIUS 10
    #define PI_VALUE 3.14159f
    float volume;

    volume = (4.0f / 3.0f) * PI_VALUE * (SPHERE_RADIUS * SPHERE_RADIUS * SPHERE_RADIUS);
    printf("The volume of a 10-meter radius sphere is %f.\n", volume);
    return 0;
}