/****************************************************************
 *                                                              *
 *      This program calculate the area of circle               *
 *                                                              *
 *       Input:                                                 *
 *                 radius = 22                                  *
 *                                                              *
 *       Formula: areaOfCircle = PI * R * R                     *
 *                                                              *
 *                areaOfCircle = 3.14 * 22 * 22                 *
 *                                                              *
 *                                                              *
 *       Output:                                                *
 *                 The area of circle is = 1519.76              *
 *                                                              *
 ****************************************************************/

#include<stdio.h>

int main() {

    float radius, areaOfCircle;
    float PI = 3.14;

    printf("\nEnter the radius of circle : ");
    scanf("%f", &radius);

    areaOfCircle = PI * radius * radius;

    printf("\n\nArea of circle is : %.2f\n\n", areaOfCircle);

    return 0;
}