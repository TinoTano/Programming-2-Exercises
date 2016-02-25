#include <stdio.h>
#include <string.h>

//Exercise 1 function

char* mix_strings(char* string1, char* string2){

	int final_string_length = strlen(string1) + strlen(string2) + 1;
	char* final_string = (char*)malloc(final_string_length + 1);
	int j = 0;

	for (int i = 0; i < final_string_length / 2; i++){
		final_string[j++] = string1[i];
		final_string[j++] = string2[i];
	}
	
	final_string[final_string_length - 1] = '\0';

	return final_string;
}

int main(){

	// Exercise 1
	
	//Write a program that request two strings. It should call a function that mixes all characters of a string as a new string: “hello” + “world” = “hweolrllod”.

	char string1[80];
	char string2[80];
	char* result_string;

	printf("First string?: ");
	scanf_s("%s", string1, 80);
	getchar();
	printf("Second string?: ");
	scanf_s("%s", string2, 80);
	getchar();
	
	result_string = mix_strings(string1, string2);

	printf("Result string: %s", result_string);
	free(result_string);

	//Exercise 2

	/*2. Write a program that request N strings of 30 characters maximum. Then it requests an index.
	It should output all letters on that index for all.If a string does not have letters there it outputs “ ? ”.
	· With four string like : “this is a test”
		· On index 1 : “t i a t”
		· On index 3 : “i ? ? s”*/

	int num_strings;
	int index;

	printf("How many strings?: ");
	scanf_s("%d", &num_strings);
	getchar();

	char* result = (char*)malloc(num_strings + 1);

	printf("Index of the string?: ");
	scanf_s("%d", &index);
	getchar();

	for (int i = 0; i < num_strings; i++){
		char string[30];

		printf("String?: ");
		scanf_s("%s", &string, 30);
		getchar();

		if (string[index - 1] >= 65 && string[index - 1] <= 90 || string[index - 1] >= 97 && string[index - 1] <= 122){
			result[i] = string[index - 1];
		}
		else{
			result[i] = '?';
		}
		
		string[0] = '\0';
	}

	result[num_strings] = '\0';

	printf("Result: %s", result);
	free(result);

	getchar();
	return 0;
}