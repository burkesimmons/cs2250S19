#include<stdio.h>

//This is a comment. Your compiler will ignore it
//
//To compile my code run this command: gcc file.c -o <file>
//
int main()
{
	//int <label>
	int age =21;
	int weight = 0;
	//printf() to print output to the screen
	printf("How are you?\n");

	//use placeholder to display variable information
	//for example: %d for integers	
	//		%p for address of variable
	//		Use the '&' operator to get it
	printf("I am %d years old\n", age);
	printf("The address of int age is = %p\n", &age);
	age = 23;
	

	printf("I am %d years old\n", age);

	printf("You are %d years and %d pounds\n", age, weight);
	return 0;
}
