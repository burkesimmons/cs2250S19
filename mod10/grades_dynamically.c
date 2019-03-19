/*
 * =====================================================================================
 *
 *       Filename:  grades_dynamically.c
 *
 *    Description:  Create grades dynamically
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:57:11 AM
 *       Revision:  none
 *       Compiler:  gcc grades_dynamically.c -o grades_dynamically.out
 *          Usage:  ./grades_dynamically.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>  // malloc(), exit(), free()

// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int numGrades;
    int* grades;

    printf("Enter the number of grades to be processed: ");
    scanf("%d", &numGrades);
    /* Here is where we request for memory */
    // <addressType> malloc(totalNumberOfBytes)
    // We are creating a dynamically allocated array through a pointer
    grades = (int*) malloc(numGrades * sizeof(int));
    //Check how many bytes are requested
    printf("You requested %ld bytes\n", numGrades * sizeof(int));
   /* Check you get a valid address. Did the memory was allocated?*/
    if(grades == NULL)
    {
        printf("\nFailed. Could not allocate memory\n");
        exit(1);
    }
    /* Ready to go from here */
    for(int i = 0; i < numGrades; i++)
    {
        printf(" Enter a grade: ");
        scanf("%d", &grades[i]);
    }
    /* Display info */
    for(int i = 0; i < numGrades; i++)
    {
        printf("  Grade %d is: %d\n", i + 1, grades[i]);
    }
    /* Free memory when you are done */
    free(grades);

    return 0;
}
// Function Definitions


