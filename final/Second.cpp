/*
 * =====================================================================================
 *
 *       Filename:  Second.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/23/2019 07:41:34 AM
 *       Revision:  none
 * Compiler (C++):  g++ Second.cpp -o Second.out:
 *          Usage:  ./Second.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
using namespace std;
// Constants and Globals

// Function Prototypes
class Angle
{
    private:
        int degrees;
        float minutes;
        char direction;
    public:
        // Constructors
        Angle();
        // Getters
        void GetAngle() const;
        // Setters
        void SetAngle();

};


Angle::Angle()
{
    this->degrees = 0;
    this->minutes = 0;
    this->direction = 'X';
    return;
}
//Angle::SetAngle()
//{
//    
//}

// Main Function
int main(int argc, char* argv[])
{
    char command = 'y';
    int degrees;
    float minutes;
    char direction;
    Angle();
    while(command != 'n')
    {
        cout << "Enter angle" << endl;
        cout << "Degrees (0 to 180):" << endl;
        cin >> degrees;
        cout << "Minutes (0.0 to 59.9):" << endl;
        cin >> minutes;
        cout << "Direction (N, S, E, W):" << endl;
        cin >> direction;
        cout << "You entered " << degrees << " \xF8" << minutes <<
            "' " << direction << endl;
        cout << "Enter another (y|n)?" << endl;
        cin >> command;
    }
    return 0;
}
// Function Definitions

