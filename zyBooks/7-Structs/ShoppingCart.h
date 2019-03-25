/*!
 *    \file  ShoppingCart.h
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
#ifndef  SHOPPINGCART__INC__
#define  SHOPPINGCART__INC__
#include <string.h>
#include "ItemToPurchase.h"

//const int ITEMNUM = 10;

typedef struct ShoppingCart_struct
{
    char customerName[50];
    char currentDate[20];
    Items cartItems[10];
    int cartSize;

}ShoppingCart;

// Adds an item to cartItems array. Has parameters ItemToPurchase 
    // and ShoppingCart. Returns ShoppingCart object.
ShoppingCart AddItem(Items item, ShoppingCart shopcart);

/*
//  Removes item from cartItems array (does not just set quantity to 0; 
//  removed item will not take up a slot in array). 
//  Has a char[ ](an item's name) and a ShoppingCart parameter. 
//  Returns ShoppingCart object.
//  If item name cannot be found, output this message: Item not found in cart. 
//  Nothing removed.
ShoppingCart RemoveItem(char item, ShoppingCart shopcart);
*/

// Modifies an item's description, price, and/or quantity. 
// Has parameters ItemToPurchase and ShoppingCart. Returns ShoppingCart object.
ShoppingCart ModifyItem(Items item, ShoppingCart* shopcart);


// Returns quantity of all items in cart. Has a ShoppingCart parameter
int GetNumItemsInCart(ShoppingCart shopcart);
/*
// Determines and returns the total cost of items in cart. 
// Has a ShoppingCart parameter. 
int GetCostOfCart(ShoppingCart shopcart);
*/
// Outputs total of objects in cart. Has a ShoppingCart parameter.
//  If cart is empty, output this message: SHOPPING CART IS EMPTY
int PrintTotal(ShoppingCart shopcart);
/*
//Outputs each item's description. Has a ShoppingCart parameter.
void PrintDescriptions(ShoppingCart shopcart);
*/

#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */
