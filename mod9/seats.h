/*
 * =====================================================================================
 *
 *       Filename:  seats.h
 *
 *    Description:  Seats library
 *
 *        Version:  1.0
 *        Created:  03/14/2019 09:04:34 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SEATS__INC__
#define  SEATS__INC__

#include <string.h>
#include <stdbool.h>
    
typedef struct Seat_struct 
{
    char firstName[50];
    char lastName[50];
    int  amountPaid;
} Seat;

void SeatMakeEmpty(Seat* seat);  // Pass by reference
bool SeatIsEmpty(Seat seat);  // Pass by value
void SeatPrint(Seat seat); 
void SeatsMakeEmpty(Seat seats[], int numSeats);  //Reference to seats
void SeatsPrint(Seat seats[], int numSeats);
char SeatMenu();


#endif /* ----- #ifndef SEATS__INC__ ----- */

