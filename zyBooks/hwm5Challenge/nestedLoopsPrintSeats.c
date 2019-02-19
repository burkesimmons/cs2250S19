/*
 * =====================================================================================
 *
 *       Filename:  nestedLoopsPrintSeats.c
 *
 *    Description:  Nested loops: Print seats
 *
 *        Version:  1.0
 *        Created:  02/10/2019 10:04:33 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void) {
   int numRows = 2;
   int numCols = 3;

   // Note: You'll need to declare more variables
int i, j;


   for(i=1; i<=numRows; i++){
      char row = 'A';
      for(j=1; j <= numCols; j++) {
         printf("%d%c ", i, row);
         ++row;
      }
   }

   printf("\n");

   return 0;
}

