/*
* =====================================================================================
*
*       Filename:  temperature.c
*
*    Description:  Program to calculate temperature
*
*        Version:  1.0
*        Created:  01/15/2019 09:27:17 AM
*       Revision:  none
*       Compiler:  gcc temperature.c -o temperature.out
*
*         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
*   Organization:  WSU
*
* =====================================================================================
*/
#include <stdio.h>

// Constants
//const int CELSIUS = 0;
//const int FAHRENHEIT = 1;
#define CELSIUS 0
#define FAHRENHEIT 1
#define BOIL_CEL 100
#define BOIL_FAHR 212
#define FREEZE_CEL 0
#define FREEZE_FAHR 32
#define BOIL 1
#define LIQUID 2
#define ICE 3

// Function Prototypes

// Main Function
int main()
{

    //float temp = 7.9; // Celcius
    double in_temp, out_temp;
    int choice;
    int water_state = 0;
    //1) Ask user which temperature mode they want to use
    printf("Welcome to the temperature calculator\n");
    printf("Please enter your choice:\n");
    printf("\t0 for Celcius or 1 for Fahrenheit: \n");
    scanf("%d", &choice);
    //2) Based on choice calculate Celcius or Fahrenheit
    if(choice == CELSIUS)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &in_temp);
        //Convert from Fahrenheit to Celsius
        out_temp = (in_temp * 9.0/5.0) + 32;
        printf("Your temperature in Fahrenheit is: %.21lf\n", out_temp);
    }
    else if (choice == FAHRENHEIT)
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &in_temp);
        //Convert from Fahrenheit to Celsius
        out_temp = (in_temp - 32) * 5.0/9.0;
        printf("Your temperature in Fahrenheit is: %.21lf\n", out_temp);
    }
    else
    {
        printf("Sorry, you did not enter 0 or 1\nAdios amigo\n");
        return 0;
    }
    // Task 2:
    // Test for boiling point, feezing point and liquid point
    if(choice == CELSIUS)
    {
        if(in_temp >= BOIL_CEL)
        {
            water_state = BOIL;
            //printf("Your water is boiling\n");
        }
        
        else if (in_temp > FREEZE_CEL && in_temp < BOIL_CEL)//FAHRENHEIT
        {
            water_state = LIQUID;
            //printf("Your water is boiling\n");

        }
        else {
            water_state = ICE;
        }
    }
    else //FAHRENHEIT
    {
        if(in_temp >= BOIL_FAHR)
        {
            water_state = BOIL;
        }
        else if (in_temp > FREEZE_FAHR && in_temp < BOIL_CEL)
        {
            water_state = LIQUID;
        }
        else {
            water_state = ICE;
        }
    }
    // Switch
    switch(water_state)
    {
        case BOIL:
            printf("Your water is boiling\n");
            break; // exit your switch
        case LIQUID:
            printf("Your water is liquid\n");
            break;
        case ICE:
            printf("Your water is ice\n");
            break;
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


