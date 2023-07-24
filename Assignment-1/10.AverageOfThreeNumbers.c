/****************************************************************
 *                                                              *
 *      Write a program that accepts three numbers and          *
 *      calculates the average of three numbers.                *
 *                                                              *
 *       Input:                                                 *
 *                 iNumber1 = 22                                *
 *                 iNumber2 = 11                                *
 *                 iNumber3 = 19                                *
 *                                                              *
 *       Formula: (iNumber1 + iNumber2 + iNumber3) / 3          *
 *                           |                                  *
 *                (22 + 11 + 19) / 3                            *
 *                                                              *
 *                                                              *
 *       Output:                                                *
 *                 The average of three number is = 17.33       *
 *                                                              *
 ****************************************************************/

#include<stdio.h>

int main() {

    float iNumber1, iNumber2, iNumber3, average;

    printf("\n Enter the three numbers one by one : ");
    scanf("%f %f %f", &iNumber1, &iNumber2, &iNumber3);

    average = (iNumber1 + iNumber2 + iNumber3) / 3;

    printf("\nThe avrage of three number is : %.2f\n\n", average);

    return 0;
}