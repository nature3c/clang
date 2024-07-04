#include <stdio.h>

int main() {
	/*int base[5] = { 1,2,3,4,5 };
	int rev[5];
	int len = sizeof(base) / sizeof(int);

	printf("Base: ");

	for (int i = 0; i < len; i++) {
		printf("%d ", base[i]);
	}

	puts("");

	for (int j = 0; j < len; j++) {
		rev[(len - 1) - j] = base[j];
	}

	printf("Reverse: ");

	for (int i = 0; i < len; i++) {
		printf("%d ", rev[i]);
	}*/

	//int ar1[2][3];
	//ar1[0][1] = 7;

	//int ar2[2][3] = { 1,2,3,4,5,6 };
	//same things
	//int ar3[2][3] = { {1,2,3},{4,5,6} };

	//int ar4_1[2][3] = { 1,2,4 };
	//1 2 4
	//0 0 0
	//int ar4_2[2][3] = { {1,2},{4} };
	//1 2 0
	//4 0 0
	
	//int ar5_1[][3] = { 1,2,3,4,5,6 };
	//int ar5_2[2][] = { 1,2,3,4,5,6 }; //column index cannot be ommitted
	//int ar5_3[][] = { 1,2,3,4,5,6 };  // ^

	//int ar6[][3] = { {1,2},{4} };

	//printf("ar6 address: %p\n", ar6);
	//printf("ar6[0] address: %p\n", ar6[0]);
	//printf("ar6[1] address: %p\n", ar6[1]);
	//puts("");
	//printf("ar6 overall size: %d bytes\n", sizeof(ar6));
	//printf("ar6 one element size: %d bytes\n", sizeof(ar6[0]));
	//puts("");

	//int ar6Row = sizeof(ar6) / sizeof(ar6[0]); // number of rows
	//int ar6Col = sizeof(ar6[0]) / sizeof(int); //number of columns

	//for (int i = 0; i < ar6Row; i++) {
	//	printf("ar6[%d] row: ", i);
	//	for (int j = 0; j < ar6Col; j++) {
	//		printf("%d ", ar6[i][j]);
	//	}
	//	puts("");
	//}

	//exercise 1
	/*int arr[9][9];
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(int);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			arr[i][j] = (i+1) * (j+1);
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	puts("");*/

	//exercise 2
	int point[][5] = { {5,2,8,7,1},{6,4,9,5,3} };
	int allSum = 0, rowSum[2] = { 0 };
	int row = sizeof(point) / sizeof(point[0]);
	int col = sizeof(point[0]) / sizeof(int);
	int row2 = sizeof(rowSum) / sizeof(rowSum[0]);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			allSum += point[i][j];
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			rowSum[i] += point[i][j];
		}
	}

	printf("The sum of the numbers in the array is: %d\n", allSum);

	printf("The sum of row 1 is: %d\n", rowSum[0]);

	printf("The sum of row 2 is: %d\n", rowSum[1]);
}