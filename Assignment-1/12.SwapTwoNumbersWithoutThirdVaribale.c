/********************************************************************
 *                                                                  *
 *      This program swap two numbers without using extra variable  *
 *                                                                  *
 *       Input:                                                     *
 *                 number1 = 11                                     *
 *                 number2 = 22                                     *
 *                                                                  *
 *       Output:                                                    *
 *                 number1 = 22                                     *
 *                 number2 = 11                                     *
 *                                                                  *
 ********************************************************************/

#include<stdio.h>

int main() {


    int number1, number2;

    printf("\nEnter the two numbers : ");
    scanf("%d %d", &number1, &number2);

    printf("\nThe numbers before swap %d and %d\n", number1, number2);

    number2 = number1 + number2; 
    number1 = number2 - number1; 
    number2 = number2 - number1;

    printf("\nThe numbers after swap %d and %d\n", number1, number2);

    return 0;

}