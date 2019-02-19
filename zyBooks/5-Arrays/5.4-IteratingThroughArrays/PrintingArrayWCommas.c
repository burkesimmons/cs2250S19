/*
 * =====================================================================================
 *
 *       Filename:  PrintingArrayWCommas.c
 *
 *    Description:  Printing Array elements seperated by commas
 *
 *        Version:  1.0
 *        Created:  02/13/2019 08:50:17 PM
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
   const int NUM_VALS = 4;
   int hourlyTemp[NUM_VALS];
   int i;

   hourlyTemp[0] = 90;
   hourlyTemp[1] = 92;
   hourlyTemp[2] = 94;
   hourlyTemp[3] = 95;

   for(i = 0; i < NUM_VALS - 1; i++)
   {
      printf("%d, ", hourlyTemp[i]);
   }
 
   printf("%d", hourlyTemp[NUM_VALS - 1]);

   printf("\n");

   return 0;
}

