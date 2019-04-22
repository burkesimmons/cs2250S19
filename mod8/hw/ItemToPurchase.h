/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  Item library
 *
 *        Version:  1.0
 *        Created:  03/26/2019 08:45:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE__INC__

typedef struct ItemToPurchase_struct
{
    char itemName[50];
    char itemDescription[50];
    int itemPrice;
    int itemQuantity;
} ItemToPurchase;

void MakeItemBlank(ItemToPurchase* item); // by reference
void PrintItemCost(const ItemToPurchase* item); // by const reference
void PrintItemDescription(const ItemToPurchase* item); // by const reference


#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

