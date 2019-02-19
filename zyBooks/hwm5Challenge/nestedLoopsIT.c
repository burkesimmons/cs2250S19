/*
 * =====================================================================================
 *
 *       Filename:  nestedLoopsIT.c
 *
 *    Description:  Nested loops: Indent text
 *
 *        Version:  1.0
 *        Created:  02/10/2019 09:50:33 AM
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
   int userNum;
   int i;
   int j;

   userNum = 3;

for(i=0; i<=userNum; i++) {
 
   for(j=0; j<i; j++){
   printf(" ");
   }
  printf("%d\n", i);
}
   return 0;
}

