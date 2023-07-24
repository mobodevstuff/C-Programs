/************************************************************
 *                                                          *
 *      This program perfrom division of two numbers        *
 *                                                          *
 *       Input:                                             *
 *              iNumber1 = 22                               *
 *              iNumber2 = 11                               *
 *                                                          *
 *       Output:                                            *
 *              The Division of two number is : 2           *
 *                                                          *
 ************************************************************/


#include<stdio.h>

int main() {

    int iNumber1, iNumber2, result;

    // Enter first number
    printf("\nEnter the first number : ");
    scanf("%d", &iNumber1);

    // Enter second number
    printf("\nEnter the second number : ");
    scanf("%d", &iNumber2);

    // Devision
    result = iNumber1 / iNumber2;

    // Result of Devision
    printf("\nThe devision of two number is : %d\n\n", result);

    return 0;
}