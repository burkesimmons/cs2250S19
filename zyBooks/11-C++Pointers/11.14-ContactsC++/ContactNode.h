/*
 * =====================================================================================
 *
 *       Filename:  ContactNode.h
 *
 *    Description:  ContactNode
 *
 *        Version:  1.0
 *        Created:  04/15/2019 03:46:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  CONTACTNODE__INC__
#define  CONTACTNODE__INC__
#include <string>
using namespace std;

class ContactNode
{
    private:
        string contactName;
        string contactPhoneNum;
        ContactNode* nextNodePtr;
    public:
        // Contructors
        ContactNode();
        ContactNode(string initName, string initPhoneNum, 
                ContactNode* nextLoc = 0);
        // Getters
        string GetName() const;
        string GetPhoneNumber() const;
        // Other methods
        ContactNode* GetNext();
        void InsertAfter(ContactNode* nodePtr);
        void PrintContactNode();
};

#endif /* ----- #ifndef CONTACTNODE__INC__ ----- */

