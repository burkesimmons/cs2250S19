/*!
 *    \file  vector_employee.c
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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vector_employee.h"

// Initialize vector with specified size
void vector_create(vector* v, unsigned int vectorSize) {
   int i;
   
   if (v == NULL) return;
   
   v->elements = (Employee*)malloc(vectorSize * sizeof(Employee));
   v->size = vectorSize;
   for (i = 0; i < v->size; ++i) {
      strcpy(v->elements[i].uniqueID, "");
      strcpy(v->elements[i].songName, "");
      strcpy(v->elements[i].artistName, "");
      v->elements[i].songLength = 0;
   }
}

// Destroy vector
void vector_destroy(vector* v) {
   if (v == NULL) return;
   
   free(v->elements);
   v->elements = NULL;
   v->size = 0;
}

// Resize the size of the vector
void vector_resize(vector* v, unsigned int vectorSize) {
   int oldSize;
   int i;
   if (v == NULL) return;
   
   oldSize = v->size;
   v->elements = (Employee*)realloc(v->elements, vectorSize * sizeof(Employee));
   v->size = vectorSize;
   for (i = oldSize; i < v->size; ++i) {
      strcpy(v->elements[i].uniqueID, "");
      strcpy(v->elements[i].songName, "");
      strcpy(v->elements[i].artistName, "");
      v->elements[i].songLength = 0;
   }
}

// Return pointer to element at specified index
Employee* vector_at(vector* v, unsigned int index) {
   if (v == NULL || index >= v->size) return NULL;
   
   return &(v->elements[index]);
}

// Insert new value at specified index
void vector_insert(vector* v, unsigned int index, Employee value) {
   int i;
   
   if (v == NULL || index > v->size) return;
   
   vector_resize(v, v->size + 1);
   for (i = v->size - 1; i > index; --i) {
      v->elements[i] = v->elements[i-1];
   }
   
   strcpy(v->elements[i].uniqueID, value.uniqueID);
   strcpy(v->elements[i].songName, value.songName);
   strcpy(v->elements[i].artistName, value.artistName);
   v->elements[i].songLength = value.songLength;
}

// Insert new value at end of vector
void vector_push_back(vector* v, Employee value) {
   vector_insert(v, v->size, value);
}

// Erase (remove) value at specified index
void vector_erase(vector* v, unsigned int index) {
   int i;
   
   if (v == NULL || index >= v->size) return;
   
   for (i = index; i < v->size - 1; ++i) {
      v->elements[i] = v->elements[i+1];
   }
   vector_resize(v, v->size - 1);
}

// Return number of elements within vector
int vector_size(vector* v) {
   if (v == NULL) return -1;
   
   return v->size;
}
