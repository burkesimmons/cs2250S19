/*
 * =====================================================================================
 *
 *       Filename:  First.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/23/2019 07:41:24 AM
 *       Revision:  none
 *   Compiler (C):  gcc First.c -o First.out
 *          Usage:  ./First.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C Code
#include <stdio.h>
#include <stdlib.h>

// Constants and Globals

// Function Prototypes
    typedef struct Mytime_t
    {
        int hour;
        int minutes;
        int seconds;
    }MyTime;

MyTime elapsed_time (const Mytime &t1, const MyTime &t2)
{
    int totHours;
    int totMinutes;
    int totSeconds;
    totHours = t2.hour - t1.hour;
    totMinutes = t2.minutes - t1.minutes;
    totSeconds = t2.seconds - t2.seconds;
    printf("Time between %d:%d:%d and %d:%d:%d is %d:%d:%d\n", 
            t2.hour, t2.minutes, t2.seconds, t1.hour, t1.minutes, t1.seconds,
            totHours, totMinutes, totSeconds);
    return;
}
// Main Function
int main(int argc, char* argv[])
{
    MyTime t1 = { 3, 45, 15 }, t2 = { 9, 44, 03 },
           t3 = {22, 50, 59 }, t4 = { 7, 30, 0 };
    int inTime;
    // Prototype
    // calculate elapsed time (assume t2 is later than t1)
    MyTime elapse_time(const MyTime &t1, const MyTime &t2);
    return 0;
}
// Function Definitions


