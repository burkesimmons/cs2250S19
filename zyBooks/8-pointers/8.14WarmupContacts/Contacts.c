/*
 * =====================================================================================
 *
 *       Filename:  Contacts.c
 *
 *    Description:  Build a contacts struct with a linked list
 *
 *        Version:  1.0
 *        Created:  03/25/2019 04:16:12 PM
 *       Revision:  none
 *       Compiler:  gcc Contacts.c -o Contacts.out
 *          Usage:  ./Contacts.out
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


// Function Definitions

void CreateContactNode(Contact* thisCon, char dataName[], char dataPhoneNum[],  
        Contact* newCon) {
    strcpy(thisCon->contactName, dataName);
    strcpy(thisCon->contactPhoneNum, dataPhoneNum);
    thisCon->nextNodePtr = newCon; // set the address of the next contact
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
    return;
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

