#include <stdio.h>

void ComputeChange(int totCents, int* numQuarters, int* numDimes, int* numNickels, int* numPennies) { // FIXME add four pass by pointer parameters
   *numQuarters = totCents / 25;
   totCents = totCents - (*numQuarters * 25);
   *numDimes = totCents / 10;
   totCents = totCents - (*numDimes * 10);
   *numNickels = totCents / 5;
   totCents = totCents - (*numDimes * 5);
   *numPennies = totCents;
   
}

int main(void) {

   int totalCents;         // Total amount of change needed
   int quartersChange;     // Number of quarters used for change
   int dimesChange;        // Number of dimes used for change
   int nickelsChange;      // Number of nickels used for change
   int penniesChange;      // Number of pennies used for change

   totalCents = 67;

   ComputeChange(totalCents, &quartersChange, &dimesChange, &nickelsChange, &penniesChange); // FIXME Add four pointer arguments

   printf("Change for %d cents is:\n", totalCents);
   printf("  %d quarters\n", quartersChange);
   printf("  %d dimes\n", dimesChange);
   printf("  %d nickels\n", nickelsChange);
   printf("  %d pennies\n", penniesChange);

   return 0;
}
