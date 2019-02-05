/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  learn while loops
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:37:04 AM
 *       Revision:  none
 *       Compiler:  gcc firstwhile.c -o firstwhile.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAXCOUNT 4
// Function Prototypes

// Main Function
int main()
{
    // Task 1: Calculate the average of user input values
    int count = 0;
    float grade, avg;
    float total = 0;

    while(count < MAXCOUNT) {
        printf("\nEnter %d hw grade(0-100): ", count + 1);
        scanf("%f", &grade);
        if (grade < 0 || grade > 100) {
            printf("Invalid input. Please try again\n");
            continue;   //invalid input
        }

        total += grade; // add up grades

        
        count++; //update test condition: sentinel
    }
    avg = total/MAXCOUNT;
    printf("Your avg is [%6.2f]\n", avg);
    printf("\nBye amigo\n");

    return 0;
}
// Function Definitions


