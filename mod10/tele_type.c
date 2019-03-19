/*
 * =====================================================================================
 *
 *       Filename:  tele_type.c
 *
 *    Description:  First look into LinkedList
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:03:26 AM
 *       Revision:  none
 *       Compiler:  gcc tele_type.c -o tele_type.out
 *          Usage:  ./tele_type.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants & globals
#define MAXNAME 30
#define MAXPHONE 15

typedef struct TeleType
{
    char name[MAXNAME];
    char phoneNum[MAXPHONE];
}Tele;

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    Tele t1 = {"Acme, Junio","(801) 891-2344"};
    //Tele t2 = {"Martinez, Tino","(801) 891-6969"};
    //Tele t3 = {"Weber, Waldo","(801) 638-0011"};
    Tele* first; // pointer(address) to structure
    
    first = &t1; // get the address of Tele structure
    printf("%s\n%s\n", first->name, first->phoneNum);

    return 0;
}
// Function Definitions


