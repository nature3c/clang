//#include <stdio.h>
//
//int main() {
//	/*for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (j == 3)
//				break;
//			printf("(i : %d, j : %d)\n", i, j);
//		}
//	}*/
//
//	//puts("");
//
//	//int i = 0, j = -1; //teacher
//
//	//while (i < 3) {
//	//	j = 0;
//	//	while (j < 10) {
//	//		if (j == 3) {
//	//			break;
//	//		}
//	//		printf("(i : %d, j : %d)\n", i, j);
//	//		j++;
//	//	}
//	//	i++;
//	//}
//
//	/*int i = 0, j = -1; //me
//
//	while (i < 3) {
//		while (j < 10) {
//			if (j == 2) {
//				i++;
//				j = -1;
//				break;
//			}
//			j++;
//			printf("(i : %d, j : %d)\n", i, j);
//		}
//	}*/
//
//	//int abs = 0, data;
//
//	//printf("Input a number: "); scanf_s("%d", &data);
//	//puts("");
//
//	////way #1
//	///*if (data >= 0)
//	//	abs = data;
//	//else
//	//	abs = data * -1;*/
//
//	////way #2
//	////     CONDITION  ? ifTrue : ifFalse
//	//abs = (data >= 0) ? data : data * -1;
//
//	//printf("Absolute Value: %d\n", abs);
//
//
//}

/*
	_sleep() //default
	Sleep() //when _sleep() doesnt work

	Part of Windows.h
	1 is 0.001 seconds (ex. _sleep(1000) -> 1 second delay)
*/

#include <stdio.h>
#include <Windows.h>

int main() {

	//for (int i = 1; i <= 10; i++) {
	//	printf("%d\n", i);
	//	_sleep(1000); //adds 1 seceond delay
	//}

	//for (int i = 1; i <= 10; i++) {
	//	printf("%-2d\r", i);
	//	_sleep(1000); //adds 1 seceond delay
	//}

	//exercise 2
	/*while (1 == 1) {
		for (int i = 0; i < 10; i++) {
			printf("*");
			_sleep(50);
		}
		for (int j = 0; j < 10; j++) {
			printf("\r          ");
		}
		printf("\r");
	}*/

	//teachers code
	/*char star = '*', space = ' ';
	while (1) {
		for (int cnt = 0; cnt < 10; cnt++) {
			putchar(star);
			_sleep(50);
		}
		printf("\r");
		for (int cnt = 0; cnt < 10; cnt++) {
			putchar(space);
			_sleep(50);
		}
		printf("\r");
	}*/

	//exercise 3

	//while (1) {
	//	/*printf("* * * * * * * * * * ");
	//	_sleep(200);
	//	
	//	printf("\r");
	//	
	//	printf(" * * * * * * * * * *");
	//	_sleep(200);
	//	
	//	printf("\r");*/

	//	//my way
	//	for (int i = 0; i < 10; i++) {
	//		printf("* ");
	//	}
	//	_sleep(300);
	//	printf("\r");
	//	for (int i = 0; i < 10; i++) {
	//		printf(" *");
	//	}
	//	_sleep(300);
	//	printf("\r");
	//}

	//teachers way
	//code not here
	
	int ar1[3];

	ar1[0] = 10;
	ar1[1] = 20;
	ar1[2] = 30;

	printf("ar1[0] : %d\nar1[1] : %d\nar1[2] : %d", ar1[0], ar1[1], ar1[2]);
	
}