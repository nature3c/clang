#include <stdio.h>

//int a = 10; //global variable
//
//int main() {
//	int b = 20;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("int a address : %p\n\n", &a);
//	// ^ v uses global a
//	a = 1;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("int a address : %p\n\n", &a);
//
//	int a = 100; //local variable
//	printf("%d + %d = %d\n", a, b, a + b); //uses local a
//	printf("int a address : %p\n", &a);
//}

//void Hi() {
//	puts("Hello!");
//}
//
//int addTen(int su) {
//	su += 10;
//	return su;
//}
//
//double Pi();
//
//char sendRe(char ch);
//
//int inputInt() {
//	int data;
//	printf("Input a number: "); scanf_s("%d", &data);
//	return data;
//}
//
//int add(int a, int b) {
//	return a + b;
//}
//
//void total(int su) {
//	int all = 0;
//	for (int i = 0; i <= su; i++) {
//		all += i;
//	}
//	printf("1 ~ %d sum : %d\n", su, all);
//}
//
//int main() {
//	//Hi();
//
//	/*int a = 1, b;
//	b = addTen(a);
//	printf("addTen method result: %d\n", b);
//	printf("addTen method result: %d\n", addTen(a));
//	puts("Done");*/
//
//	/*double a = Pi();
//	printf("Pi : %.2f\n", a);*/
//
//	/*char alpha = 'a';
//	printf("Char : %c\n", sendRe(alpha));*/
//
//	int su1 = inputInt();
//	int su2 = inputInt();
//	int sum = add(su1, su2);
//	printf("%d + %d = %d\n",su1,su2, sum);
//	total(sum);
//}
//
//char sendRe(char ch) {
//	printf("Entered char : %c\n", ch);
//	return ch + 1;
//}
//
//double Pi() {
//	return 3.141592;
//}

//exercise 1
int inputInt();
int inputRange(int a, int b);

int main() {
	int val = inputRange(1, 10);
	printf("Inputted Number : %d\n", val);
}

int inputInt() {
	int data;
	printf("Input a number: "); scanf_s("%d", &data);
	return data;
}

int inputRange(int a, int b) {
	int num = inputInt();

	while (1==1) {
		if ((num <= a && num >= b) || (num >= a && num <= b)) {
				return num;
				break;
		}
		else {
			printf("Outside of range!\n");
			num = inputInt();
		}
	}
	
}