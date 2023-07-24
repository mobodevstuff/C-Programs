/****************************************************************
 *                                                              *
 *      This program convert kilometers to miles per hour       *
 *                                                              *
 *       Input:                                                 *
 *                 Enter kilometres per hour: 22                *
 *                                                              *
 *       Formula: miles = kilometres / 1.6                      *
 *                         |                                    *
 *                years = 22 / 1.6                              *
 *                                                              *
 *       Output:                                                *
 *                 13.75 miles per hour.                        *
 *                                                              *
 ****************************************************************/


#include <stdio.h>

int main() {

	float kilometers;

	printf("\n\nEnter kilometres per hour: ");
	scanf("%f", &kilometers);

	float miles = kilometers / 1.6;

	printf("\n%.2f miles per hour.\n\n", miles);

    return 0;
}