/*
	rand()
	 stdlib.h 
	 0 ~ 32767
	 same values are continuously repeated in order
	 
	srand()
	 stdlib.h
	 assigns a different value to rand()
	 changes rand()

	time()
	 time.h
	 started 1/1/1970 at 12am
	  time(NULL)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	//rand() same values repeated
	/*for (int i = 1; i <= 5; i++) {
		int val = rand();
		printf("%d iteration : %d\n", i, val);
	}*/

	//using srand() the random number changes
	/*int su1 = rand();
	printf("su1 : %d\n", su1);

	srand(2);
	int su2 = rand();
	printf("su2 : %d\n", su2);*/

	//use srand() and time() to change the value inside of srand() every few seconds
	/*srand(time(NULL));

	for (int i = 1; i <= 5; i++) {
		int val = rand();
		printf("%d iteration : %d\n", i, val);
	}*/

	//using math to manipulate the random ints, do: rand() % range + min
	//srand(time(NULL));
	//for (int i = 1; i <= 5; i++) {
	//	//int val = rand(); //0 ~ 32767 
	//	
	//	//int val = rand() % 10; //random value 0 ~ 9

	//	int val = rand() % 10 + 1; //1 ~ 10

	//	printf("%d iteration : %d\n", i, val);
	//}

	//exercise 1: Lottery
	/*srand(time(NULL));
	int num[6];
	int len = sizeof(num) / sizeof(int);

	printf("Your lottery number is: ");

	for (int i = 0; i < len; i++) {
		int val = rand() % 45 + 1;
		num[i] = val;
		
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				i--;
				break;
			}
		}

		printf("%d ", num[i]);
	}
	puts("");*/

	//exercise 2
	int on = 1, correct = 0, difficulty = 10;
	int input;

	srand(time(NULL));

	while (on != 0) {
		for (int i = 0; i < 3; i++) {
			int num1 = rand() % difficulty + 1;
			int num2 = rand() % difficulty + 1;
			printf("%d + %d = ",num1,num2); scanf_s("%d", &input);
			if (input == num1 + num2) {
				printf("Correct!\n");
				correct++;
			}
			else {
				printf("Incorect!\n");
			}
		}

		double result = (double)correct / 3 * 100;
		printf("\nYou got %.2f%% correct\n", result);
		correct = 0;

		printf("Would you like to play again (1 = yes, 0 = no): "); scanf_s("%d", &input);
		if (input == 1) {
			difficulty *= 10;
		}
		else if (input == 0) {
			on = 0;
		}

	}

}

