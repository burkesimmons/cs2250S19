/*
 * =====================================================================================
 *
 *       Filename:  rightTriangle.c
 *
 *    Description:  Draw a right triangle with a character
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:38:17 PM
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
   char triangleChar;
   int triangleHeight;

   printf("Enter a character:\n");
   scanf("%c", &triangleChar);
   
   printf("Enter triangle height:\n");
   scanf("%d", &triangleHeight);
   printf("\n");
   
   for(int i = 1; i <= triangleHeight; i++)
   {
      for(int j = 1; j <= i; j++)
      {
         printf("%c ", triangleChar);
      }
      printf("\n");
   }
  // printf("%c \n", triangleChar);
   //printf("%c %c \n", triangleChar, triangleChar);
   //printf("%c %c %c \n", triangleChar, triangleChar, triangleChar);
   
   return 0;
}
