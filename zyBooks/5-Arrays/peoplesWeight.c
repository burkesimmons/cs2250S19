/*
 * =====================================================================================
 *
 *       Filename:  peoplesWeight.c
 *
 *    Description:  People's Weight, enter five weight values, store them and get
 *    averages
 *
 *        Version:  1.0
 *        Created:  02/19/2019 08:36:11 PM
 *       Revision:  none
 *       Compiler:  gcc peoplesWeight.c -o peoplesWeight.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#define NUM_PEOPLE 5
int main(void) {

    int i;
    double weight[NUM_PEOPLE], sum;

  for(i = 0; i < NUM_PEOPLE; i ++)
  {
    printf("Enter weight %d:\n", i + 1);
   scanf("%lf", &weight[i]);
           }
printf("You entered: ");
sum = 0;
  for(i = 0; i < NUM_PEOPLE; i ++)
  {
    printf("%lf ", weight[i]);
    sum = sum + weight[i];
           }
  double max;
  for(i = 0; i < NUM_PEOPLE; i++)
  {
      if(max < weight[i])
      {
          max = weight[i];
      }
  }
  int l = sizeof(weight)/sizeof(double);
  printf("\n\nTotal weight: %lf", sum);
  printf("\nAverage weight: %lf", sum / l);
  printf("\nMax weight: %lf\n", max);
  return 0;
}

