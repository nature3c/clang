#include <stdio.h>

int main() {
	/*double a = 8.888, e = 3.24 + 5.24;
	char b = 'd', d[] = "이순신", g[] = "ㄱ", h[] = "가나다라abcd",
		i[] = "abcd", j[] = "010-1234-568";
	int c = 30, f = 10 + 20;

	printf("%.3f\n %c\n %d\n %s\n %.2f\n %d\n %s\n %s\n %s\n %s\n",
		a,b,c,d,e,f,g,h,i,j);*/

	/*int a = 10, b = 3;
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);*/

	/*int c, d;
	c = d = 5;

	c += 1;
	printf("c += 1 : % d\n", c);
	c -= 1;
	printf("c -= 1 : %d\n", c);
	c *= d;
	printf("c *=  d : %d\n", c);
	c /= d;
	printf("c /=  d : %d\n", c);
	c %= d;
	printf("c %%=  d : %d\n", c);*/

	/*double e = 3.0, f = 3.1;

	printf("e < f : %d\n", e < f);
	printf("e > f : %d\n", e > f);
	printf("e <= f : %d\n", e <= f);
	printf("e >= f : %d\n", e >= f);
	printf("e == f : %d\n", e == f);
	printf("e != f : %d\n", e != f);*/

	// || (or) && (and) ! (not)
	/*int g = 10, h = 20;

	printf("g != 10 || h < 20: %d\n", g != 10 || h < 20);
	printf("g != 10 || h <= 20: %d\n", g != 10 || h <= 20);
	printf("g == 10 || h < 20: %d\n", g == 10 || h < 20);
	printf("g == 10 || h <= 20: %d\n", g == 10 || h <= 20);*/

	/*printf("g != 10 && h < 20: %d\n", g != 10 && h < 20);
	printf("g != 10 && h <= 20: %d\n", g != 10 && h <+ 20);
	printf("g == 10 && h < 20: %d\n", g == 10 && h < 20);
	printf("g == 10 && h <+ 20: %d\n", g == 10 && h <= 20);*/

	/*printf("!(g != 10) : %d\n", !(g != 10));
	printf("!(g == 10) : %d\n", !(g == 10));*/

	/* 
	++--
	++n : ++ before n function
	n++ : =+ after n function
	--n : -- before n function
	n-- : --after n function
	*/

	/*int i = 5, j = 0;

	printf("i : %d\n", i);

	j = ++i * 2; // add 1 to i first
	printf("++i * 2 >> i : %d, j : %d\n", i, j);
	j = i++ * 2; //multiply i by 2 first then add 1
	printf("i++ * 2 >> i : %d, j : %d\n", i, j);
	j = --i * 2; //subtract 1 from i first
	printf("--i * 2 >> i : %d, j : %d\n", i, j);
	j = i-- * 2; //multiply i by 2 first then subtract 1
	printf("i-- * 2 >> i : %d, j : %d\n", i, j);*/

	//scanf("data type(%d,%f,%s,%d)",&name) : input function similar to Scanner in Java
	//needs a variable type and a variable name along with & to store the data
	//scanf_s("data_type(%d,%f,%s,%d)",&name,data_size) : use this
	//int is 4 bytes, float is 8 bytes, alphanumeric characters are 1 byte

	int hasd; //filler code
	
	/*int su;
	printf("Input a number: ");
	scanf_s("%d", &su);
	printf("\nThe inputted number su: %d\n", su);*/

	//double f1;
	//float f2;
	//printf("Input a double: ");
	//scanf_s("%lf", &f1); //lf, l as in low
	//printf("\nf1 : %f\n", f1);

	//printf("Input a second double: ");
	//scanf_s("%f", &f2);
	//printf("\nf2 : %f", f2);

	/*
	float is 4 bytes
	double is 8 bytes
	%lf is a longfloat thats equivalent to a double
	*/

	//char ch1, ch2, ch3;

	//printf("Input Letter1: ");
	//scanf_s("%c", &ch1);
	//printf("Letter1: %c\n", ch1);

	//while (getchar() != '\n'); //without this the code breaks because hitting enter after inputting the letter, the enters space is inputted as the second char
	//						   //to fix that use the code above to remove the enter space
	//printf("Input Letter2 : ");
	//scanf_s("%c", &ch2);
	//printf("Letter2: %c\n", ch2);

	//while (getchar() != '\n');

	//printf("Input Letter3: ");
	//ch3 = getchar();
	//printf("Letter3: ");
	//putchar(ch3);
	//printf("\n");

	/*char st1[10], st2[10];
	printf("Enter a word: ");
	scanf_s("%s", st1, sizeof(st1));
	printf("%s\n", st1);

	while (getchar() != '\n');

	printf("Input word2: ");
	gets_s(st2, sizeof(st2));
	printf("Word2: ");
	puts(st2);*/

	//gets automatically removes the enter
}