#include <stdio.h>

int main() {
	//int ar2[3] = { 1,2,3 }; //array size of 3]

	//ar2 = {4,5,6} //error code: cannot change multiple elements of an array at once

	//printf("ar2[0] : %d\nar2[1] : %d\nar2[2] : %d\n", ar2[0], ar2[1], ar2[2]);

	//int ar3[] = { 1,2,3 }; //array w no set size
	//printf("ar3[0] : %d\nar3[1] : %d\nar3[2] : %d\n", ar3[0], ar3[1], ar3[2]);
	//puts("");
	//printf("ar3 size: %d byte\n", sizeof(ar3));
	//printf("ar3 number of elements: %d\n", sizeof(ar3) / sizeof(int));

	/*int ar4[3] = { 1 };

	printf("ar4[0] : %d\nar4[1] : %d\nar4[2] : %d\n", ar4[0], ar4[1], ar4[2]);
	printf("ar4 size: %d byte\n", sizeof(ar4));
	printf("ar4 number of elements: %d\n", sizeof(ar4) / sizeof(int));*/

	/*int ar5[3] = {0}; //most frequently used empty array method
	printf("ar5[0] : %d\nar5[1] : %d\nar5[2] : %d\n", ar5[0], ar5[1], ar5[2]);
	printf("ar5 size: %d byte\n", sizeof(ar5));
	printf("ar5 number of elements: %d\n", sizeof(ar5) / sizeof(int));*/

	/*int size = 3;
	int ar6[size]; //error: size of an array can only be static*/

	//can use a variable name to point to an array element
	/*int ar7[3] = {0};
	int idx = 2;

	ar7[0] = 10;
	ar7[1] = 20;
	ar7[idx] = 30;

	printf("ar7[%d] : %d\nar7[%d] : %d\nar7[%d] : %d\n", 0, ar7[0], 1, ar7[1], idx, ar7[idx]);
	puts("");
	printf("idx address: %p\n", &idx); //%p is for pointer
	printf("ar7 start address: %p\n", ar7);*/
	
	/*int ar8[5] = { 10,20,30,40,50 };
	int ar8Len = sizeof(ar8) / sizeof(int);

	for (int i = 0; i < ar8Len; i++) {
		printf("ar8[%d] : %d\n", i, ar8[i]);
	}*/

	//exercise1
	/*int ar[5] = { 2,7,5,1,8 };
	int length = sizeof(ar) / sizeof(int);
	int sum = 0;

	for (int i = 0; i < length; i++) {
		sum += ar[i];
	}

	printf("Sum: %d\n", sum);*/

	//exercise 2
	/*int ar[] = { 8,9,1,5,7,4,2 };
	int len = sizeof(ar) / sizeof(int);
	int num = 0;

	for (int i = 0; i <= len; i++) {
		if (ar[i] >= 3 && ar[i] <= 8) {
			printf("%d ", ar[i]);
			num++;
		}
	}
	printf("\nNumber of elements printed: %d\n", num);*/

	//exercise 3
	/*int ar[] = { 3,7,2,11,9,5,10 };
	int len = sizeof(ar) / sizeof(int);
	int largest = 0;

	for (int i = 0; i < len; i++) {
		printf("%d ", ar[i]);
		if (ar[i] > largest) {
			largest = ar[i];
		}
	}

	printf("Largest: %d", largest);*/

	int fillercode;

	//exercise4
	/*int base[] = { 1,2,3,4,5 };
	int newAr[5];
	int num, len = sizeof(base)/sizeof(int);

	printf("Input a number: "); scanf_s("%d", &num);

	for (int i = 0; i < len; i++) {
		newAr[i] = base[i]+num;
		printf("%d ", base[i]);
	}
	puts("");

	for (int i = 0; i < len; i++) {
		printf("%d ", newAr[i]);
	}*/

	//exercise 5
	int base[5] = { 1,2,3,4,5 };
	int reverse[5];
	int len = sizeof(base) / sizeof(int);

	for (int i = len-1; i < 0; i--) {
		reverse[i] = base[i];
	}

	for (int i = 0; i < len; i++) {
		printf("%d ", reverse[i]);
	}
}