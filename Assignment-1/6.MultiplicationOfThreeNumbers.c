/****************************************************************
 *                                                              *
 *      This program perfrom multiplication of three numbers    *
 *                                                              *
 *       Input:                                                 *
 *              iNumber1 = 22                                   *
 *              iNumber2 = 11                                   *    
 *              iNumber3 = 19                                   *
 *                                                              *
 *       Output:                                                *
 *              The multiplication of three number is : 4598    *
 *                                                              *
 ****************************************************************/


#include<stdio.h>

int main() {

    int iNumber1, iNumber2, iNumber3, result;

    // Enter first number
    printf("\nEnter the first number : ");
    scanf("%d", &iNumber1);

    // Enter second number
    printf("\nEnter the second number : ");
    scanf("%d", &iNumber2);

    // Enter third number
    printf("\nEnter the third number : ");
    scanf("%d", &iNumber3);

    // Multiplication
    result = iNumber1 * iNumber2 * iNumber3;

    // Result of multiplication
    printf("\nThe multiplication of three number is : %d\n\n", result);

    return 0;
}