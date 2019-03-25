/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2019 11:25:13 AM
 *       Revision:  none
 *       Compiler:  gcc main.c -o main.out
 *          Usage:  ./main.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
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
    char dummy;
    int totalCost = 0;

    for(int i = 0; i < ITEMNUM; i++)
    {
        MakeItemBlank(&items[i]);

        printf("Item %d\n", i+1);
        printf("Enter the item name:\n");
        fgets(items[i].itemName, 50, stdin);
        items[i].itemName[strlen(items->itemName) - 1] = '\0';
        printf("Enter the item price:\n");
        scanf("%d", &items[i].itemPrice);
        printf("Enter the item quantity:\n");
        scanf("%d%c", &items[i].itemQuantity, &dummy);
        printf("\n");

        fflush(stdin);
    }
    
    printf("TOTAL COST\n");
    
    for(int i = 0;i < ITEMNUM; i++)
    {
    PrintItemCost(items[i]);
    totalCost = totalCost + items[i].itemQuantity * items[i].itemPrice;
    }
    printf("\nTotal: $%d\n", totalCost);
    return 0;
}

#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE__INC__
    <+DETAILED+>

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE__INC__
    <+DETAILED+>

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE__INC__
    <+DETAILED+>

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE__INC__
    <+DETAILED+>

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */
#include <stdio.h>
#include <stdlib.h>

// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{

    return 0;
}
// Function Definitions


