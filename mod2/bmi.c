/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:00:40 AM
 *       Revision:  none
 *       Compiler:  gcc
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

    //BMI = weight/height**2
    int weight = 0;
    int height = 0;
    int bmi = 0;
    
    //1) Capture user input: weight(kg) and height(m)
    printf("Enter your weight in kilograms: \n");
    scanf("%d", &weight);
    printf("Enter your height in meters: \n");
    scanf("%d", &height);
    //2) Calculate BMI
    bmi = weight/(height * height);
    //3) Display BMI
    printf("With %d kg and %d meters, your BMI is %d\n", weight, height, bmi);
    printf("Done\n");
    return 0;
}
// Function Definitions


