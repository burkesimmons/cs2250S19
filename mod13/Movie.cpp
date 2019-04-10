/*
 * =====================================================================================
 *
 *       Filename:  Movie.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/09/2019 08:45:19 AM
 *       Revision:  none
 * Compiler (C++):  g++ Movie.cpp -o Movie.out:
 *          Usage:  ./Movie.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
#include <iomanip>
#include "Movie.h"
using namespace std;

// Default constructor
Movie::Movie(string title, int year, int stars)
{
    set_title(title);
    set_year(year);
    set_stars(stars);
}

// Destructor
Movie::~Movie()
{
    cout << "Destroying Object" << endl;
}

// Printinfo
void Movie::info() const
{
    int w = 10;
    cout << left
        << setw(w*3) << "TITLE"
        << setw(w) << "YEAR" 
        << setw(w) << "STARS" << endl;
    cout << setw(w*3) << get_title()
        << setw(w) << get_year() 
        << setw(w) << get_stars() << endl;
}
// Function Definitions
void Movie::set_title(string set_title)
{
//    this->title = set_title;  // optional
    title = set_title;
}

void Movie::set_year(int year)
{
    if (year < 1888)
    {
        throw invalid_argument("Year must be 1888 or later.");
    }
    // this-> refers to yourself
    // required because of the same name
    this->year = year;
}

void Movie::set_stars(int stars)
{
    // this-> refers to yourself
    // required because of the same name
    this->stars = stars;
}
// Define Getters
string Movie::get_title() const
{
    return title;
}
        
int Movie::get_year() const
{
    return year;
}

int Movie::get_stars() const
{
    return stars;
}
