#include <stdio.h>

int main()
{
	//Task: Define two integers
	//Display their values
	//Display the sum of them
	
	int a = 15;
	int b = 20;
	int c = a + b;

	printf("The value of a is %d. The value of b is %d.\n", a, b);
	printf("The sum of the values are %d.\n", c);

	int i1 = 2;
	int i2 = 4;
	
	//Display their values
	printf("Please enter an integer value\n");
	//To capture user input use the scanf() function
	//Use same placeholder as printf: %d for integers
	//BUT remember to use the Address operator before the
	//variable name &i1
	scanf("%d", &i1);
	printf("The value of i1 is = %d\n", i1);

	printf("Please enter another integer value\n");
	scanf("%d", &i2);
	printf("The value of i2 is = %d\n", i2);


	//Display the sum of them
	printf("The value of %d + %d is = %d\n", i1, i2, i1 + i2);
	return 0;
}
