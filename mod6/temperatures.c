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
    double min_ogden[NUM];
    int i;

    // Task: Capture max and min temps from user
    
    printf("Enter maximum temperatures for your city for the next %d days\n", NUM);
    for (i = 0; i < NUM; i++) {
        printf("%d day max and min\n", i+1);
        scanf("%lf %lf", &max_ogden[i], &min_ogden[i]);
    }

    //Task: calculate the average and min and maxof the date 
    //range for (int i = 0; i < NUM; i)
    //{
    
    for(i = 0; i < NUM; i++)
    {
        printf("%d) max[%6.2lf] min[%6.2lf] temps in Ogden\n", i+1, max_ogden[i], min_ogden[i]);
    }
    return 0;
}
// Function Definitions


