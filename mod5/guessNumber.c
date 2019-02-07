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
#include <time.h> // time()
// Constants
#define MAX 5
#define LIMIT 100
// Function Prototypes

// Main Function
int main()
{
    int number, guess;
    srand(time(0));         //set the random SEED
    guess = rand() %LIMIT;     // set the random number between 0-9
    //int i; // before C89 you need to define i outside the loop
    for (int i = 0; i < MAX; i++) {
        printf("Please guess a number between 0 and %d\n", LIMIT);
        printf("You have %d chances to guess left\n", MAX -i);
        scanf("%d", &number);
        if(number > guess) {
            printf("The number is lower.\n");
  
        }
        else if(number < guess) {
            printf("The number is higher.\n");
  
        }
        else if(number == guess) {
            printf("Congratulations, you got the correct number\n");
            return 0;
        }
    }// end of for loop
    printf("Sorry, you did not guess the [%d] number\nPlay again\n", 
            guess);

    return 0;
}
// Function Definitions


