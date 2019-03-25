/*
 * =====================================================================================
 *
 *       Filename:  TVWatchProgram.c
 *
 *    Description:  TV Watching Program where you enter a country name and
 *    the program outputs the daily TV watching hours average for a person
 *    in that country. Uses an array of struct items rather than two arrays
 *    of more basic types.
 *
 *        Version:  1.0
 *        Created:  03/11/2019 08:36:12 PM
 *       Revision:  none
 *       Compiler:  gcc TVWatchProgram.c -o TVWatchProgram.out
 *          Usage:  ./TVWatchProgram.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const int MAX_COUNTRY_NAME_LENGTH = 50;

typedef struct CountryTvWatch_struct {
   char countryName[50];
   int tvMinutes;
} CountryTvWatch;

void PrintCountryNames(CountryTvWatch ctryList[], int numCountries)
{
   printf("%s, %s, %s, %s\n", ctryList[0].countryName, ctryList[1].countryName, ctryList[2].countryName, ctryList[3].countryName); 
} 

int main(void) {
   // Source: www.statista.com, 2010
   const int NUM_COUNTRIES = 4;

   CountryTvWatch countryList[NUM_COUNTRIES];
   char countryToFind[MAX_COUNTRY_NAME_LENGTH];
   bool countryFound;
   int i;
   
   strcpy(countryList[0].countryName, "Brazil");
   countryList[0].tvMinutes = 222; 
   strcpy(countryList[1].countryName, "India");       
   countryList[1].tvMinutes = 119;
   strcpy(countryList[2].countryName, "U.K.");        
   countryList[2].tvMinutes = 242;
   strcpy(countryList[3].countryName, "U.S.A.");      
   countryList[3].tvMinutes = 283;
   
   printf("Enter country name: \n");
   scanf("%s", countryToFind);
   
   countryFound = false;
   for (i = 0; i < NUM_COUNTRIES; ++i) { // Find country's index
      if (strcmp(countryList[i].countryName, countryToFind) == 0) {
         countryFound = true;
         printf("People in %s watch\n", countryToFind);
         printf("%d minutes of TV daily.\n", countryList[i].tvMinutes);
      }
   }
   if (!countryFound) {
      printf("Country not found, try again.\n");
      printf("Valid countries:\n"); 
      PrintCountryNames(countryList, NUM_COUNTRIES); 
   }
   
   return 0;
}

