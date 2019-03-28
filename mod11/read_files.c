/*
 * =====================================================================================
 *
 *       Filename:  read_files.c
 *
 *    Description:  Open files for reading purposes
 *
 *        Version:  1.0
 *        Created:  03/28/2019 08:48:18 AM
 *       Revision:  none
 *       Compiler:  gcc read_files.c -o read_files.out
 *          Usage:  ./read_files.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int num;
    FILE *fptr;
    //1) open a file: ptr= fopen("fileToOpen", "mode")
    // Check if it works
    if ((fptr = fopen("program.txt", "w")) ==NULL) // for reading
    {
        printf("Error! Could not open file for writing\n");
        exit(1);
    }
    // Begin reading from file
    fscanf(fptr, "%d", &num);
    printf("Read %d from input file\n", num);

    // Close file
    fclose(fptr);

    return 0;
}
// Function Definitions


