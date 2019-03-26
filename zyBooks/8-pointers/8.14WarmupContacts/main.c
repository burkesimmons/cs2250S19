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
// Function Prototypes
void CreateContactNode(Contact* thisCon, char dataName[], char dataPhoneNum[],  
        Contact* nextCon) {
    strcpy(thisCon->contactName, dataName);
    strcpy(thisCon->contactPhoneNum, dataPhoneNum);
    thisCon->nextNodePtr = nextCon; // set the address of the next contact
}

/* Insert newCon after node.
 * Before: thisCon -- next
 * After: thisCon -- newNode --next
 * */
void InsertContactAfter(Contact* thisCon, Contact* newCon) {
    Contact* tmpNext = NULL;

    tmpNext = thisCon->nextNodePtr; // Rember next
    thisCon->nextNodePtr = newCon; // this -- new -- ?
    newCon->nextNodePtr = tmpNext; // this -- new --next
}

// Print dataName & dataPhoneNum
void PrintContactNode(Contact* thisCon) {
    printf("Name: %s\n", thisCon->contactName);
    printf("Phone number: %s\n\n", thisCon->contactPhoneNum);
}

// Grab location pointed by nextNodePtr
Contact* GetNextContact(Contact* thisCon) {
    return thisCon->nextNodePtr;
}

// Main Function
int main(int argc, char* argv[])
{
//    char dummy;
    char dataName[MAX];
    char dataPhoneNum[MAX];
    // Contact st;
    Contact *headCon = NULL;  // Create Contact objects
    Contact *currCon = NULL;
    Contact *lastCon = NULL;
    int i;  // Loop index

//    headCon = (Contact*)malloc(sizeof(Contact)); // Front of nodes list
    CreateContactNode(headCon, "", "", NULL);
    lastCon = headCon;

    for (i = 0; i < 3; i++) {  // Ask for and fgets 3 Contacts
//        currCon = (Contact*)malloc(sizeof(Contact));
        CreateContactNode(currCon, dataName, dataPhoneNum, NULL);

        InsertContactAfter(lastCon, currCon);  // Append curr
        lastCon = currCon;
    }

    currCon = headCon;      // Print the list

    printf("CONTACT LIST");

    while (currCon  != NULL) {
        PrintContactNode(currCon);
        currCon = GetNextContact(currCon);
    }
    return 0;
}
// Function Definitions


