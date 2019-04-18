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
    string name;
    string number;

    cout << "CONTACT LIST" << endl;

    for(int i = 0; i < 3; i++)
    {
    cout << "Person " << i + 1 << endl;
    cout << "Enter name:" << endl;
    getline(cin, name);
    cout << "Enter phone number:" << endl;
    getline(cin, number);
    ContactNode contact(name, number);
    cout << "You entered: " << contact.GetName() << ", "
        << contact.GetPhoneNumber() << endl;

    }
    return 0;
}
// Function Definitions


