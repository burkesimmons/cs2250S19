/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Use the contacts library
 *
 *        Version:  1.0
 *        Created:  03/25/2019 04:16:12 PM
 *       Revision:  none
 *       Compiler:  gcc Contacts.c main.c -Wall -o a.out -lm
 *          Usage:  ./main.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contacts.h"


// Constants
#define MAX 50

// Main Function
int main(int argc, char* argv[])
{

    char dataName[MAX];
    char dataPhoneNum[MAX];
 
    Contact* headCon = NULL;  // Create pointer to Contact
    Contact* currCon = NULL;
    Contact* lastCon = NULL;
    int i;  // Loop index

    headCon = (Contact*)malloc(sizeof(Contact)); // Front of nodes list
    CreateContactNode(headCon, "", "", NULL);
    lastCon = headCon;

    for (i = 0; i < 3; i++) {  // Ask for and fgets 3 Contacts
        currCon = (Contact*)malloc(sizeof(Contact));
//        if(lastCon == NULL)
//        {
//            headCon = lastCon;
//        }
//        else
//        {
//             Only link records after on iteration
//            InsertContactAfter(lastCon, currCon);  // Append curr
//        }
        // Capture user input
        printf("Person %d\n", i +1);
        printf("Enter name:\n");
        fgets(dataName, MAX, stdin);
        dataName[strlen(dataName) - 1] = '\0'; // Eliminate EOL character
        printf("Enter phone number:\n");
        fgets(dataPhoneNum, MAX, stdin);
        dataPhoneNum[strlen(dataPhoneNum) - 1] = '\0';
        //Save it to a Contact structure
        CreateContactNode(currCon, dataName, dataPhoneNum, NULL);

        InsertContactAfter(lastCon, currCon);  // Append curr
        //Print entered contact structure
        printf("You entered: %s, %s\n\n", currCon->contactName, currCon->contactPhoneNum);
        lastCon = currCon;
    }
    printf("\n");
    currCon = headCon;      // Print the list

    printf("CONTACT LIST\n");

    while (currCon  != NULL) {
        PrintContactNode(currCon);
        currCon = GetNextContact(currCon);
    }
    return 0;
}
// Function Definitions


