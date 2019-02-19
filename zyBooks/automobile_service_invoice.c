/*
 * =====================================================================================
 *
 *       Filename:  automobile_service_invoice.c
 *
 *    Description:  output a menu of automotive services and the corresponding
 *    costof each service
 *
 *        Version:  1.0
 *        Created:  02/05/2019 06:53:27 PM
 *       Revision:  none
 *       Compiler:  gcc automobile_service_invoice.c -o automobile_service_invoice.out
 *
 *         Author:  Burke Simmons (), burkesimmons@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

int main(void) {
   
   char firstService1[50], firstService2[50], secondService1[50], secondService2[50];
   int service1Price, service2Price, total;
   
   printf("Davy's auto shop services\n");
   printf("Oil change -- $35\n");
   printf("Tire rotation -- $19\n");
   printf("Car wash -- $7\n");
   printf("Car wax -- $12\n\n");
   
   printf("Select first service:\n");
   scanf("%s%s", firstService1, firstService2);
   
   
   printf("Select second service:\n");
   scanf("%s%s", secondService1, secondService2);
   
   //printf("firstService1 is [%s] and firstService2 is [%s]\n", firstService1, firstService2);
   //printf("secondService1 is [%s] and secondService2 is [%s]\n", secondService1,secondService2);
   if(strcmp(firstService1, "-") == 0) {
      strcpy(secondService2, secondService1);
      strcpy(secondService1, firstService2);
   }
   /*if(strcmp(secondService1, "-") == 0) {
      secondService2 = " ";
   }*/
   
   
   printf("\nDavy's auto shop invoice\n\n");
   
   if(strcmp(firstService1, "Oil") == 0) {
      printf("Service 1: Oil change, $35\n");
      service1Price = 35;
   }
   else if(strcmp(firstService1, "Tire") == 0) {
      printf("Service 1: Tire rotation, $19\n");
      service1Price = 19;
   }
   else if(strcmp(firstService2, "wash") == 0) {
      printf("Service 1: Car wash, $7\n");
      service1Price = 7;
   }
   else if(strcmp(firstService2, "wax") == 0) {
      printf("Service 1: Car wax, $12\n");
      service1Price = 12;
   }
   else {
      printf("Service 1: No service\n");
      service1Price = 0;
   }
   if(strcmp(secondService1, "Oil") == 0) {
      printf("Service 2: Oil change, $35\n");
      service2Price = 35;
   }
   else if(strcmp(secondService1, "Tire") == 0) {
      printf("Service 2: Tire rotation, $19\n");
      service2Price = 19;
   }
   else if(strcmp(secondService2, "wash") == 0) {
      printf("Service 2: Car wash, $7\n");
      service2Price = 7;
   }
   else if(strcmp(secondService2, "wax") == 0) {
      printf("Service 2: Car wax, $12\n");
      service2Price = 12;
   }
   else {
      printf("Service 2: No service\n");
      service2Price = 0;
   }
   total = service1Price + service2Price;
   printf("\nTotal: $%d\n", total);
   
   
   return 0;
}
