/****************************************************************
 *                                                              *
 *      Write a program that accepts width and height and       *
 *      calculates the area of a rectangle                      *
 *                                                              *
 *       Input:                                                 *
 *                 width = 22                                   *
 *                 height = 11                                  *
 *                                                              *
 *       Formula: width * height                                *
 *                                                              *
 *                22 * 11                                       *
 *                                                              *
 *                                                              *
 *       Output:                                                *
 *                 The area of rectangle is = 242.00            *
 *                                                              *
 ****************************************************************/

#include<stdio.h>

int main() {

    float width, height, area;

    printf("\nEnter the width of rectangle : ");
    scanf("%f", &width);

    printf("\n\nEnter the height of rectangle : ");
    scanf("%f", &height);

    area = width * height;

    printf("\n\n Area of rectangle is : %.2f\n\n", area);

    return 0;
}