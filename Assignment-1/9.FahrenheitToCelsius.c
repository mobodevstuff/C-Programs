/********************************************************************************
 *                                                                              *
 *      This program convert the temperature given in fFahrenheit to celsius    * 
 *                                                                              *
 *       Input:                                                                 *
 *                 fFahrenheit = 2211                                           *
 *                                                                              *
 *       Formula: 5.0/9.0 * (F - 32)                                            *
 *                           |                                                  * 
 *                5.0/9.0 * (2211 - 32)                                         *
 *                                                                              *
 *                                                                              *
 *       Output:                                                                *
 *                 Temperature in celsicus is = 1210.56                         *
 *                                                                              *
 ********************************************************************************/

#include<stdio.h>

int main() {

    float fFahrenheit, fCelsius;

    printf("\n Enter the temperature in fahrenheit : ");
    scanf("%f", &fFahrenheit);

    fCelsius = 5.0/9.0 * (fFahrenheit - 32);

    printf("\n The temperature in celsicus is : %.2f\n\n", fCelsius);

    return 0;
}