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


// Main Function
int main(int argc, char* argv[])
{
    Angle();

    return 0;
}
// Function Definitions
Angle::Angle()
{
    this->degrees = 0;
    this->minutes = 0;
    this->direction = 'X';
    return;
}

