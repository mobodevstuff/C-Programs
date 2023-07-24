/****************************************************************
 *                                                              *
 *      This program calculate years from given days            *
 *                                                              *
 *       Input:                                                 *
 *                 days = 2211                                  *
 *                                                              *
 *       Formula: years = days / 365                            *
 *                         |                                    *
 *                years = 2211 / 365                            *
 *                                                              *
 *       Output:                                                *
 *                 Number of years is = 6.1                     *
 *                                                              *
 ****************************************************************/

#include<stdio.h>

int main() {

    float days, year;
    
    printf("\nEnter the days : ");
    scanf("%f", &days);

    year = days / 365;

    printf("\n\nNumber of years is : %.1f\n\n", year);

    return 0;
}