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
#include <iomanip> // more cout options
#include <string> // for strings
#include <vector> // for vectors "arrays with lots of features"
#include "Movie.h"
using namespace std;

// Main Function
int main(int argc, char* argv[])
{
    cout << "The movie list Program" << endl << endl
        << "Enter a movie ..." << endl << endl;
    // Get movies from user
//    Movie movies[10];  // an array of 10 movies. Fixed to 10 spots
    vector<Movie> movies;  // define a vector of movies. Grow on demand
    char another = 'y';
    // Loop for entries
    while(tolower(another) == 'y')
    {
        Movie movie;
        string title;
        int year;
        // Get user input
        cout << "Title: ";   // get title
        getline(cin, title);
        movie.set_title(title);
        cout << "Year: ";   // get year
        cin >> year;
        movie.set_year(year);
        // Add it to the vector
        movies.push_back(movie);

        cout << endl << "Enter another movie? (y|n): ";
        cin >> another;
        cin.ignore();  // ignore anything else in the buffer
        cout << endl;
    }// end of while loop
    // Display movies
    const int w = 10;
    cout << left
        << setw(w*3) << "TITLE"
        << setw(w) << "YEAR" << endl;
    for(Movie movie : movies)  // looping over vector
    {
        cout << setw(w*3) << movie.get_title()
            << setw(w) << movie.get_year() << endl;
    }
    cout << endl;

    return 0;
}
