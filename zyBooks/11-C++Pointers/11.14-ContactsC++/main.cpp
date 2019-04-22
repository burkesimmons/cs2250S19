/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Contacts program
 *
 *        Version:  1.0
 *        Created:  04/15/2019 03:46:41 PM
 *       Revision:  none
 *   Compiler (C):  gcc main.cpp -o main.out
 * Compiler (C++):  g++ main.cpp -o main.out:
 *          Usage:  ./main.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
#include "ContactNode.h"
using namespace std;


// Constants and Globals

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    string fullName;
    string phoneNum;
    ContactNode* headContact = 0;
    ContactNode* nextContact1 = 0;
    ContactNode* nextContact2 = 0;
    ContactNode* nextContact3 = 0;
    ContactNode* currContact = 0;

    cout << "Person 1" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", "
        << phoneNum << endl << endl;

    nextContact1 = new ContactNode(fullName, phoneNum);
    headContact = nextContact1;

cin.ignore();
    cout << "Person 2" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", "
        << phoneNum << endl << endl;

    // create contact with new, use insertafter to connect nodes
    nextContact2 = new ContactNode(fullName, phoneNum);
    nextContact1->InsertAfter(nextContact2);

cin.ignore();
    cout << "Person 3" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", "
        << phoneNum << endl << endl;

    // create contact with new, use insertafter to connect nodes
    nextContact3 = new ContactNode(fullName, phoneNum);
    nextContact2->InsertAfter(nextContact3);


    cout << "CONTACT LIST" << endl;
    currContact = headContact;
    while(currContact != NULL)
    {
        currContact->PrintContactNode();
        currContact = currContact->GetNext();
        cout << endl;
    
    }
    return 0;
}
// Function Definitions


