/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  Implementation library
 *
 *        Version:  1.0
 *        Created:  03/26/2019 09:11:42 AM
 *       Revision:  none
 *       Compiler:  gcc ShoppingCart.c -o ShoppingCart.out
 *          Usage:  ./ShoppingCart.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "ShoppingCart.h"

// Constants

// Function Definitions

int GetNumItemsInCart(ShoppingCart* cart)
{
    int i= 0;
    
    return i;
}


int GetCostOfCart(ShoppingCart* cart)
{
    int i = 0;

    return i;
}
void PrintTotal(ShoppingCart* cart)
{
    return;
}


void PrintDescriptions(ShoppingCart* cart)
{
    return;
}


ShoppingCart AddItems(ItemToPurchase* item, ShoppingCart* cart)
{
    return *cart; // the '*' dereference the pointer to return the values of the 
                    // structure
}


ShoppingCart RemoveItems(char name[], ItemToPurchase* item, ShoppingCart* cart)
{
    return *cart; // the '*' dereference the pointer to return the values of the 
                    // structure

}


ShoppingCart ModifyItems(ItemToPurchase* item, ShoppingCart* cart)
{
    return *cart; // the '*' dereference the pointer to return the values of the 
                    // structure
}


