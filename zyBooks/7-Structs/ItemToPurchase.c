/*!
 *    \file  ItemToPurchase.c
 *   \brief  
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
#include <stdio.h>
#include "ItemToPurchase.h"

// Function Definitions

void MakeItemBlank(Items* item)
{
    strcpy(item->itemName, "empty");
    item->itemPrice = 0;
    item->itemQuantity = 0;
    strcpy(item->itemDescription, "none");
}


void PrintItemCost(Items item)
{
    printf("%s %d @ $%d = $%d\n", item.itemName,
            item.itemQuantity, item.itemPrice,
            item.itemQuantity * item.itemPrice);
}

void PrintItemDescription(Items item)
{
    printf("%s: %s\n", item.itemName, item.itemDescription);
}
