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

#endif /* ----- #ifndef CONTACTS__INC__ ----- */

