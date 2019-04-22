/*
 * =====================================================================================
 *
 *       Filename:  parsingStrings.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/22/2019 11:41:56 AM
 *       Revision:  none
 *   Compiler (C):  gcc parsingStrings.cpp -o parsingStrings.out
 * Compiler (C++):  g++ parsingStrings.cpp -o parsingStrings.out:
 *          Usage:  ./parsingStrings.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Main Function
int main(int argc, char* argv[])
{
        string name;
        char* stringPos = nullptr;
        char* stringQuit = nullptr;
        stringQuit = strchr(name, 'q');
    while(stringQuit != nullptr)
    {
        cout << "Enter input string:" << endl;
        getline(cin, name);
        stringPos ==strchr(name, ',');
        while(stringPos == nullptr) 
                && (stringQuit != nullptr)
        {
            cout << "Error: No comma in string" << endl;
            cout << "Enter input string:" << endl;
            getline(cin, name);

        }
        if(stringQuit == nullptr)
        {
            return 1;
        }
    }
    return 0;
}



