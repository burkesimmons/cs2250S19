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
#include "employee.h"

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
    return emp.payRate * emp.hours * (1- emp.taxRate);
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcGross
 *  Description:  Calculate the gross pay based on payRate and hours
 *  Param: Employe estructure
 *  Return: Gross Pay as double
 * =====================================================================================
 */
double CalcGross(Employee* emp) // pass by reference
{
    // To access structure members when using a pointer (address)
    // use the dereference operator ->
    return emp->payRate * emp->hours;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CreateEmployee
 *  Description:  Create Employee record
 *  Param: Employee Structure
 * =====================================================================================
 */
void CreateEmployee(Employee* emp, int idNum)
{
    emp->idNum = idNum;
    emp->payRate =7.50;
    emp->hours =20;
    emp->taxRate = TAXRATE1;
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcPay
 *  Description:  Calculate the Gross and Net pay for the Employee
 *  Param: Employee Structure
 * =====================================================================================
 */
void CalcPay(Employee* emp)
{
    //Note: emp in an address(pointer), so if you need to pass it to function
    // that requires a pointer, then just use the name: emp
    // if you need to pass the VALUES, you need to dereference the reference
    // so use the *emp to access the values at the address
    //
    emp->netPay = CalcNet(*emp);           // pass by value
    emp->grossPay = CalcGross(emp);     // pass by reference
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayEmp
 *  Description:  Display Employee Information
 *  Param: Employee Structure
 * =====================================================================================
 */
void DisplayEmp(const Employee* emp)
{
    printf("Hi %d, your net pay for %lf hours at %lf rate is %lf\n",
            emp->idNum, emp->hours, emp->payRate, emp->netPay);

    printf("Your gross pay is %lf\n", emp->grossPay);
    return;
}
