#include <stdio.h>

int main() {
	/*
	(변수) Variable names:
	- Can only contain letters, numbers, and underscore
	-
	-
	- name and Name are different (caps sensitive)
	- No spaces so can be differentiated by an _ or a capital letters
	 1. userRing1
	 2. user_ring1
	- Names cannot be repeated (there cannot be an int a and double a)

	int		: 4 bytes
	double	: 8 bytes
	char	: 1 byte
	*/

	//10 is inputed into memory three times
	/*printf("Int : %d\n", 10);
	printf("Int : %d\n", 10);
	printf("Int : %d\n", 10);*/

	//int a = 10; //a is inputted into memory once but is pointed to three times

	//printf("Int : %d\n", a);
	//printf("Int : %d\n", a);
	//printf("Int : %d\n", a);

	//int a; //declare variable
	//a = 0; //define variable
	//printf("a : %d\n", a);
	//a = 10; //variables can be changed at any time
	//printf("a : %d\n", a);

	/*int age = 34;
	printf("Age is %d\n", age);

	double pi = 3.14;
	printf("Pi : %.2f\n", pi);

	char area = 'A';
	printf("%c Area\n", area);*/

	//char hi[10] = "hello"; //array named hi with 10 spaces 0-9
	//printf("%s\n", hi);

	//hi = "good day"; //error: neeed a variable type

	//int data = 1;
	//double data = 1.0; //error: same variable name

	/*int a1, a2, a3;
	a1 = 10, a2 = 20, a3 = 30;
	printf("%d %d %d\n", a1, a2, a3);*/

	/*int a = 10, b = 20, c = 30;
	printf("%d %d %d\n", a, b, c);*/

	/*int a = 10, b = 20;
	double c = 3.33, d = 4.44, e = 123.45;
	char f = 'e', g[10] = "test";*/

	/* 
	Data Trasnformations:
	1. = 
	2. type conversion
	3. type casting
	*/

	/*int a;
	double b= 2.5;
	a = b;
	printf("a : %d\n", a);
	double c = a;
	printf("c : %.1f\n", c);*/

	//printf("1) 5 / 2 = %d\n", 5 / 2);		//int/ int = int
	//printf("2) 5 / 2.0 = %.1f\n", 5 / 2.0); //int / double = double
	//printf("3) 5.0 / 2 = %.1f\n", 5.0 / 2); //double / int= double]

	/*int a = 5, b = 2;
	printf("1) 5 / 2 = %d\n", a / b);
	printf("2) 5 / (double)2 = %.1f\n", a / (double)b);
	printf("3) 5 / 2 = %d\n", a / b);*/

	//char a[10] = "세종대왕"; //does not work

	//char ca = 'A';
	//printf("ca : %c, %d\n", ca, ca); //A in ASCII is 65 so 65 is printed for the number

	//int va = 97;
	//printf("va : %d, %c\n", va, va); //opposite works as well, lowercase is always 32 larger than uppercase

	//char na = va - 32;
	//printf("na : %c, %d\n", na, na);
	int random;
	//int sa = na + 1;
	//printf("sa : %d, %c", sa, sa);

	/*int a = 5;
	double b = 2.0;
	printf("5 / 2.0 = %.1f\n\n", a / b);
	printf("a\t: %d byte\nb\t: %d byte\na / b\t: %d byte \n",
	sizeof(a), sizeof(b), sizeof(a / b));*/

	/*int a = 10;
	printf("a : %d\n", a);
	printf("a address: %p\n", &a);*/


}