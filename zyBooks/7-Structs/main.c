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
#include "ItemToPurchase.h"

const int ITEMNUM = 2;

/* Main Function */
int main(int argc, char* argv[])
{
    Items items[ITEMNUM];

    for(int i = 0; i < ITEMNUM; i++)
    {
        MakeItemBlank(&items[i]);
printf("The item name is: %s\n", items[i].itemName);

        printf("Item %d\n", i+1);
        printf("Enter the item name:\n");
        fgets(items[i].itemName, 50, stdin);
//        items[i].itemName[strlen(items->itemName) - 1] = '\0';
        items[i].itemName[strcspn(items->itemName, "\n")] = 0;
        printf("Enter the item price:\n");
        scanf("%d", &items[i].itemPrice);
        printf("Enter the item quantity:\n");
        scanf("%d", &items[i].itemQuantity);
        printf("\n");
printf("The item name is: %s\n", items[i].itemName);

        fflush(stdin);
    }

    printf("Item 1 chars are:\n");
    for(int i = 0; i<strlen(items[0].itemName); i++) {
        printf ( "%d char is [%c]\n", i, items[0].itemName[i] );
    }
    printf("Item 2 chars are:\n");
    for(int i = 0; i < strlen(items[1].itemName); i++)
    {
        printf("%d char is [%c]\n", i, items[1].itemName[i]);
    }
    printf("TOTAL COST\n");
    PrintItemCost(items[0]);
    PrintItemCost(items[1]);

    return 0;
}
