/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  learn while loops
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:37:04 AM
 *       Revision:  none
 *       Compiler:  gcc firstwhile.c -o firstwhile.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>       // for true and false variables
// Constants
#define MINCOUNT 2
#define MAXCOUNT 5
#define MINGRADE 0
#define MAXGRADE 100
#define MAXSTUDENTS 3
// Function Prototypes

// Main Function
int main()
{
    // Task 1: Calculate the average of user input values
    // Task 2: Validate user input for 0 to 100 only
    // Task 3: Ask user how many values they need to enter
    // Task 4: If user enters a number below MINCOUNT set it MINCOUNT
    //         and if user enters a value greater than MAXCOUNT, set it to MAXCOUNT
    // Task 5: Support multiple student entries. Calculate class average.
    // Task 6: Display support letter grade
    int grade_count = 0, student_count = 1;
    float grade, avg;
    float total = 0;
    int hw_count = 0;
    

    while(student_count <= MAXSTUDENTS)         // loop over students
    {
        printf("Enter total amout of homework grade values (between %d and %d):\n",
                MINCOUNT, MAXCOUNT);
        scanf("%d", &hw_count);
        if(hw_count < MINCOUNT) {
            printf("%d is lower than %d .Setting your entry to %d\n", 
                    hw_count, MINCOUNT, MINCOUNT);
            hw_count = MINCOUNT;
        }
        if(hw_count > MAXCOUNT) {
            printf("%d is lower than %d .Setting your entry to %d\n", 
                    hw_count, MAXCOUNT, MAXCOUNT);
            hw_count = MAXCOUNT;
        }
        while(grade_count < MAXCOUNT) {

            printf("\nEnter %d hw grade(%d-%d): ", grade_count + 1, MINGRADE, MAXGRADE);
            scanf("%f", &grade);
            // Enter values only, nothing else
            if (grade < MINGRADE || grade > MAXGRADE) {
                printf("Invalid input. Please try again\n");
                continue;   //invalid input
            }

            total += grade; // add up grades

            grade_count++; //update test condition: sentinel
            if(grade_count == hw_count) {
                break;      // reach the hw_count
            }
        }       // end of one student loop
        avg = total/hw_count;
        printf("Your avg is [%6.2f]\n", avg);
        grade_count = 0;   // reset homework grade count
        total = 0;

        student_count++;
    }  // end of students loop
    printf("\nBye amigo\n");

    return 0;
}
// Function Defintions


