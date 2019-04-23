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
                char name[50] = "";;
            while(strchr(name, 'q') == nullptr)
            {
                cout << "Enter input string:" << endl;
                cin.getline(name, 50);
                int j;
                for( int i = 0; i < strlen(name); i++) {
                    while(name[i] == ' ')
                    {
                        for(j = i; name[j] != '\0'; j++)
                        {
                            name[j] = name[j+1];
                        }
                        name[j] = '\0';
                    }
                }
                while((strchr(name, ',') == nullptr) 
                        && (strchr(name, 'q') == nullptr))
                {
                    cout << "Error: No comma in string" << endl;
                    cout << "Enter input string:" << endl;
                    cin.getline(name, 50);
                    int j;
                    for( int i = 0; i < strlen(name); i++) {
                        while(name[i] == ' ')
                        {
                            for(j = i; name[j] != '\0'; j++)
                            {
                                name[j] = name[j+1];
                            }
                            name[j] = '\0';
                        }
                    }
                }
                if(strchr(name, 'q') != nullptr)
                {
                    return 1;
                }
                char firstWord[50] = "";
                char secondWord[50] = "";
                int i = 0;
                for ( i = 0; i < strlen(name); i++)
                {
                    while(name[i] != ',')
                    {
                        firstWord[i] = name[i];
                        break;
                    }
                }
                printf("First word: %s\n", firstWord);

                int sizeOfFirstWord;

                for(i = 0; i < strlen(firstWord); i++)
                {
                    if(firstWord[i] == '\0')
                    {
                        return i;
                    }
                }
                sizeOfFirstWord = i;

                for ( i = sizeOfFirstWord + 1; i < strlen(name); i++)
                {
                    while(name[i] != '\0')
                    {
                        secondWord[i - (sizeOfFirstWord + 1)] = name[i];
                        break;
                    }
                }
                printf("Second word: %s\n", secondWord);
            }
            return 0;
    }
