/*
 * =====================================================================================
 *
 *       Filename:  modifyArrayElements.c
 *
 *    Description:  Modify array elements using other elements
 *
 *        Version:  1.0
 *        Created:  02/14/2019 08:12:14 PM
 *       Revision:  none
 *       Compiler:  gcc modifyArrayElements.c -o modifyArrayElements.c.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void) {
   const int SCORES_SIZE = 4;
   int bonusScores[SCORES_SIZE];
   int i;

   bonusScores[0] = 10;
   bonusScores[1] = 20;
   bonusScores[2] = 30;
   bonusScores[3] = 40;

for(i = 0; i < SCORES_SIZE - 1; i++)
{
   bonusScores[i] = bonusScores[i] + bonusScores[i + 1];
}
   for (i = 0; i < SCORES_SIZE; ++i) {
      printf("%d ", bonusScores[i]);
   }
   printf("\n");

   return 0;
}

