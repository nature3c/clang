#include <stdio.h>

int main() {
	/*int sc1, sc2, sc3, sum;
	double avg;
	char grade;

	printf("Input 3 Grades: "); scanf_s("%d %d %d", &sc1, &sc2, &sc3);
	sum = sc1 + sc2 + sc3;
	avg = sum / 3.0;

	if (avg > 100 || avg < 0) {
		puts("Invalid grade");
		grade = '?';
	}
	else if (avg >= 90) {
		grade = 'A';
	}
	else if (avg >= 80) {
		grade = 'B';
	}
	else if (avg >= 70) {
		grade = 'C';
	}
	else if (avg >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}
	printf("Sum: %d\nAverage: %2f\nGrade: %c", sum, avg, grade);*/

	//int su;
	//printf("Choose a number 1-3: "); scanf_s("%d", &su);
	//puts("");

	//switch (su) {
	//case 1:
	//	puts("1 - one");
	//	break;
	//case 2:
	//	puts("2 - two");
	//	break;
	//case 3:
	//	puts("3 - three");
	//	break;
	//default:
	//	puts("Invalid input");
	//	//doesn't need a break because its at the end
	//}

	int fillercode;

	/*char lang;
	printf("Clang: C, Java; J\nChoose >>> "); lang = getchar();
	puts("");

	switch (lang) {
	case 'C':
	case 'c':
		puts("Clang selected");
		break;
	case 'J':
	case 'j':
		puts("Java selected");
		break;
	default:
		puts("Innvalid Input");
	}*/

	//exercise 1
	/*int month;

	printf("Enter the month: "); scanf_s("%d", &month);
	puts("");

	switch (month) {
	case 1:
		puts("January: 31 days");
		break;
	case 2:
		puts("February: 28 or 29 days");
		break;
	case 3:
		puts("March: 31 days");
		break;
	case 4:
		puts("April: 30 days");
		break;
	case 5:
		puts("May: 31 days");
		break;
	case 6:
		puts("June: 30 days");
		break;
	case 7:
		puts("July: 31 days");
		break;
	case 8:
		puts("August: 31 days");
		break;
	case 9:
		puts("September: 30 days");
		break;
	case 10:
		puts("October: 31 days");
		break;
	case 11:
		puts("November: 30 days");
		break;
	case 12:
		puts("December: 31 days");
		break;
	default:
		puts("Invalid input");
	}*/
	int fillercode2;
	/*while (1 == 1) {
		char sign;
		int num1, num2;
		double result;

		printf("Please input the first number: "); scanf_s("%d", &num1);
		while (getchar() != '\n');
		printf("Please input the sign (+,-,/,*,%%): "); sign = getchar();
		while (getchar() != '\n');
		printf("Input the second number: "); scanf_s("%d", &num2);
		puts("");

		switch (sign) {
		case '+':
			result = num1 + num2;
			printf("%d %c %d = %.2f\n\n", num1, sign, num2, result);
			break;
		case '-':
			result = num1 - num2;
			printf("%d %c %d = %.2f\n\n", num1, sign, num2, result);
			break;
		case '*':
			result = num1 * num2;
			printf("%d %c %d = %.2f\n\n", num1, sign, num2, result);
			break;
		case '/':
			result = (double)num1 / num2;
			printf("%d %c %d = %.2f\n\n", num1, sign, num2, result);
			break;
		case '%':
			result = num1 % num2;
			printf("%d %c %d = %.2f\n\n", num1, sign, num2, result);
			break;
		default:
			puts("Invalid input\n\n");
		}
	}*/

	//switch exercise 2
	//int sc1, sc2, sc3, sum, gr;
	//double average;
	//char grade;

	//printf("Enter three grades: "); scanf_s("%d %d %d", &sc1, &sc2, &sc3);
	//puts("");

	//sum = sc1 + sc2 + sc3;
	//average = sum / 3;
	//gr = ((int)average / 10) % 10;

	//switch (gr) {
	//case 9:
	//	grade = 'A';
	//	break;
	//case 8:
	//	grade = 'B';
	//	break;
	//case 7:
	//	grade = 'C';
	//	break;
	//case 6:
	//	grade = 'D';
	//	break;
	//default: 
	//	grade = 'F';
	//}

	//printf("Sum: %d\nAverage: %.2f\nGrade: %c\n", sum, average, grade);

	for (int i = 0; i < 6; i++) {
		printf("%d\n", i);
	}
}