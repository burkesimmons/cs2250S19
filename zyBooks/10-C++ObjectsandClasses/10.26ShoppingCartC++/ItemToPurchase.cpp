/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.cpp
 *
 *    Description:  Items to purchase library
 *
 *        Version:  1.0
 *        Created:  04/09/2019 03:14:56 PM
 *       Revision:  none
 *       Compiler (C++):  g++ ItemToPurchase.cpp -o ItemToPurchase.out -lm
 *          Usage:  ./ItemToPurchase.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
using namespace std;
#include "ItemToPurchase.h"


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ItemToPurchase
 *  Description:  Constructor for Item to purchase. 
 *  Set itemName = "none"
 *  itemPrice = 0, and itemQuantity = 0
 * =====================================================================================
 */
ItemToPurchase::ItemToPurchase(string itemName, int itemPrice, int itemQuantity)
{
    SetName(itemName);
    SetPrice(itemPrice);
    SetQuantity(itemQuantity);
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetName
 *  Description:  Set the name variable
 * =====================================================================================
 */
void ItemToPurchase::SetName(string itemName)
{
      this->itemName = itemName; //optional
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetPrice
 *  Description:  Set the Purchase price
 * =====================================================================================
 */
void ItemToPurchase::SetPrice(int itemPrice)
{
    this->itemPrice = itemPrice;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetQuantity
 *  Description:  Set the item quantity 
 * =====================================================================================
 */
void ItemToPurchase::SetQuantity(int itemQuantity)
{
    this->itemQuantity = itemQuantity;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetName
 *  Description:  Get the name variable
 * =====================================================================================
 */
string ItemToPurchase::GetName() const
{
    return itemName;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetPrice
 *  Description:  Get the Purchase price
 * =====================================================================================
 */
int ItemToPurchase::GetPrice() const
{
    return itemPrice;
}




/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetQuantity
 *  Description:  Get the item quantity 
 * =====================================================================================
 */
int ItemToPurchase::GetQuantity() const
{
    return itemQuantity;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Print
 *  Description:  Print Item Purchased
 * =====================================================================================
 */
void ItemToPurchase::Print() 
{
    cout << itemName << " " << itemQuantity << " @ $"
        << itemPrice << " = $" << itemPrice * itemQuantity << endl;
}
