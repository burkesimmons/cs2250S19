/*!
 *    \file  Movie.cpp
 *   \brief  Movie Class
 *
 *  \author  Burke Simmons (), burkesimmons@mail.weber.edu
 *
 *  \internal
 *       Created:  04/04/2019
 *      Revision:  none
 *      Compiler:  gcc
 *  Organization:  WSU
 *     Copyright:  Copyright (c) 2019, Burke Simmons
 *
 *  This source code is released for free distribution under the terms of the
 *  GNU General Public License as published by the Free Software Foundation.
 */
// For C++ Code
#include <iostream>
#include <iomanip>
#include "Movie.h"
using namespace std;

// Function Definitions
void Movie::set_title(string set_title)
{
    // this-> title = set_title; // optional
    title = set_title;
}
void Movie::set_year(int set_year)
{
    if (set_year < 1888)
    {
        throw invalid_argument("Year must be 1888 or later.");
    }
    // this-> refers to yourself
    // required because of the same name
    this->year = year;
}
void Movie::set_stars(int set_stars)
{
    stars = set_stars;
}

// Define Getters
string Movie::get_title()
{
    return title;
}

int Movie::get_year()
{
    return year;
}
 *   Compiler (C):  gcc Movie.cpp -o Movie.out
