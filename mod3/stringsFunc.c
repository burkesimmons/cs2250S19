/*
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  Learn some string functions
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:08:18 AM
 *       Revision:  none
 *       Compiler:  gcc stringsFunc.c -o stringsFunc.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>              // for string manipulation operations

// Constants

// Function Prototypes

// Main Function
int main()
{
    char first[50];
    char last[50];
    char fullName[100];

    printf("Enter your first and last name: \n");
    scanf("%s %s", first, last);
    printf("Your name is [%s][%s]\n", first, last);
    strcpy(fullName, first); //fullName = first
    strcat(fullName, " "); //fulllName = fullName + " "
    strcat(fullName, last); //fullName = fullName + last
    printf("Your full name is: [%s]\n", fullName);

    return 0;
}
// Function Definitions


