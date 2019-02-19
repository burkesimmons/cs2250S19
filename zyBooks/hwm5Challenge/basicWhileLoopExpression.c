/*
 * =====================================================================================
 *
 *       Filename:  basicWhileLoopExpression.c
 *
 *    Description:  Basic while loop expression
 *
 *        Version:  1.0
 *        Created:  02/09/2019 08:55:23 PM
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

   userNum = 40;

while(userNum >=2){
  
   userNum= userNum / 2;
    printf("%d ", userNum);
}
   printf("\n");

   return 0;
}

