/*
 * =====================================================================================
 *
 *       Filename:  read_students.c
 *
 *    Description:  Create and late read student records from file
 *
 *        Version:  1.0
 *        Created:  03/28/2019 09:43:50 AM
 *       Revision:  none
 *       Compiler:  gcc read_students.c -o read_students.out
 *          Usage:  ./read_students.out
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
void WriteStudentData(FILE *fout, int num);
void ReadStudentsData(FILE *fout, int num);

// Main Function
int main(int argc, char* argv[])
{
    int num;
    printf("Enter the number of students:\n");
    scanf("%d", &num);
    // Open the file to write
    FILE *fptr;
    //1) open a file: ptr= fopen("fileToOpen", "mode")
    if ((fptr = fopen("students.txt", "w")) ==NULL) // for writing
    {
        printf("Error! Could not open file\n");
        exit(1);
    }
    WriteStudentData(fptr, num);

    fclose(fptr); // close file

    // Now open the file for reading
    if ((fptr = fopen("students.txt", "r")) ==NULL) // for reading
    {
        printf("Error! Could not open file\n");
        exit(1);
    }
    ReadStudentsData(fptr, num);
    fclose(fptr); // close file



    return 0;
}
// Function Definitions


void WriteStudentData(FILE *fout, int num)
{
    char name[50];
    int marks;
    //Loop over students
    for(int i = 0; i < num; i++)
    {
        printf("For students %d\nEnter name: ", i+1);
        scanf("%s", name);
        printf("Enter marks: ");
        scanf("%d", &marks);
        // Write to file
//        fprintf(fout, "\nName: %s \nMarks = %d \n", name, marks);
        fprintf(fout, "%s %d \n", name, marks);
    }// end of loop
    return;
}


void ReadStudentsData(FILE *fout, int num)
{
    for(int i = 0; i < num; i++)
    {
        char name[50];
        int marks;
        fscanf(fout, "%s %d", name, &marks);
        printf("%d) %s student has %d\n", i+1, name, marks);
    }// end of loop
    return;
}
