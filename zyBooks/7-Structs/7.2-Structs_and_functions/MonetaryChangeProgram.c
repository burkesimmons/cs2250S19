/*
 * =====================================================================================
 *
 *       Filename:  MonetaryChangeProgram.c
 *
 *    Description:  Compute monetary change, using the largest coins possible
 *
 *        Version:  1.0
 *        Created:  03/11/2019 08:09:34 PM
 *       Revision:  none
 *       Compiler:  gcc MonetaryChangeProgram.c -o MonetaryChangeProgram.out
 *          Usage:  ./MonetaryChangeProgram.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

typedef struct MonetaryChange_struct {
   int quarters;
   int dimes;
   int nickels;
   int pennies;
   int cents;
} MonetaryChange;

MonetaryChange ComputeChange(int cents) {
   MonetaryChange change;

   // FIXME: Finish function
   change.quarters = cents / 25;
   cents = cents - (change.quarters * 25);
   change.dimes = cents / 10;
   cents = cents - (change.dimes * 10);
   change.nickels = cents / 5;
   change.pennies = cents - (change.nickels * 5);
   

   return change;
}

int main(void) {
   int userCents;
   MonetaryChange change;

   printf("Enter cents: \n");
   scanf("%d", &userCents);

   change = ComputeChange(userCents);

   printf("Quarters: %d\n", change.quarters);
   printf("Dimes: %d\n", change.dimes);
   printf("Nickels: %d\n", change.nickels);
   printf("Pennies: %d\n", change.pennies);
   printf("Your change is %d quarters, %d dimes, %d nickels, and %d pennies", change.quarters, change.dimes, change.nickels, change.pennies); 

   return 0;
}
