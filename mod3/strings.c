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

// Function Prototypes

// Main Function
int main()
{
    //A string is alist/collection of characters (array)
    //Strings use %s as the placeholder
    char firstName[SIZE];
    printf("Please enter your name(<%d characters): ", SIZE);
    // When using arrays, DO NOT include the '&' operator in your scanf
    scanf("%s", firstName);
    printf("Hi [%s]\n", firstName);


    return 0;
}
