/*
 * =====================================================================================
 *
 *       Filename:  Contacts.h
 *
 *    Description:  Contacts library
 *
 *        Version:  1.0
 *        Created:  03/25/2019 04:16:12 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  CONTACTS__INC__
#define  CONTACTS__INC__

typedef struct ContactNode
{
    char contactName[50];
    char contactPhoneNum[50];
    struct ContactNode* nextNodePtr;
}Contact;

// Function Prototypes
void CreateContactNode(Contact* thisCon, char dataName[], char dataPhoneNum[],  
        Contact* nextCon);
void InsertContactAfter(Contact* thisCon, Contact* newCon);
void PrintContactNode(Contact* thisCon);
Contact* GetNextContact(Contact* thisCon);


#endif /* ----- #ifndef CONTACTS__INC__ ----- */

