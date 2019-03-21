/*
 * =====================================================================================
 *
 *       Filename:  students.c
 *
 *    Description:  Create a dynamically allocated structure
 *
 *        Version:  1.0
 *        Created:  03/21/2019 08:44:40 AM
 *       Revision:  none
 *       Compiler:  gcc students.c -o students.out
 *          Usage:  ./students.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants
#define MAX 50
typedef struct Student
{
    char fName[50];
    int idNum;
    struct Student* next;
} Student;

// Function Prototypes
void AddStudent(Student* thisStudent, char name[], 
        int id, Student* newStudent);
void LinkStudent(Student* thisStudent, Student* newStudent);
void DisplayStudent(const Student* st);


// Main Function
int main(int argc, char* argv[])
{
    int id = 0;
    char name[MAX] = "";
    char ans = 'y';
    char dummy;
//    Student st;
    Student *headRec = NULL;
    Student *nextRec = NULL;
    Student *currentRec = NULL;

    while(ans == 'y')
    {
        // first round headRec == NULL
        if(currentRec != NULL)
        {
            LinkStudent(currentRec, nextRec);
        }
        // Allocate the memory for the new record
        currentRec = (Student*) malloc(sizeof(Student));

        if(id == 0)
        {
            headRec = currentRec;
        }
        printf("Student %d\n", id + 1);
        id = id + 1;
        printf("Enter your name:\n");
        fgets(name, MAX, stdin);
        name[strlen(name) - 1] = '\0';  // Eliminate EOL character
        // Save it to a Student structure
        AddStudent(headRec, name, id, NULL);
        //Do you want to enter another record [y|n]
        printf("Do you want to enter another record? [y|n]");
        scanf("%c%c", &ans, &dummy);
        fflush(stdin);

    }
    // Display ALL student records
    currentRec = headRec;
    while(currentRec != NULL)
    {
        // DisplayStudent();
        DisplayStudent(currentRec);
        // Get the next record
        currentRec = currentRec->next;
    }

    return 0;
}
// Function Definitions

/*
 * ===  FUNCTION  ======================================================================
 *         Name:  AddStudent
 *  Description:  Populate a student structure
 * =====================================================================================
 */
void AddStudent(Student* thisStudent, char name[], 
        int id, Student* newStudent)
{
    

    strcpy(thisStudent->fName,name);
    thisStudent->idNum = id;
    thisStudent->next = newStudent; // set the address of the next member

    return;

}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayStudent
 *  Description:  Display a student record
 * =====================================================================================
 */

void DisplayStudent(const Student* st)
{
    printf("Hi [%s] student with id[%d]\n", st->fName, st->idNum);
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  LinkStudent
 *  Description:  Connect one node/structure to another
 * =====================================================================================
 */

void LinkStudent(Student* thisStudent, Student* newStudent)
{
    // Connect the records
//    Student* tmp = NULL;            // dummy
//    tmp = thisStudent->next;        // currently should be NULL
    thisStudent->next = newStudent; // Connect this to next record
//    newStudent->next = tmp;         // This is the end of the list
    return;
}
