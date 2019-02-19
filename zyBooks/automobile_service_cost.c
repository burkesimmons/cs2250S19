/*
 * =====================================================================================
 *
 *       Filename:  automobile_service_cost.c
 *
 *    Description:  Prompt the user for an automobile service. Each type 
 *    is composed of two strings. Output the user's input.
 *
 *        Version:  1.0
 *        Created:  02/05/2019 06:04:05 PM
 *       Revision:  none
 *       Compiler:  gcc automobile_service_cost.c -o automobile_service_cost.out
 *
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
   
   char firstWord[50], secondWord[50];

   printf("Enter desired auto service:\n");
   scanf("%s%s", firstWord, secondWord);
   if (strcmp(firstWord, "Oil")  == 0 && strcmp(secondWord, "change") == 0) {
      
   printf("You entered: %s %s\n", firstWord, secondWord);
   firstWord[0] = 'o';
   printf("Cost of %s %s: $35\n", firstWord, secondWord);
   }
   else if (strcmp(firstWord, "Tire")  == 0 && strcmp(secondWord, "rotation") == 0) {
      
   printf("You entered: %s %s\n", firstWord, secondWord);
   firstWord[0] = 't';
   printf("Cost of %s %s: $19\n", firstWord, secondWord);
   }
   else if (strcmp(firstWord, "Car")  == 0 && strcmp(secondWord, "wash") == 0) {
      
   printf("You entered: %s %s\n", firstWord, secondWord);
   firstWord[0] = 'c';
   printf("Cost of %s %s: $7\n", firstWord, secondWord);
   }
   
   else {
      printf("You entered: %s %s\n", firstWord, secondWord);
      printf("Error: Requested service is not recognized\n");
   }
   

   return 0;
}

