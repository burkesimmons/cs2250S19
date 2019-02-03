/*
 * =====================================================================================
 *
 *       Filename:  string_test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/29/2019 06:03:18 PM
 *       Revision:  none
 *       Compiler:  gcc
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
/*
    char bodyChar;
    char headChar;

    printf("Type two characters: ");
    scanf(" %c", &bodyChar);
    scanf(" %c", &headChar);

    printf("%c%c%c", bodyChar, bodyChar, bodyChar);
    printf("%c\n", headChar);
*/
    
    int userInt;
    double userDouble;
    char userCharacter;
    char userString[50];

    printf("Enter integer:\n");
    scanf("%d", &userInt);

    printf("Enter double:\n");
    scanf("%lf", &userDouble);

    printf("Enter character:\n");
    //push to github with no password
    scanf(" %c", &userCharacter);
    printf("this is new");
    printf("Enter string:\n");
    scanf("%s", userString);

    printf("%d %lf %c %s\n", userInt, userDouble, userCharacter, userString);


    return 0;
}
// Function Definitions


