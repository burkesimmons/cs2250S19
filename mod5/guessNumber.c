/*
 * =====================================================================================
 *
 *       Filename:  guessNumber.c
 *
 *    Description:  Guess the random number
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:53:07 AM
 *       Revision:  none
 *       Compiler:  gcc guessNumber.c -o guessNumber.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> // needed for rand()
// Constants
#define MAX 3
// Function Prototypes

// Main Function
int main()
{
    int number, guess;
    guess = rand() %10;
    //int i; // before C89 you need to define i outside the loop
    for (int i = 0; i < MAX; i++) {
        printf("Please guess a number between 0 and 10\n");
        scanf("%d", &number);
        if(number == guess) {
            printf("Congratulations, you got the correct number\n");
            return 0;
    }
    }// end of for loop
    printf("Sorry, you did not guess the [%d] number\nPlay again\n", 
            guess);

    return 0;
}
// Function Definitions


