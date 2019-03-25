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
#include "ShoppingCart.h"

const int ITEMNUM = 10;

void PrintMenu();

/* Main Function */
int main(int argc, char* argv[])
{
    char menuOp = '-';
    ShoppingCart shopcart;
    Items item;

    // Init values
    int totalCost = 0;
    shopcart.cartSize = 0;   // set cart size to zero 

    // take customer info
    printf("Enter Customer's Name:\n");
    fgets(shopcart.customerName, 50, stdin);
    shopcart.customerName[strlen(shopcart.customerName) -1] = '\0';
    printf("Enter Today's Date:\n");
    fgets(shopcart.currentDate, 20, stdin);
    shopcart.currentDate[strlen(shopcart.currentDate) -1] = '\0';

    printf("\nCustomer Name: %s\n", shopcart.customerName);
    printf("Today's Date: %s\n", shopcart.currentDate);

    //
    PrintMenu();
    printf("\nChoose an option:\n");
    scanf(" %c", &menuOp);

    while (menuOp != 'q')
    {
        // Add item to cart
        if (menuOp == 'a')
        {
            char dummy;
            scanf("%c", &dummy);
            printf("ADD ITEM TO CART\n");
            printf("Enter the item name:\n");
            fgets(item.itemName, 50, stdin);
            item.itemName[strlen(item.itemName) - 1] = '\0';
            printf("Enter the item description:\n");
            fgets(item.itemDescription, 100, stdin);
            item.itemDescription[strlen(item.itemDescription) -1] = '\0';
            printf("Enter the item price:\n");
            scanf("%d", &item.itemPrice);
            printf("Enter the item quantity:\n");
            scanf("%d%c", &item.itemQuantity, &dummy);
            fflush(stdin);
            
            AddItem(item, shopcart);
            /*
               printf("%s %d @ $%d = $%d\n", item.itemName,
               item.itemQuantity, item.itemPrice,
               item.itemQuantity * item.itemPrice);

               totalCost = totalCost + item.itemQuantity * item.itemPrice;

               printf("\nTotal: $%d\n", totalCost);
               totalCost = 0;
               */

            PrintMenu();

            printf("\nChoose an option:\n");
            scanf(" %c", &menuOp);
        }

        //Remove item from cart
        else if (menuOp == 'r')
        {
            
        }

        // Change item quantity
        else if (menuOp == 'c')
        {
            char dummy;
            scanf("%c", &dummy);
            printf("CHANGE ITEM QUANTITY\n");
            printf("Enter the item name:\n");
            fgets(item.itemName, 50, stdin);
            item.itemName[strlen(item.itemName) - 1] = '\0';
            printf("Enter the new quantity:\n");
            scanf("%d%c", &item.itemQuantity, &dummy);
            
            ModifyItem(item, &shopcart);
        }

        // Output items' descriptions
        else if (menuOp == 'i')
        {
        }

        //Output shopping cart
        else if (menuOp == 'o')
        {

            //        ShoppingCart shopcart;

            printf("OUTPUT SHOPPING CART\n");
            printf("%s's Shopping Cart - %s\n", shopcart.customerName, 
                    shopcart.currentDate);
            //            shopcart.cartSize = strlen(shopcart.cartItems);
            printf("Number of items: %d\n", shopcart.cartSize + 1);

            printf("\n");
            for(int i = 0; i < shopcart.cartSize + 1; i++)
            {
            printf("%s %d @ $%d = $%d\n", item.itemName, 
                    item.itemQuantity, 
                    item.itemPrice,
                    item.itemQuantity * item.itemPrice);
            }
            totalCost = totalCost + item.itemQuantity * item.itemPrice;

            printf("\nTotal: $%d\n", totalCost);
            totalCost = 0;
            /*
               for(int i = 0; i <ITEMNUM; i++)
               {
               printf("%s %d @ $%d = $%d\n", item[i].itemName,
               item[i].itemQuantity, item[i].itemPrice,
               item[i].itemQuantity * item[i].itemPrice);
               }
               */
            totalCost = totalCost + item.itemQuantity * item.itemPrice;

            printf("\nTotal: $%d\n", totalCost);
            PrintMenu();

            printf("\nChoose an option:\n");
            scanf(" %c", &menuOp);
        } // end of 'o' choice

        else
        {
            printf("Choose an option:\n");
            scanf(" %c", &menuOp);
        }
    } 
    /*
       Items items[ITEMNUM];
       char dummy;


       for(int i = 0; i < ITEMNUM; i++)
       {
       MakeItemBlank(&items[i]);
       continue;

       printf("Item %d\n", i+1);
       printf("Enter the item name:\n");
       fgets(items[i].itemName, 50, stdin);
       items[i].itemName[strlen(items[i].itemName) - 1] = '\0';
       printf("Enter the item price:\n");
       scanf("%d", &items[i].itemPrice);
       printf("Enter the item quantity:\n");
       scanf("%d%c", &items[i].itemQuantity, &dummy);
       printf("\n");

       fflush(stdin);
       }
       */

    return 0;
}

void PrintMenu()
{

    printf("\nMENU\n");
    printf("a - Add item to cart\n");
    printf("r - Remove item from cart\n");
    printf("c - Change item quantity\n");
    printf("i - Output items' descriptions\n");
    printf("o - Output shopping cart\n");
    printf("q - Quit\n");

}
