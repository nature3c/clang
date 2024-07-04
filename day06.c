#include <stdio.h>

int main() {
	/*int su;

	printf("Input a number: "); scanf_s("%d", &su);

	if (su % 2 == 0) {
		puts("Even");
	}
	else {
		puts("Odd");
	}*/

	/*int age;
	printf("Please input your age: "); scanf_s("%d", &age);
	puts("");

	if (age >= 20) {
		puts("You are an adult");
	}
	else {
		puts("You are not an adult");
	}*/


	//exercise 1
	/*int class1, class2, class3;

	printf("Please enter the score of your first class: "); scanf_s("%d", &class1);
	while (getchar() != '\n');
	printf("Please enter the score of your second class: "); scanf_s("%d", &class2);
	while (getchar() != '\n');
	printf("Please enter the scoreof your third class: "); scanf_s("%d", &class3);
	while (getchar() != '\n');
	puts("");

	if (class1 > 40 && class2 > 40 && class3 > 40) {
		if ((double) (class1 + class2 + class3) / 3 > 60) {
			puts("Pass");
		}
		else {
			puts("Fail");
		}
	}
	else {
		puts("Fail");
	}*/

	/*int su;
	printf("Input a number: "); scanf_s("%d", &su);
	puts("");

	if (su > 0)
		puts("Positive");
	else {
		if (su < 0)
			puts("Negative");
		else
			puts("Neither positive or negative");
	}*/

	//exercise 2
	/*int weight;
	char size;

	printf("What is the size (S/L): "); size = getchar();
	while (getchar() != '\n');
	printf("What is the weight: "); scanf_s("%d", &weight);
	puts("");

	if (size == 'L' || size == 'l') {
		if (weight >= 50) {
			puts("Use cart D");
		} else {
			puts("Use cart C");
		}
	} else {
		if (size == 'S' || size == 's') {
			if (weight >= 50) {
				puts("Use cart B");
			}
			else {
				puts("Use cart A");
			}
		}
		else {
			puts("The size is incorrect");
		}
	}*/

	int fillercode;

	/*int su;
	printf("Input a number: "); scanf_s("%d", &su);
	
	if (su > 20) {
		puts("Greater than 20");
	}
	else if (su > 10) {
		puts("Greater than 10");
	}
	else if (su > 0) {
		puts("Greater than 0");
	}*/

	/*int su;
	printf("Input a number: "); scanf_s("%d", &su);

	if (su > 20)
		puts("Greater than 20");
	if (su > 10)
		puts("Greater than 10");
	if (su > 0)
		puts("Greater than 0");*/

	//int num;
	//printf("Please input a number: "); scanf_s("%d", &num);
	//puts("");

	//if (num % 3 == 0 && num % 5 == 0) //careful 0 also works
	//	puts("Multiple of 3 and 5");
	//else if (num % 3 == 0)
	//	puts("Multiple of 3");
	//else if (num % 5 == 0)
	//	puts("Multiple of 5");
	//else
	//	puts("Not a multiple of 3 or 5");

	//exercise 3
	/*int age;

	printf("Please input your age: "); scanf_s("%d", &age);
	puts("");
	
	if (age >= 0 && age < 7) {
		puts("Free refills");
	}
	else if (age >= 7 && age < 14) {
		puts("8,000 won per refill");
	}
	else if (age >= 14 && age < 20) {
		puts("10,000 won per refill");
	}
	else if (age >= 20) {
		puts("16,500 won per refill");
	}
	else {
		puts("Not a valid age");
	}*/

	//exercise 4
	int grade;

	printf("Please input your grade: "); scanf_s("%d", &grade);
	puts("");

	if (grade <= 100 && grade >= 90) {
		puts("A");
	}
	else if (grade < 90 && grade >= 80) {
		puts("B");
	}
	else if (grade < 80 && grade >= 70) {
		puts("C");
	}
	else if (grade < 70 && grade >= 60) {
		puts("D");
	}
	else if (grade < 60 && grade >= 0) {
		puts("F");
	}
	else {
		puts("Invalid input");
	}
}