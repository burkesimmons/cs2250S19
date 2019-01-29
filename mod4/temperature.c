
 =====================================================================================

       Filename:  temperature.c

    Description:  Program to calculate temperature

        Version:  1.0
        Created:  01/15/2019 09:27:17 AM
       Revision:  none
       Compiler:  gcc temperature.c -o temperature.out

         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
   Organization:  WSU

 =====================================================================================

#include <stdio.h>

// Constants

// Function Prototypes

// Main Functio%n
int main()
{

    //float temp = 7.9; // Celcius
    double in_temp, out_temp;
    int choice; 
//1) Ask user which temperature mode theywant to use
    printf("Welcom to the temperature calculator\n");
    printf("Please enter yourchoice:\n");
    printf("\t0 for Celcius or1 forFahrenheit: \n");
    scanf("%d", &choice);
//2) Basedonchoice calculate Celcius or Fahrenheit
    if(choice == 1)
    {
       printf("Enter the temperature in Celsius: ");
       scanf("%lf", &in_temp);
    //Convert from Fahrenheit to Celsius
    out_temp = (in_temp - 32 * 9.0/5.0) + 32;
    printf("Your temperature in Fahrenheit is: %lf\n", out_temp);
    }
    else if {(choice == 1)
       printf("Enter the temperature in Fahrenheit: ");
       scanf("%lf", &in_temp);
    //Convert from Fahrenheit to Celsius
    out_temp = (in_temp - 32 * 9.0/5.0) + 32;
    printf("Your temperature in Fahrenheit is: %lf\n", out_temp);
       }
    else
    {
        printf("Sorry, you did not enter 0 or 1\nAdios amigo\n");
    }
/*
        printf("The temperature is %f Celsius\n", temp);
    // Now take user input
    printf("What is the temperature in Ogden now in Celsius: ");
    // use %f to capture float information
    // use %lf to capture double information
    scanf("%f", &temp);
    //Convert from Celsius to Fahrenheit
    f_temp = (temp * 9/5) +32;
    printf("I see, your temp is %lf in Fahrenheit.\n", f_temp);
*/
    return 0;
}
// Function Definitions


