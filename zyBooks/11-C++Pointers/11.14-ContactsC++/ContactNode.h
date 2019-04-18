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
        ContactNode(string contactName, string contactPhoneNum);
        // Setters
        void SetName(string contactName);
        void SetPhoneNumber(string contactPhoneNum);
        // Getters
        string GetName() const;
        string GetPhoneNumber() const;
        void InsertAfter();
        void GetNext();
        // Other methods
        void PrintContactNode();
};

#endif /* ----- #ifndef CONTACTNODE__INC__ ----- */

