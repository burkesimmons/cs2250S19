/*
 * =====================================================================================
 *
 *       Filename:  simpleCalculator.c
 *       Usage:     ./simpleCalculator.out <PARAM1> <PARAM2>
 *
 *    Description:  Calculate the sum, difference, product of two input parameters
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:28:39 AM
 *       Revision:  none
 *       Compiler:  gcc simpleCalculator.c -o simpleCalculator.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>  // atoi() string to integer

// Constants
#define ADD 1
#define SUB 2
#define MUL 3
#define EXIT 0
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int choice =0;
    int num1, num2;
    // Validate argument count,
    // return 1 otherwise
    if(argc != 3)
    {
        printf("Missing input parameters");
        printf("Usage: ./%s <PARAM1> <PARAM2>\n", argv[0]);
        return 1;
    }
    // Convert input strings to integers
    num1 = atoi(argv[1]); // first input param
    num2 = atoi(argv[2]); // second input param
 
    do          // beginning of do while
    {
        
        printf("What do you want to do you want to do with these numbers?\n");
        printf("\t 1) Addition\n");
        printf("\t 2) Subtraction\n");
        printf("\t 3) Multiplication\n");
        printf("\t 0) To quit\n");
        scanf("%d", &choice);
       
        switch(choice)
            {
                case ADD:
                    printf("%d + %d is %d\n",num1,num2, num1 +num2);
                    break;
                case SUB:
                    printf("%d - %d is %d\n", num1, num2, num1 - num2);
                    break;
                case MUL:
                    printf("%d * %d is %d\n", num1, num2, num1 * num2);
                    break;
                case EXIT:
                    break;
                default:
                    printf("Unsupported function\n");
            }
    } while(choice != EXIT); // end of do while

    printf("Adios amigo\n");
    return 0;
}
// Function Definitions


