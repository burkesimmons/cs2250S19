/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Learn to use strings
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:49:22 AM
 *       Revision:  none
 *       Compiler:  gcc strings.c -o strings.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const int SIZE = 50;
// Function Prototypes

// Main Function
int main()
{
    //A string is alist/collection of characters (array)
    //Strings use %s as the placeholder
    char firstName[SIZE];
    unsigned int long age; // For unsigned use the %du, $lu, $llu
    char lastName[SIZE];
    printf("Please enter your firstName(<%d characters, NO space): ", SIZE);
    // When using arrays, DO NOT include the '&' operator in your scanf
    scanf("%s", firstName);

    printf("Enter your age: ");
    scanf("%lu", &age);

    printf("Please enter your 1Name (< %d characters, NO space): ", SIZE);
    scanf("%s", lastName);

    printf("Hi [%s][%s] [%lu] years old\n", firstName, lastName, age);


    return 0;
}
