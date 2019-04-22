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
#ifndef PLAYLISTNODE_H
#define PLAYLISTNODE_H

// struct and typedef for Song
typedef struct PlaylistNode_struct {
    char uniqueID[50];
   char songName[50];
   char artistName[50];
   int songLength;
} Song;

// struct and typedef declaration for Vector ADT
typedef struct vector_struct {
   Song* elements;
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
Song* vector_at(vector* v, unsigned int index);

// Insert new value at specified index
void InsertPlaylistNode(vector* v, unsigned int index, Song value);

// Insert new value at end of vector
void vector_push_back(vector* v, Song value);

// Erase (remove) value at specified index
void vector_erase(vector* v, unsigned int index);

// Return number of elements within vector
int vector_size(vector* v);

#endif
