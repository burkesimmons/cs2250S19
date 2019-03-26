/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  Shopping cart library
 *
 *        Version:  1.0
 *        Created:  03/26/2019 08:59:32 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SHOPPINGCART__INC__
#define  SHOPPINGCART__INC__

#include "ItemToPurchase.h"

#define ITEMS 10
#define SIZE 50


typedef struct ShoppingCart_struct
{
    char custName[SIZE];
    char currentDate[SIZE];
    ItemToPurchase cartItems[ITEMS];
    int cartSize;
} ShoppingCart;

int GetNumItemsInCart(ShoppingCart* cart);
int GetCostOfCart(ShoppingCart* cart);
void PrintTotal(ShoppingCart* cart);
void PrintDescriptions(ShoppingCart* cart);
ShoppingCart AddItems(ItemToPurchase* item, ShoppingCart* cart);
ShoppingCart RemoveItems(char name[], ItemToPurchase* item, ShoppingCart* cart);
ShoppingCart ModifyItems(ItemToPurchase* item, ShoppingCart* cart);


#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

