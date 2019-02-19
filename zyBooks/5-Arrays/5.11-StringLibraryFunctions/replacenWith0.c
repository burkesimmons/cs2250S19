/*
 * =====================================================================================
 *
 *       Filename:  replacenWith0.c
 *
 *    Description:  Replace a \n end-of-line / newline character with \0 null character
 *
 *        Version:  1.0
 *        Created:  02/11/2019 07:49:03 PM
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
   char nameArr[10];       // User specified name
   char greetingArr[17];   // Output greeting and name
   
   // Prompt user to enter a name
   printf("Enter name: ");
   fgets(nameArr, 10, stdin);
   
   // Eliminate end-of-line char
   if (nameArr[strlen(nameArr) - 1] == '\n') {
      nameArr[strlen(nameArr)-1] = '\0';
   }

   
   // Modify string, hello + user specified name
   strcpy(greetingArr, "Hello ");
   strcat(greetingArr, nameArr);
   strcat(greetingArr, ".");
   
   // Output greeting and name
   printf("%s\n", greetingArr);
   
   return 0;
}
:w

