/*!
 *    \file  employeeList.c
 *   \brief  
 *
 *  \author  Burke Simmons (), burkesimmons@mail.weber.edu
 *
 *  \internal
 *       Created:  04/02/2019
 *      Revision:  none
 *      Compiler:  gcc
 *  Organization:  WSU
 *     Copyright:  Copyright (c) 2019, Burke Simmons
 *
 *  This source code is released for free distribution under the terms of the
 *  GNU General Public License as published by the Free Software Foundation.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "vector_employee.h"

// Add an employee
void AddEmployee(vector *employees) {
   Employee theEmployee;
   
   printf("\nEnter song's unique ID: \n");
   fgets(theEmployee.uniqueID, 50, stdin);
   theEmployee.uniqueID[strlen(theEmployee.uniqueID) - 1] = '\0'; // Remove trailing newline
   
   printf("Enter song's name: \n");
   fgets(theEmployee.songName, 50, stdin);
   theEmployee.songName[strlen(theEmployee.songName) - 1] = '\0'; // Remove trailing newline
   
   printf("Enter artist's name: \n");
   fgets(theEmployee.artistName, 50, stdin);
   theEmployee.artistName[strlen(theEmployee.artistName) - 1] = '\0'; // Remove trailing newline
   
   printf("Enter song length: \n");
   scanf("%d", &theEmployee.songLength);
//printf("The song length just entered is: %d", theEmployee.songLength);
   vector_push_back(employees, theEmployee);
   
}

// Delete an employee
void DeleteEmployee(vector *employees) {
   int nElements;
   int element;
   
   nElements = vector_size(employees);
   if (nElements > 0) {
      printf("Enter entry # to delete (0-%d), or -1 to skip deletion: \n", (nElements - 1));
      scanf("%d", &element);
      if (element >= 0) {
         vector_erase(employees, element);
         printf("Entry #%d deleted.\n", element);
      }
   }
   else {
      printf("\nThere are no entries to delete.\n");
   }
}


// List all employees
void ListEmployees(vector *employees, const char*listTitle) {
   int nElements;
   int i;
   
   nElements = vector_size(employees);
   if (nElements > 0) {
      printf("\n");
      printf("%s - OUTPUT FULL PLAYLIST\n", listTitle);
      for (i = 0; i < nElements; ++i) {
         printf("%d.\nUnique ID: %s\n", i, (*vector_at(employees, i)).uniqueID);
         printf("Song Name: %s\n", (*vector_at(employees, i)).songName);
         printf("Artist Name: %s\n", (*vector_at(employees, i)).artistName);
         printf("Song Length: %d\n", (*vector_at(employees, i)).songLength);
      }
   }
   else {
      printf("\nThere are no employees to list.\n");
   }
}

// Get the action the user wants to perform
char GetAction(const char* listTitle, const char* prompt) {
   char answer[50];
   char firstChar;

   firstChar = '?';

   printf("\n%s's %s\n", listTitle, prompt);
   fgets(answer, 50, stdin);
   while (strlen(answer) == 1) {
      fgets(answer, 50, stdin);
   }
   firstChar = toupper(answer[0]);
   
   return firstChar;
}

int main(void) {
    char playlistTitle[50];
    printf("Enter playlist's title:\n");
    fgets(playlistTitle, 50, stdin);
    playlistTitle[strlen(playlistTitle) - 1] = '\0';


   const char EXIT_CODE = 'Q';
   const char PROMPT_ACTION[250] = "PLAYLIST MENU \na - Add song\nr - Remove song\nc - Change position of song\ns - Output songs by specific artist\nt - Output total time of playlist (in seconds)\no - Output full playlist\nq - Quit\n";
   vector employees;
   
   vector_create(&employees, 0);  // Create empty vector for employees
   char userAction;
   
   // Loop until the user enters the exit code.
   userAction = GetAction(playlistTitle, PROMPT_ACTION);
   
   while (userAction != EXIT_CODE) {
      switch (userAction) {
         case 'A': AddEmployee(&employees);
            break;
         case 'R': DeleteEmployee(&employees);
            break;
         case 'O': ListEmployees(&employees, playlistTitle);
            break;
//         default : // Do nothing
            break;
      }
      
      userAction = GetAction(playlistTitle, PROMPT_ACTION);
   }
   
   return 0;
}


