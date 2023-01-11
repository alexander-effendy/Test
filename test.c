#include <stdio.h>

int main() {


	printf("Hello how are you?\n");

	printf("Please enter your name: ");
	
	char name[50];

	scanf("%s", name);

	printf("Please enter your age: ");


	int age;
	scanf("%d", &age);

	printf("Your name is %s and you are %d years old\n", name, age);

 	return 0;

}
