/*
 * =====================================================================================
 *
 *       Filename:  ContactNode.cpp
 *
 *    Description:  ContactNode library
 *
 *        Version:  1.0
 *        Created:  04/15/2019 03:46:41 PM
 *       Revision:  none
 *   Compiler (C):  gcc ContactNode.cpp -o ContactNode.out
 * Compiler (C++):  g++ ContactNode.cpp -o ContactNode.out:
 *          Usage:  ./ContactNode.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
using namespace std;
#include "ContactNode.h"


ContactNode::ContactNode()
{
    this->contactName = "none";
    this->contactPhoneNum = "none";
    this->nextNodePtr = 0;
    return;
}


/*!
 *  Name:  ContactNode
 *  \brief  Constructor for ContactNode
 *
 *  \param name, phone number
 *  \return
 */
ContactNode::ContactNode(string initName, string initPhoneNum, 
        ContactNode* nextLoc)
{
    this->contactName = initName;
    this->contactPhoneNum = initPhoneNum;
    this->nextNodePtr = nextLoc;
    return;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InsertAfter
 *  Description:  Insert a node after the last one
 * =====================================================================================
 */
void ContactNode::InsertAfter(ContactNode* nodePtr) 
{
    ContactNode* tmpNext = 0;
    tmpNext = this->nextNodePtr;
    this->nextNodePtr = nodePtr;
    nodePtr->nextNodePtr = tmpNext;

    return;
}

/*!
 *  Name:  GetName
 *  \brief  Get the contactName variable
 */
string ContactNode::GetName() const
{
    return contactName;
}


/*!
 *  Name:  GetPhoneNumber
 *  \brief  Get the contactPhoneNum variable
 */
string ContactNode::GetPhoneNumber() const
{
    return contactPhoneNum;
}


/*!
 *  Name:  GetNext
 *  \brief  
 */
ContactNode* ContactNode::GetNext()
{
    return this->nextNodePtr;
}



/*!
 *  Name:  PrintContacNode
 *  \brief  Print Contact info
 */
void ContactNode::PrintContactNode()
{
    cout << "Name: " << this->GetName() << endl;
    cout << "Phone number: " << this->GetPhoneNumber() << endl;
    return;
}
