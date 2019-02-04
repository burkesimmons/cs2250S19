/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  Calculate the cartesian coordinates based on:
 *                  radius and theta angle(degrees)
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:42:24 AM
 *       Revision:  none
 *       Compiler:  gcc cartesian.c -o cartesian.out -lm
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double PI = 3.14159;
// Function Prototypes

// Main Function
int main()
{
    double radius, theta, x_pos, y_pos;

    // 1) Capture user input for radius and theta angle(degrees)
    printf("What is the radius?");
    scanf("%lf", &radius);
    printf("What is the angle in degrees?");
    scanf("%lf", &theta);
    
    // 2) Convert the theta angle to radians
    theta = theta * PI / 180;
    // 3) Calculate your cartesian coordinates
    x_pos = radius * cos(theta);
    y_pos = radius * sin(theta);
    // 4) Print the result: format should be 2 decimal places for x and y
    // %.2lf use only 2 decimal places
    // %5.2lf use only 2 decimal places, 5 chars wide
    // %5.21lf use only 2 decimal places, 5 chars wide, left justify
    // %5.21lf use only 2 decimal places, 5 chars wide, left justify, 
    // zero padded
    
    printf("Your Cartesian Coordinates, x = [%5.2lf]\n", x_pos);
    printf("Your Cartesian Coordinates, y = [%5.2lf]\n", y_pos);
    return 0;
}
// Function Definitions


