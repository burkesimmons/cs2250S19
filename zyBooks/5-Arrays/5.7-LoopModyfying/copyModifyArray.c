/*
 * =====================================================================================
 *
 *       Filename:  copyModifyArray.c
 *
 *    Description:  Copy and modyfing array elements
 *
 *        Version:  1.0
 *        Created:  02/14/2019 07:57:59 PM
 *       Revision:  none
 *       Compiler:  gcc copyModifyArray.c -o copyModifyArray.c.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void) {
   const int SCORES_SIZE = 4;
   int oldScores[SCORES_SIZE];
   int newScores[SCORES_SIZE];
   int i;

   oldScores[0] = 10;
   oldScores[1] = 20;
   oldScores[2] = 30;
   oldScores[3] = 40;
newScores[SCORES_SIZE - 1] = oldScores[0];
for(i=0; i<SCORES_SIZE - 1; i++)
{
   newScores[i] = oldScores[i + 1];
}

   for (i = 0; i < SCORES_SIZE; ++i) {
      printf("%d ", newScores[i]);
   }
   printf("\n");

   return 0;
}
