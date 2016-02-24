#include <stdio.h>

int main(){
	// 1. Calculate the Product of two numbers WITHOUT using the * operator. You must use while()

	printf("----------- Exercise 1 -----------\n\n");

	int number1;
	int number2;
	int result = 0;

	printf("First number? ");
	scanf_s("%d", &number1);
	getchar();
	printf("Second number? ");
	scanf_s("%d", &number2);
	getchar();

	while (number2 != 0){
		result = result + number1;
		number2--;
	}

	printf("Result: %d\n\n", result);

	//////////////////////////////////////////////////////////////////////////////////////////////////

	//2. Write a program that asks the user to type 10 integers and writes the smallest value.Use must use for()

	printf("----------- Exercise 2 -----------\n\n");

	int number_ex2[10];
	int lower = NULL;

	for (int i = 0; i < 10; i++){
		printf("Number?: ");
		scanf_s("%d", &number_ex2[i]);
		getchar();

		if (lower == NULL){
			lower = number_ex2[i];
		}
		if (number_ex2[i] < lower){
			lower = number_ex2[i];
		}
	}

	printf("Lower number is: %d\n\n", lower);

	//////////////////////////////////////////////////////////////////////////////////////////////////

	/*3. Write a program that asks for an integer and then asks for an option out of this menu
	(the program should go forever until the user quits):

		a.Increment(use++)
		b.Decrement(use--)
		c.Power of two
		d.Quit*/

	printf("----------- Exercise 3 -----------\n\n");


	while (1){

		int number_ex3;
		char option;
		int result_ex3 = NULL;

		printf("Number?: ");
		int is_number = scanf_s("%d", &number_ex3);
		getchar();

		if (is_number != 1){
			printf("\nNot a number!\n\n");
			continue;
		}

		while (1){
			printf("\nWhat you want to do with this number? \na.Increment\nb.Decrement\nc.Power of two\nd.Quit\n\nOption: ");
			scanf_s("%c", &option, 1);
			getchar();

			switch (option){
			case 'a':
				result_ex3 = ++number_ex3;
				break;
			case 'b':
				result_ex3 = --number_ex3;
				break;
			case 'c':
				result_ex3 = number_ex3 * number_ex3;
				break;
			case 'd':
				return 0;
				break;
			default:
				printf("\nNot an option!\n");
				break;
			}
			if (result_ex3 != NULL){
				printf("\nResult: %d\n\n", result_ex3);
				break;
			}
		}
	}

	getchar();
	return 0;
}