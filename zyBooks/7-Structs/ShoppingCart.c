/*!
 *    \file  ShoppingCart.c
 *   \brief  
 *
 *  \author  Burke Simmons (), burkesimmons@mail.weber.edu
 *
 *  \internal
 *       Created:  03/21/2019
 *      Revision:  none
 *      Compiler:  gcc
 *  Organization:  WSU
 *     Copyright:  Copyright (c) 2019, Burke Simmons
 *
 *  This source code is released for free distribution under the terms of the
 *  GNU General Public License as published by the Free Software Foundation.
 */
#include <stdio.h>
#include <string.h>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"

int i = 0;

// Adds an item to cartItems array. Has parameters ItemToPurchase 
    // and ShoppingCart. Returns ShoppingCart object.
ShoppingCart AddItem(Items item, ShoppingCart shopcart)
{

//    shopcart.cartSize = 0;
    shopcart.cartItems[shopcart.cartSize] = item;
    shopcart.cartSize++;
    return shopcart;
}
/*

//  Removes item from cartItems array (does not just set quantity to 0; 
//  removed item will not take up a slot in array). 
//  Has a char[ ](an item's name) and a ShoppingCart parameter. 
//  Returns ShoppingCart object.
//  If item name cannot be found, output this message: Item not found in cart. 
//  Nothing removed.
ShoppingCart RemoveItem(char item[], ShoppingCart shopcart)
{
    for(int i = 0; i < strlen(shopcart.cartItems); i++)
    {
        if(strcmp(shopcart.cartItems[i].itemName, item) == 0;)
        {
            // figure out how to remove slot from array
        }
        else
        {
            printf("Item not found");
        }
    }
    return shopcart;
}
*/

// Modifies an item's description, price, and/or quantity. 
// Has parameters ItemToPurchase and ShoppingCart. Returns ShoppingCart object.
ShoppingCart ModifyItem(Items item, ShoppingCart* shopcart)
{
    for(int i = 0; i < shopcart->cartSize; i++)
    {
        if(strcmp(shopcart->cartItems[i].itemName, item.itemName) == 0)
        {
            shopcart->cartItems[i].itemQuantity = item.itemQuantity;
        }
        else
        {
            printf("Item not found in cart. Nothing modified.\n");
        }
    }
    return *shopcart;
}

/*
int ItemToPurchase GetNumItemsInCart(ShoppingCart shopcart)
{
    int numItems;
    numItems = shopcart.cartItems[strlen(cartItems)];
}

int GetCostOfCart(ShoppingCart shopcart)
{

}


// Outputs total of objects in cart. Has a ShoppingCart parameter.
//  If cart is empty, output this message: SHOPPING CART IS EMPTY
void PrintTotal(ShoppingCart shopcart)
{
    printf("%s's Shopping Cart - %c\n", shopcart.customerName, 
            shopcart.currentDate);
    shopcart thisCart;
    for(int i = 0;i < thisCart.carSize; i++)
    {
        PrintItemCost(shopcart[i]);
        totalCost = totalCost + items[i].itemQuantity * items[i].itemPrice;
    }
    printf("\nTotal: $%d\n", totalCost);
}

void PrintDescriptions(ShoppingCart shopcart)
{

}

    return shopcart;
}
*/
/*
ShoppingCart RemoveItem(char item, ShoppingCart shopcart)
{
    return shopcart;
}

ShoppingCart ModifyItem(Items item, ShoppingCart shopcart)
{

}
*/

// Returns quantity of all items in cart. Has a ShoppingCart parameter
int GetNumItemsInCart(ShoppingCart shopcart)
{
    int numItems = 0;
    for(int i = 0; i < shopcart.cartSize; i++)
    {
    numItems += shopcart.cartItems[i].itemQuantity;
    }
    return numItems;
}

/*
int GetCostOfCart(ShoppingCart shopcart)
{

}

*/
// Outputs total of objects in cart. Has a ShoppingCart parameter.
//  If cart is empty, output this message: SHOPPING CART IS EMPTY
int PrintTotal(ShoppingCart shopcart)
{
    return shopcart.cartSize;
}
/*
void PrintDescriptions(ShoppingCart shopcart)
{

}
*/
