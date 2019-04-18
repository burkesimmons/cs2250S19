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


/*!
 *  Name:  ContactNode
 *  \brief  Constructor for ContactNode
 *
 *  \param name, phone number
 *  \return
 */
ContactNode::ContactNode(string name, string phoneNum)
{
    contactName = name;
    contactPhoneNum = phoneNum;

    return;
}



/*!
 *  Name:  SetName
 *  \brief  Set the contactName variable
 *
 *  \param  name variable
 */
void ContactNode::SetName(string name)
{
    this->contactName = name;
}


/*!
 *  Name:  SetPhoneNumber
 *  \brief  Set the contactPhoneName variable
 *
 *  \param  phoneNum variable
 */
void ContactNode::SetPhoneNumber(string phoneNum)
{
    this->contactPhoneNum = phoneNum;
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
 *  Name:  InsertAfter
 *  \brief  
 */
void InsertAfter()
{
    return;
}



/*!
 *  Name:  GetNext
 *  \brief  
 */
void GetNext()
{
    return;
}



/*!
 *  Name:  PrintContacNode
 *  \brief  Print Contact info
 */
void PrintContactNode()
{
    cout << " " << endl;
}
