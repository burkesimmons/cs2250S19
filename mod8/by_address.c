/*
 * =====================================================================================
 *
 *       Filename:  by_address.c
 *
 *    Description:  Learn how to pass information to functions by reference
 *
 *        Version:  1.0
 *        Created:  02/26/2019 08:36:04 AM
 *       Revision:  none
 *       Compiler:  gcc by_address.c -o by_address.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes
void DisplayPosition(double x, double y);
void UpdatePosition(double x, double y,double new_x, double new_y);
// Main Function
int main(int argc, char* argv[])
{
    double x, y;
    if(argc != 3)
    {
        printf("Usage: %s <X_POS> <Y_POS>\n", argv[0]);
        return 1;
    }
    x = atof(argv[1]);  //convert the first input param to double
    y = atof(argv[2]);  //convert the second input param to double
    DisplayPosition(x, y);
    UpdatePosition(x, y, 2, 4);
    DisplayPosition(x, y);
    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayPostion
 *  Description:  Display current point position
 *  Param: x => x coordinate
 *  Param y => y coordinate
 *  Returns: nothing
 * =====================================================================================
 */
void DisplayPosition(double x, double y)
    {
        printf("Your initial position is (%4.2lf,%4.2lf)\n", x, y);
        return;
    }


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdatePosition
 *  Description:  Update point position to a new position
 *  Param: x => x coordinate
 *  Param y => y coordinate
 *  Param: x_new => new x coordinate
 *  Param: y_new => new y coordinate
 *  Returns: nothing
 * =====================================================================================
 */

void UpdatePosition(double x, double y,double new_x, double new_y)
    {
        printf("*********Updating position*******\n");
       DisplayPosition(x, y);
       x = new_x;
       y = new_y;
       DisplayPosition(x, y);
        printf("*********Done Updating position*********\n");
        return;
    }
