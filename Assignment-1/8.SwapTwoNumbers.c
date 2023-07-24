/********************************************************************
 *                                                                  *
 *      Write a program that accepts two numbers and swaps those    *
 *      two numbers using a third temporary variable.               *
 *                                                                  *
 *                                                                  *
 *       Input:                                                     *
 *                 iNumber1 = 11                                    *
 *                 iNumber2 = 22                                    *
 *                                                                  *
 *       Output:                                                    *
 *                 iNumber1 = 22                                    *
 *                 iNumber2 = 11                                    *
 *                                                                  *
 ********************************************************************/

#include<stdio.h>

int main() {


    int iNumber1, iNumber2, temp;

    printf("\nEnter the two numbers : ");
    scanf("%d %d", &iNumber1, &iNumber2);

    printf("\nThe numbers before swaping %d and %d\n", iNumber1, iNumber2);

    temp = iNumber1;
    iNumber1 = iNumber2;
    iNumber2 = temp;

    printf("\nThe numbers after swaping %d and %d\n", iNumber1, iNumber2);

    return 0;

}