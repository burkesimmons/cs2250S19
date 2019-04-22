/*!
 *    \file  dataVisualization.c
 *   \brief  Data visualization of Novel data
 *
 *  \author  Burke Simmons (), burkesimmons@mail.weber.edu
 *
 *  \internal
 *       Created:  04/05/2019
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

//Note to Dr. Valle
//I've been working on this for 4 hours straight and I'm not even close
//Still have 3 more hours to midnight, but it ain't happenin!
//That's not pessimism, that realism. Maybe someday I'll aquire the gift 
//'c' tongues, but not tonight. Just can't wrap my head around how to put 
//this all together

/* Function Prototypes */
void SeperateWords(char phrase[]);
int GetNumOfCharacters(const char usrStr[]);

/* Main Function */
int main(int argc, char* argv[])
{
//    char title[50];
//    char column1[50];
//    char column2[50];
    char dataPoint[50] = "";
//    char authorName[50];
//    int numNovels;
//    int valuesRead;

//    printf ( "Enter a title for the data:\n" );
//    fgets(title, 50, stdin);
//    title[strlen(title) - 1] = '\0';
//    printf ( "You entered: %s\n", title );
//
//    printf ( "\nEnter the column 1 header:\n" );
//    fgets(column1, 50, stdin); 
//    column1[strlen(column1) - 1] = '\0';
//    printf ( "You entered: %s\n", column1 );
//
//    printf ( "\nEnter the column 2 header:\n" );
//    fgets(column2, 50, stdin); 
//    column2[strlen(column2) - 1] = '\0';
//    printf ( "You entered: %s\n", column2 );

    while(strcmp(dataPoint, "-1") != 0)
    {
        // Ask question
        printf("Enter a data point (-1 to stop input):\n");
        fgets(dataPoint, 50, stdin);
        dataPoint[strlen(dataPoint) -1] = '\0';

                SeperateWords(dataPoint);
                printf ( "FIRST WORD IS: %s, and SECOND WORD IS: %s"
                        "\n", firstWord, secondWord );
//        sscanf(dataPoint, "%49s, %d", authorName, &numNovels);
//        printf("Author name[%s], Number of Novels [%d]\n", authorName, numNovels);


//        if ((strchr(dataPoint, ',') == NULL) && (strcmp(dataPoint, "-1") != 0))
//        {
//            printf("Error: No comma in string.\n\n");
//            
//        }
//        else
//        {
//                SeperateWords(dataPoint);
//        valuesRead = sscanf(dataPoint, "%49s,%d", authorName, &numNovels);
//        printf("Values read [%d], Author Name [%s], Number of novels"
//                " [%d]\n", valuesRead, authorName, numNovels);
//        }
        // Check for -1 and quit
        if (strcmp(dataPoint, "-1") == 0)
        {
            return 1;
        }


//                SeperateWords(phrase);
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
