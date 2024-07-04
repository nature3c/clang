#include <stdio.h>

int main() {
	/*int j = 0;
	for (j; j < 6; j++) {
		printf("%d\n", j);*/

	/*int k = 10;
	for(k=0; k < 6; ++k) {
		printf("%d\n",k);
	}
	printf("k after loop: %d\n", k);

	k = 10;
	printf("reset k: %d\n", k);*/

	//exercise 1: find sum of numbers
	/*int num;
	int sum = 0;

	printf("Input a number: "); scanf_s("%d", &num);
	for (int i = 1; i <= num; i++) {
		sum += i;
	}
	printf("The sum of the numbers between 1 - %d is: %d\n", num, sum);*/

	//exercise 2: find multiples
	/*int num;
	
	printf("Input a number: "); scanf_s("%d", &num);

	for (int i = 1; i <= 50; i++) {
		if (i % num == 0)
			printf("%d\n", i);
	}*/

	//exercise 3: display number multiplied by numbers 1-9 (times tables)
	/*int num;
	int result = 0;

	printf("Input a number: "); scanf_s("%d", &num);
	puts("");
	
	for (int i = 1; i <= 12; i++) {
		result = num * i;
		printf("%d * %d = %d\n", num, i, result);
		result = 0;
	}*/

	//exercise 4: print inputted num of stars
	/*int num;

	printf("Input a number >>> "); scanf_s("%d", &num);
	puts("");

	for (int i = 1; i <= num; i++) {
		putchar('*');
	}
	puts("");*/

	//exercise 5: 
	/*int tSum = 0, sSum = 0;

	for (int i = 1; i <= 50; i++) {
		if (i % 3 == 0 && i % 7 == 0) {
			printf("Multiple of 3 and 7\t: %d\n", i);
			tSum += i;
			sSum += i;
		}
		else if (i % 3 == 0) {
			printf("Multiple of 3\t\t: %d\n", i);
			tSum += i;
		}
		else if (i % 7 == 0) {
			printf("Multiple of 7\t\t: %d\n", i);
			sSum += i;
		}
	}
	printf("\nBetween 1-50\n");
	printf("Sum of numbers divisible by 3: %d\nSum of numbers divisible by 7: %d\n", tSum, sSum);*/

	int fillercode;

	//exercise 6: print A to Z
	/*int A = 65;

	for (int i = 1; i < 27; i++) {
		printf("%c ", A);
		A += 1;
	}
	puts("");*/

	//exercise 7: first day deposit 1 won, every following day deposit 2 times the day before, print result for 30 days
	/*int deposit = 1;
	int sum = 0;

	for (int day = 1; day <= 30; day++) {
		printf("Day %d: %d won\n", day, deposit);
		sum += deposit;
		deposit *= 2;
	}
	printf("\nFinal Total: %d won\n", sum);*/

	/*for (int i = 1; i <= 3; i++) {
		printf("Outside loop i: %d\n", i);
		for (int j = 1; j <= 5; j++ ) {
			printf("Inside loop j: %d\n", j);
		}
		puts("\nEnd of inside loop -> start of outside loop\n");
	}*/

	/*for (int a = 0; a <= 2; a++) {
		for (int b = 0; b <= 2; b++) {
			printf("(a : %d\tb : %d)\n", a, b);
		}
	}*/
;}