/*!
 *    \file  main.c
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
#include <stdlib.h>
#include <string.h> // strlen()
#include "ItemToPurchaseWU.h"

const int ITEMNUM = 2;

/* Main Function */
int main(int argc, char* argv[])
{
    Items item1;
    Items item2;
    char dummy;
    int totalCost = 0;
    int i= 0;


    MakeItemBlank(&item1);
    printf("Item %d\n", i+1);
    printf("Enter the item name:\n");
    fgets(item1.itemName, 50, stdin);
    item1.itemName[strlen(item1.itemName) - 1] = '\0';
    printf("Enter the item price:\n");
    scanf("%d", &item1.itemPrice);
    printf("Enter the item quantity:\n");
    scanf("%d%c", &item1.itemQuantity, &dummy);
    printf("\n");
    fflush(stdin);
    i++;

    MakeItemBlank(&item2);
    printf("Item %d\n", i+1);
    printf("Enter the item name:\n");
    fgets(item2.itemName, 50, stdin);
    item2.itemName[strlen(item2.itemName) - 1] = '\0';
    printf("Enter the item price:\n");
    scanf("%d", &item2.itemPrice);
    printf("Enter the item quantity:\n");
    scanf("%d%c", &item2.itemQuantity, &dummy);
    printf("\n");
    fflush(stdin);

    printf("TOTAL COST\n");
    PrintItemCost(item1);
    totalCost = totalCost + item1.itemQuantity * item1.itemPrice;

    PrintItemCost(item2);
    totalCost = totalCost + item2.itemQuantity * item2.itemPrice;

    printf("\nTotal: $%d\n", totalCost);
    return 0;
}
