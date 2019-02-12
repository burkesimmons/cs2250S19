/*
 * =====================================================================================
 *
 *       Filename:  temperatures.c
 *
 *    Description:  Temperature analysis
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:39:00 AM
 *       Revision:  none
 *       Compiler:  gcc temperatures.c -o temperatures.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define NUM 4
// Function Prototypes#derine

// Main Function
int main()
{
    double max_ogden[NUM];

    max_ogden[0] = 40;
    max_ogden[1] = 38;
    max_ogden[2] = 44;
    max_ogden[3] = 40;

    printf("First max temp in Ogden is [%6.2lf]\n", max_ogden[0]);

    return 0;
}
// Function Definitions


