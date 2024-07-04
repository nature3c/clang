#include <stdio.h>

int main() {
	//exercise1
	/*int first = 1;
	int second = 1;

	for (int i = 1; i <=3; i++) {
		for (int j = 1; j <= 9; j++) {
			for (int k = 1; k <= 3; k++) {
				printf("%d x %d = %d\t", first, second, first * second);
				second++;
			}
			second-=3;
			first++;
			printf("\n");
		}
		second+=3;
		first -= 9;//change accordingly with j
		printf("\n");
	}*/

	/*	
		while (case) {
			code;
		}
	
		do {
			code;
		} while (case);
	
	*/

	/*int a = 0;
	while (a < 6) {
		printf("%d\n", a);
		a++;
	}*/

	/*int b = 5;

	while (b) {
		printf("%d\n", b);
		b--;
	}*/

	/*int val = 0;

	while (val < 1 || val> 5) {
		printf("1-5 input: "); scanf_s("%d", &val);
	}
	printf("val: %d\n", val);*/

	/*int val, tf = 1;

	while (tf) {
		printf("1-5 input: "); scanf_s("%d", &val);
		if (val >= 1 && val <= 5)
			tf = 0;
	}
	printf("val: %d\n", val);*/

	/*int val = 0;
	int sum = 0;

	while (val < 10 || val > 20) {
		printf("Input a number 10-20: "); scanf_s("%d", &val);
		for (int i = 0; i < val; i++) {
			sum += i;
		}
	}
	printf("\nThe sum of the numbers 1 - %d = %d\n", val, sum);*/

	/*int data = 0, sum = 0;

	do {
		printf("Input a number (Exit: 0): "); scanf_s("%d", &data);
		sum += data;
	} while (data != 0);
	puts("");
	printf("Sum of all the inputs : %d\n", sum);*/

	/*int line = 1;

	while (line <= 3) {
		printf("%d line: ", line);

		int no = 1;
		while (no <= 5) {
			printf("%d ", no);
			no++;
		}
		puts("");
		line++;
	}*/

	int fillercode;

	/*int val = 0;
	while (val < 10) {
		val++;
		if (val % 3 == 0) {
			puts("jump!!");
			continue;
		}
		printf("%d\n", val);
	}*/

	for (int out = 1; out <= 3; out++) {
		printf("%dÈ¸Àü: ", out);
		for (int in = 1; in <= 10; in++) {
			printf("%d ", in);
			if (in == 5)
				break;
		}
		puts("");
	}
}