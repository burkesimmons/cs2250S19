/*!
 *    \file  Movie.h
 *   \brief  Movie class declaration
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
#ifndef  MOVIE__INC__
#define  MOVIE__INC__

#include <iostream>
#include <string>
using namespace std;

class Movie
{
    // Only the member has access to
    // data member are private
    private:
        string title;
        int year;
        int stars;
        string to_upper(string);
    // Anyone has access to it
    public:
        // Constructors
        Movie(string title = "", int year = 1888, int stars = 0);
        // Destructor
        ~Movie();
        // "Setters"
        void set_title(string set_title);
        void set_year(int year);
        void set_stars(int stars);
        // "Getters"
        string get_title() const;
        int get_year() const;
        int get_stars() const;
        // Others
        void info() const;
        bool iequals(const Movie&);

}; // end of Movie class

#endif /* ----- #ifndef MOVIE__INC__ ----- */
