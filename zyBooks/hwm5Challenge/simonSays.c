/*
 * =====================================================================================
 *
 *       Filename:  simonSays.c
 *
 *    Description:  Simons says, checks if simonPattern is the same as
 *    userPattern
 *
 *        Version:  1.0
 *        Created:  02/10/2019 04:31:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

int main(void) {
   char simonPattern[50];
   char userPattern[50];
   int userScore;
   int i;

   userScore = 0;
   strcpy(simonPattern, "RRGBRYYBGY");
   strcpy(userPattern, "RRGBBRYBGY");

for(i=0; i<10; i++){
   if(simonPattern[i]==userPattern[i]){
      userScore=userScore + 1;
      
   }
   else {
   break;
   }
}
   printf("userScore: %d\n", userScore);

   return 0;
}
