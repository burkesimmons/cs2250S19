/*
 * =====================================================================================
 *
 *       Filename:  bmi2.c
 *
 *    Description:  Calculate the BMI with floating points (IEEEE-754) single
 *                  and double precission.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:00:40 AM
 *       Revision:  none
 *       Compiler:  gcc bmi2.c -o bmi2 -lm
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{

    //BMI = weight/height**2
    float weight = 0;
    float height = 0;
    double bmi = 0;
    
    //1) Capture user input: weight(kg) and height(m)
    printf("Enter your weight in kilograms: \n");
    scanf("%f", &weight);
    printf("Enter your height in meters: \n");
    scanf("%f", &height);
    //2) Calculate BMI
    bmi = weight/pow(height, 2);
    //3) Display BMI
    printf("With %f kg and %f meters, your BMI is %lf\n", weight, height, bmi);
    printf("Done\n");
    return 0;
}
// Function Definitions


