/*
 * =====================================================================================
 *
 *       Filename:  first_real_class.cpp
 *
 *    Description:  Let's change the structure to a class
 *
 *        Version:  1.0
 *        Created:  04/04/2019 08:55:04 AM
 *       Revision:  none
 *   Compiler (C):  gcc first_real_class.cpp -o first_real_class.out
 * Compiler (C++):  g++ first_real_class.cpp -o first_real_class.out:
 *          Usage:  ./first_real_class.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
#include "Movie.h"
using namespace std;
// Constants and Globals
//
// Main Function
int main(int argc, char* argv[])
{
    // Create an "object"
    Movie movie; //create an "instance" of this class Movie
    // set your value
//    movie.title = "Batman";   // illegal - no direct access
    movie.set_title("Batman");
    movie.set_year(2009);
    // movie.set_year(1887);

    cout << "MOVIE DATA" << endl
        << "Title " << movie.get_title() << endl
        << "Year " << movie.get_year() << endl;
    return 0;
}
