/*
 * =====================================================================================
 *
 *       Filename:  soccer.c
 *
 *    Description:  Implementation file of the soccer library
 *                  This file does NOT have a main() function
 *                  No prototypes
 *                  Maybe some local constants
 *                  Include your header file "soccer.h"
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:44:49 AM
 *       Revision:  none
 *       Compiler:  gcc soccer.c -o soccer.out
 *          Usage:  ./soccer.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "soccer.h"         // header file

// Function Prototypes
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetUserNumberAndRatings
 *  Description:  Collect Players Numbers and Ratings
 *  Param: nums: Array of int numbers
 *  Param: ratings: Array of int ratings
 *  Note: We will link both arrays by index notation
 * =====================================================================================
 */

void GetUserNumberAndRatings(int nums[], int ratings[])
{
    int i;
    // Get user defined jersey numbers and ratings
    for (i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Enter player %d's jersey number:\n", (i + 1));
        scanf("%d", &(nums[i]));

        printf("Enter player %d's rating:\n", (i + 1));
        scanf("%d", &(ratings[i]));
        printf("\n");
    }
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayRoster
 *  Description:  Display current roster information
 *  Param: nums: Array of int numbers
 *  Param: ratings: Array of int ratings
 * =====================================================================================
 */

void DisplayRoster(int nums[], int ratings[])
{
    int i;
    // Print roster
    printf("ROSTER\n");
    for (i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), nums[i], ratings[i]);
    }
    return;
}

