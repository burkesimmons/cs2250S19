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
    int num1, num2;
//    int num2;
    printf("Enter an even and an odd integer: ");
    scanf("%d %d", &num1, &num2);
    //test value for even or odd
//    if (num1 % 2 == 0)
    if ((num1 + num2) % 2 != 0)
    {
        printf("%d and %d are an even and odd numbers\n", num1, num2);
    }
    else
    {
        printf("%d and %d are not even and odd numbers\n", num1);
    }
        //test value for even or odd
    if (num2 % 2 == 0)
    {
        printf("%d is even\n", num2);
    }
    else
    {
        printf("%d is odd\n", num2);
    }
    printf("Adios amigo\n");

    return 0;
}
// Function Definitions


