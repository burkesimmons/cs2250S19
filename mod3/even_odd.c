/*
 * =====================================================================================
 *
 *       Filename:  even_odd.c
 *
 *    Description:  Determine ifthe input value is odd or even
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:37:55 AM
 *       Revision:  none
 *       Compiler:  gcc even_odd.c -o even_odd.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    //test value for even or odd
    if (num % 2 == 0)
    {
        printf("%d is even\n", num);
    }
    else
    {
        printf("%d is odd\n", num);
    }
    printf("Adios amigo\n");
        return 0;
}
// Function Definitions


