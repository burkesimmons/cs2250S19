/*
 * =====================================================================================
 *
 *       Filename:  use_employee.c
 *
 *    Description:  Use the Employee Library
 *
 *        Version:  1.0
 *        Created:  03/13/2019 09:35:27 PM
 *       Revision:  none
 *       Compiler:  gcc use_employee.c -o use_employee.out
 *          Usage:  ./use_employee.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "employee.h"

// Main Function
int main(int argc, char* argv[])
{ 
    Employee waldo;

    CreateEmployee(&waldo);
    CalcPay(&waldo);
    DisplayEmp(&waldo);

    return 0;
}

