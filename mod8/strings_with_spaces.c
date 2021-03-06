/*
 * =====================================================================================
 *
 *       Filename:  strings_with_spaces.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:29 AM
 *       Revision:  none
 *       Compiler:  gcc strings_with_spaces.c -o strings_with_spaces.out
 *          Usage:  ./strings_with_spaces.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strlen()
#include <ctype.h> // islower(), toupper()

// Constants
const int INPUT_SIZE = 50;
// Function Prototypes
void StrSpaceToHyphen(char inputStr[]);

// Main Function
int main(int argc, char* argv[])
{
    char user_input[INPUT_SIZE];
    printf ( "Enter a string with spaces: \n" );
    // Get user input including spaces
    //      where to, how many, where from
    fgets(user_input, INPUT_SIZE, stdin);
    // Overwrite the '\n' capture by pressing ENTER in the keyboard
    user_input[strlen(user_input) -1] = '\0'; // set last char as NULL char

    printf ( "You entered [%s]\n", user_input );
    // explore this string char by char

    for ( int i = 0; i<strlen(user_input); i++ ) {
        printf ( "%d char is [%c]\n", i, user_input[i] );
    }

    StrSpaceToHyphen(user_input);
    printf("The spaces are now changed to hyphens [%s]\n", user_input );

    return 0;
}
// Function Definitions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  StrSpaceToHyphen
 *  Description:  Replace all spaces with hyphens and make all letters Capital
 *  Param: inputStr: input string with spaces
 * =====================================================================================
 */

void StrSpaceToHyphen(char inputStr[])
{
    
    for ( int i = 0; i < strlen(inputStr); i++ ) {
        if(inputStr[i] == ' ') {
            inputStr[i] = '-';
        }
        else if(islower(inputStr[i])) {
            inputStr[i] = toupper(inputStr[i]);
        }
    }
    return;
}
