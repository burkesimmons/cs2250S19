/*
 * =====================================================================================
 *
 *       Filename:  open_files.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2019 08:40:47 AM
 *       Revision:  none
 *       Compiler:  gcc open_files.c -o open_files.out
 *          Usage:  ./open_files.out
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

// Main Fucdcdnction
int main(int argc, char* argv[])
{
    int num;
    FILE *fptr;
    //1) open a file: ptr= fopen("fileToOpen", "mode")
    fptr = fopen("program.txt", "w");
    //2) Check if it works
    if(fptr == NULL)
    {
        printf("Error! Could not open file for writing\n");
        exit(1);
    }
    // 2) read/write from/to the file
    printf("Enter a number: ");
    scanf("%d", &num);
    // Write to file: fprintf()
    fprintf(fptr, "%d\n", num);
    // 3) close the file fclose(ptr)
    fclose(fptr);
    

    return 0;
}
// Function Definitions


