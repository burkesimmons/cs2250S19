/*!
 *    \file  vector_employee.h
 *   \brief  
 *
 *  \author  Burke Simmons (), burkesimmons@mail.weber.edu
 *
 *  \internal
 *       Created:  04/02/2019
 *      Revision:  none
 *      Compiler:  gcc
 *  Organization:  WSU
 *     Copyright:  Copyright (c) 2019, Burke Simmons
 *
 *  This source code is released for free distribution under the terms of the
 *  GNU General Public License as published by the Free Software Foundation.
 */
#ifndef VECTOREMPLOYEE_H
#define VECTOREMPLOYEE_H

// struct and typedef for Employee
typedef struct EmployeeStruct {
    char uniqueID[50];
   char songName[50];
   char artistName[50];
   int songLength;
} Employee;

// struct and typedef declaration for Vector ADT
typedef struct vector_struct {
   Employee* elements;
   unsigned int size;
} vector;

// interface for accessing Vector ADT

// Initialize vector
void vector_create(vector* v, unsigned int vectorSize);

// Destroy vector
void vector_destroy(vector* v);

// Resize the size of the vector
void vector_resize(vector* v, unsigned int vectorSize);

// Return pointer to element at specified index
Employee* vector_at(vector* v, unsigned int index);

// Insert new value at specified index
void vector_insert(vector* v, unsigned int index, Employee value);

// Insert new value at end of vector
void vector_push_back(vector* v, Employee value);

// Erase (remove) value at specified index
void vector_erase(vector* v, unsigned int index);

// Return number of elements within vector
int vector_size(vector* v);

#endif
