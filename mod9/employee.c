/*
 * =====================================================================================
 *
 *       Filename:  employee.c
 *
 *    Description:  Define an employee structure for record keeping
 *
 *        Version:  1.0
 *        Created:  03/12/2019 09:09:57 AM
 *       Revision:  none
 *       Compiler:  gcc employee.c -o employee.out -lm
 *          Usage:  ./employee.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants & Globals
typedef struct Employee
{
    int idNum;
    double payRate;
    double hours;

}Employee;
// Function Prototypes
double CalcNet(Employee emp); // pass by value

// Main Function
int main(int argc, char* argv[])
{
    double netPay = 0;
    Employee waldo = {1, 7.50, 20};
    netPay = CalcNet(waldo);
    printf("Hi Waldo, your net pay for %lf hours at $%6.2lf rate is $%6.2lf\n",
            waldo.hours, waldo.payRate, netPay);
    return 0;
}
// Function Definitions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcNet
 *  Description:  Calculate the net pay based on payRate and hours
 *  Param: Employee structure
 *  Return: Net Pay as double
 * =====================================================================================
 */
double CalcNet(Employee emp)
{
    return emp.payRate * emp.hours;
}
