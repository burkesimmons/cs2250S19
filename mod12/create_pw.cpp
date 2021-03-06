/*
 * =====================================================================================
 *
 *       Filename:  create_pw.cpp
 *
 *    Description:  Create a password, and validate it:
 *                  At least 8 characters
 *                  Must include at least 1 number
 *                  Must include at least 1 special char
 *
 *        Version:  1.0
 *        Created:  04/02/2019 09:27:55 AM
 *       Revision:  none
 *   Compiler (C):  gcc create_pw.cpp -o create_pw.out
 * Compiler (C++):  g++ create_pw.cpp -o create_pw.out:
 *          Usage:  ./create_pw.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
#include <string> // to handle strings
using namespace std;


// Constants and Globals

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    string full_name;
    cout << "Create an account" << endl << endl;
    // Take input
    cout << "Enter full name: ";
    // To capture strings with/without spaces use: getline(cin, <string>)
    getline(cin, full_name);
    cout << "Hi " << full_name << " welcome to WSU branch" << endl;
    // Get the password
    string password;
    bool valid_password = false;
    while(!valid_password)
    {
        valid_password = true; // good to go
        cout << "Enter your password: ";
        getline(cin, password);
        // At least 8 chars
        if(password.length() < 8)
        {
            cout << "Password must be at least 8 characters" << endl;
            valid_password = false;
        }
        // Must contain at least 1 number
        auto index = password.find_first_of("0123456789");
        if (index == -1) // -1 means no match
        {
            cout << "Password must include a number" << endl;
            valid_password = false;
        }
        // Must contain at least 1 special char
        bool special_char = false;
        // For item in items
        for (char c : password) // : means "in"
        {
            if(ispunct(c)) // check for any special char
            {
                special_char = true;
                break; // exit the loop over the password string
            }
        }
        if(!special_char)
        {
            cout << "Password must include a special character" << endl;
            valid_password = false;
        }
        // display the bad password
        if(!valid_password)
        {
            cout << password << " is invalid" << endl;
            cout << "Please try again" << endl;
        }

    }// end of while

    cout << "Thank you" << endl;

    return 0;
}
// Function Definitions


