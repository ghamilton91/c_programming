/* Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere.*/

#include <stdio.h>

int main(void)
{
    #define PI_VALUE 3.14159f
    float volume;
    int radius;

    printf("Enter a sphere radius: ");
    scanf("%d", &radius);

    volume = (4.0f / 3.0f) * PI_VALUE * (radius * radius * radius);
    printf("The volume of a %d-meter radius sphere is %f.\n", radius, volume);
    return 0;
}