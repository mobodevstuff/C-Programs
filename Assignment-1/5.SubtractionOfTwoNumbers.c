/*****************************************************************
 *                                                               *
 *      This program performs the subtraction of two numbers     *
 *                                                               *
 *       Input:                                                  *
 *              iNumber1 = 22                                    *
 *              iNumber2 = 11                                    *
 *                                                               *
 *       Output:                                                 *
 *              The subtraction of two number is : 11            *
 *                                                               *
 ****************************************************************/


#include<stdio.h>

int main() {

    int iNumber1, iNumber2, result;

    // Accept the first number from user
    printf("\nEnter the first number : ");
    scanf("%d", &iNumber1);

    // Accept the second number from user
    printf("\nEnter the second number : ");
    scanf("%d", &iNumber2);

    // Subtraction
    result = iNumber1 - iNumber2;

    // Result of subtraction
    printf("\nThe subtraction of two number is : %d\n\n", result);

    return 0;
}