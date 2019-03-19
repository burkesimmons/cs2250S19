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

struct TeleType
{
    char name[MAXNAME];
    char phoneNum[MAXPHONE];
    struct TeleType* nextaddr;  // "should" be the last member/variable of this structure
};
typedef struct TeleType Tele;

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    Tele t1 = {"Acme, Junio","(801) 891-2344"};
    Tele t2 = {"Martinez, Tino","(801) 891-6969"};
    Tele t3 = {"Weber, Waldo","(801) 638-0011"};
    Tele* first; // pointer(address) to structure
    
    first = &t1; // get the address of Tele structure
    t1.nextaddr = &t2; // set the address of the next structure
    t2.nextaddr = &t3; // set the address of the next structure
    t3.nextaddr = NULL; // set the address of NULL, lastmember

    printf("%s\n%s\n", first->name, first->phoneNum);

    return 0;
}
// Function Definitions


