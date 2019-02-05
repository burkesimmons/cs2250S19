/*
 * =====================================================================================
 *
 *       Filename:  month_day.c
 *
 *    Description:  Take month and day from user, then verify entries are vaid.
 *
 *        Version:  1.0
 *        Created:  01/31/2019 09:17:32 AM
 *       Revision:  none
 *       Compiler:  gcc month_day.c -o month_day.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define JANUARY     1
#define FEBRUARY    2
#define MARCH       3
#define APRIL       4
#define MAY         5
#define JUNE        6
#define JULY        7
#define AUGUST      8
#define SEPTEMBER   9
#define OCTOBER     10
#define NOVEMBER    11
#define DECEMBER    12
// Main Function
int main()
{

    int month, day;
    char answer;
    while(1)
    {
        // 1) Capture user input
        printf("Enter a month and date using numbers and a space in between: \n");
        scanf("%d %d", &month, &day);

        // 2) Use IF to validate month
        if(month > 12 || month < 1)
        {
            printf("You have entered an invalid month\n");
            return 1;
        }
        // 3) Use SWITCH to validate day of the month
        switch(month)
        {
            //Months with 31 days
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                if(day > 31 || day < 1)
                {
                    printf("Invalid day\n");
                    return  1;
                }
                break;
                //Months with 30 days
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                if(day > 30 || day < 1)
                {
                    printf("Invalid day\n");
                    return  1;
                    break;
                }
                //Months with 29 days
            case FEBRUARY:
                if(day > 29 || day < 1)
                {
                    printf("Invalid day\n");
                    return  1;
                }
                break;
        }
        printf("You entered a valid month [%d] and day [%d] values \n", month, day);
        printf("\n\nDo you want to continue [y|n]: ");
        scanf(" %c", &answer);
        if(answer !='y' && answer != 'Y')
        {
            printf("answer is [%c]\n", answer);
            break; // exit loop
        }
    } // end of while
    printf("\nGood Bye\n");
    return 0;
}
