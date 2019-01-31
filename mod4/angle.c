/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description:  Calculate the quadrant based on input angle
 *                  Quadrant I: angle between 0 and 90
 *                  Quadrant II: angle between 90 and 180
 *                  Quadrant III: angle between 180 and 270
 *                  Quadrant IV: angle between 270 and 360
 
 *        Version:  1.0
 *        Created:  01/31/2019 08:35:35 AM
 *       Revision:  none
 *       Compiler:  gcc angle.c -o angle.out -lm
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> // for regular abs()
#include <math.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    int angle;
    printf("Enter an angle between 0 and 360 degrees:\n");
    scanf("%d", &angle);
    
// Check for angles > 360;
     angle = angle % 360;

    if(angle < 0)
    {
        angle = abs(360 + angle);
    }

   

    if (angle > 0 && angle < 90) //Quadrant I
    {
    printf("Your angle is in Quadrant I\n");
    }
    else if (angle > 90 && angle < 180) //Quadrant II
    {
    printf("Your angle is in Quadrant II\n");
    }
    else if (angle > 180 && angle < 270) //Quadrant III
    {
    printf("Your angle is in Quadrant III\n");
    }
    else if (angle > 270 && angle < 360) //Quadrant IV
    {
    printf("Your angle is in Quadrant IV\n");
    }
   
    return 0;
}
// Function Definitions


