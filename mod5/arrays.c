/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  First look at arrays
 *
 *        Version:  1.0
 *        Created:  02/07/2019 10:04:55 AM
 *       Revision:  none
 *       Compiler:  gcc arrays.c -o arrays.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define NUM 3
// Function Prototypes

// Main Function
int main()
{
    // Arrays use index notation to access members
    int grades[NUM];  // array of size NUM
    for (int i = 0; i < NUM; i++) {
        printf("Enter a number: \n");
        // DO NOT use the address (&) operator
        // Make sure you specify the index position in []
        scanf("%d", grades[i]); // TODO: How do I save the values???

    }
    printf("First number is [%d]\n", grades[0]);
    return 0;
}
// Function Definitions


