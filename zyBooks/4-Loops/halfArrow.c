/*
 * =====================================================================================
 *
 *       Filename:  halfArrow.c
 *
 *    Description:  Drawing a half arrow
 *
 *        Version:  1.0
 *        Created:  02/12/2019 09:21:49 PM
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
   int arrowBaseHeight;
   int arrowBaseWidth;
   int arrowHeadWidth;
   
   printf("Enter arrow base height:\n");
   scanf("%d", &arrowBaseHeight);
   
   printf("Enter arrow base width:\n");
   scanf("%d", &arrowBaseWidth);
   
   printf("Enter arrow head width:\n");
   scanf("%d", &arrowHeadWidth);
   
   while (arrowHeadWidth <= arrowBaseWidth) {
    printf("Enter arrow head width:\n");
   scanf("%d", &arrowHeadWidth);
}
   
   
   printf("\n");
   
   for(int i = 1; i <= arrowBaseHeight; i++)
   {
   for (int j = 1; j <= arrowBaseWidth; j++)
   {
      printf("*");
   }
   printf("\n");
   }
   
   // Draw arrow base (height = 3, width = 2)
  // printf( "**\n");
   //printf( "**\n");
   //printf( "**\n");
   for(int i = arrowHeadWidth; i >= 1; i--)
   {
   for (int j = 1; j <= i; j++)
   {
      printf("*");
   }
   printf("\n");
   }
   // Draw arrow head (width = 4)
   //printf( "****\n");
   //printf( "***\n");
   //printf( "**\n");
   //printf( "*\n");
   
   return 0;
}
