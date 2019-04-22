/*!
 *    \file  ParsingStrings.c
 *   \brief  Parsing Stings Programming warm-up
 *
 *  \author  Burke Simmons (), burkesimmons@mail.weber.edu
 *
 *  \internal
 *       Created:  04/04/2019
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
#include <stdbool.h>

//Function prototypes
int GetNumOfCharacters(const char usrStr[]);
void OutputWithoutWhitespace(char usrStr[]);
void SeperateWords(char phrase[]);
bool hasComma(char usrStr[]);


int main(void) {

    char phrase[50] = "";

    while(strcmp(phrase, "q\n") != 0)
    {
        // Ask question again
        printf("Enter input string:\n");
        fgets(phrase, 50, stdin);
        OutputWithoutWhitespace(phrase);
        // TODO set NULL char

        // Trying to check if phrase has a comma and if false then continue
        // to reprint "Enter a sentence", if true then move on
        while((strchr(phrase, ',') == NULL)
                && (strcmp(phrase, "q\n") != 0))
        {
            printf("Error: No comma in string.\n\n");

            printf("Enter input string:\n");
            fgets(phrase, 50, stdin);
        }
        // Check for q and quit
        if (strcmp(phrase, "q\n") == 0)
        {
            return 1;
        }


                SeperateWords(phrase);
    } // end of main while loop
    return 0;
}


/*!
 *  Name:  GetNumOfCharacters
 *  \brief  Get the number of characters in a string
 */
int GetNumOfCharacters(const char usrStr[])
{
    int length = 0;
    int i;
    for(i = 0; i < strlen(usrStr); i++)
    {
        if(usrStr[i] == '\0')
        {
            return i;
        }
    }
    length = i;
    return length;
}


/*!
 *  Name:  OutputwithoutwhiteSpaces
 *  \brief  Output a phrase with no white spaces
 *  \param  usrStr
 */
void OutputWithoutWhitespace(char usrStr[])
{
    int j;
    for( int i = 0; i < strlen(usrStr); i++) {
        while(usrStr[i] == ' ')
        {
            for(j = i; usrStr[j] != '\0'; j++)
            {
                usrStr[j] = usrStr[j+1];
            }
            usrStr[j] = '\0';
        }
    }
}


/*!
 *  Name:  Seperatewords
 *  \brief  Seperate a phrase with a comma in the middle into two words
 *  held in different variables
 */
void SeperateWords(char phrase[])
{
    char firstWord[50] = "";
    char secondWord[50] = "";
    int i = 0;
    for ( i = 0; i < strlen(phrase); i++)
    {
        while(phrase[i] != ',')
        {
            //printf("phrase[i]: %c\n", phrase[i]);
            firstWord[i] = phrase[i];
            //printf("firstWord[i]: %c\n", firstWord[i]);

            break;
        }
        //printf("The index of [%c] is [%d]\n", phrase[i], i);
    }
    printf("First word: %s\n", firstWord);

    int sizeOfFirstWord = GetNumOfCharacters(firstWord);
    //   printf("Size of first word is: %d\n", sizeOfFirstWord);

    for ( i = sizeOfFirstWord + 1; i < strlen(phrase); i++)
    {
        while(phrase[i] != '\0')
        {
            //           printf("phrase[i]: %c\n", phrase[i]);
            secondWord[i - (sizeOfFirstWord + 1)] = phrase[i];
            //           printf("secondWord[i]: %c\n", firstWord[i]);

            break;
        }
        //printf("The index of [%c] is [%d]\n", phrase[i], i);
    }
    printf("Second word: %s\n", secondWord);
}


/*!
 *  Name:  hasComma
 *  \brief  Checks a phrase to see if it has a comma
 */
bool hasComma(char usrStr[])
{
    bool hasAComma = false;
    for(int i = 0; i < strlen(usrStr); i++)
    {

        if(usrStr[i] == ',')
        {
            hasAComma = true;
        }
//        else
//        {
//            printf("Error: No comma in string.\n");
//            return;
    }
    return hasAComma;
}


