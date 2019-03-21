/*!
 *    \file  ItemToPurchase.h
 *   \brief  :
 *
 *  \author  Burke Simmons (), burkesimmons@mail.weber.edu
 *
 *  \internal
 *       Created:  03/19/2019
 *      Revision:  none
 *      Compiler:  gcc
 *  Organization:  WSU
 *     Copyright:  Copyright (c) 2019, Burke Simmons
 *
 *  This source code is released for free distribution under the terms of the
 *  GNU General Public License as published by the Free Software Foundation.
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE__INC__

#include <string.h>
#include <stdbool.h>

// Constants & globals
typedef struct ItemToPurchase_struct
{
    char itemName[50];
    int itemPrice;
    int itemQuantity;

}Items;

void MakeItemBlank(Items* item);
void PrintItemCost(Items item);

#endif
