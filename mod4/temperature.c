/*
 * =====================================================================================
 *
 *       Filename:  float.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:27:17 AM
 *       Revision:  none
 *       Compiler:  gcc float.c -o float
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{

    float temp = 7.9; // Celcius
    double f_temp = 0;
    // For float use the %f placeholder
    // For doubles use the %lf placeholder
    printf("The temperature is %f Celsius\n", temp);
    // Now take user input
    printf("What is the temperature in Ogden now in Celsius: ");
    // use %f to capture float information
    // use %lf to capture double information
    scanf("%f", &temp);
    //Convert from Celsius to Fahrenheit
    f_temp = (temp * 9/5) +32;
    printf("I see, your temp is %lf in Fahrenheit.\n", f_temp);

    return 0;
}
// Function Definitions


