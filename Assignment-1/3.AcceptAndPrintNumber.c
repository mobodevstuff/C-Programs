/************************************************************
 *                                                          *
 *      Write a program that accepts a number from the user *
 *      and prints that number.                             *
 *                                                          *
 *	    Input:                                              *
 *           2211	 				                        *
 *                                                          *
 *       Output:                                            *
 *           2211                                           *
 *                                                          *
 *************************************************************/


#include<stdio.h>

int main() {

    int iNumber;

    // Accept the number from user
    printf("\nEnter the number : ");
    scanf("%d", &iNumber);

    // Print the number 
    printf("\nThe entered number is : %d.", iNumber);

    return 0;
}