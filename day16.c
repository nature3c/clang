//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//char inputLower();
//char randLower();
//char upperCase(char ch);
//
//int main() {
//    char data = inputLower();
//    char rData = randLower();
//    char uData = upperCase(data);
//    char ruData = upperCase(rData);
//    printf("Lowercase : %c\tUppercase : %c\nLowercase : %c\tUppercase : %c\n",
//        data, uData, rData, ruData);
//}
//
//char inputLower() {
//    char ch;
//    printf("Input a lowercase letter: "); scanf_s("%c", &ch);
//    while (1 == 1) {
//        if (ch < 'a' || ch > 'z') {
//            printf("Not a lowercase letter\n");
//            while (getchar() != '\n');
//            printf("Input a lowercase letter: "); scanf_s("%c", &ch);
//        }
//        else {
//            break;
//        }
//    }
//
//    return ch;
//}
//
//char randLower() {
//    srand(time(NULL));
//    char ch = rand() % 26 + 'a';
//
//    return ch;
//}
//
//char upperCase(char ch) {
//    return toupper(ch);
//}

//pointers
#include <stdio.h>
 
//int main() {

	/*int a = 7;
	printf("a value: %d\n", a);
	printf("a address: %p\n", &a);
	puts("");

	int* pa = &a;
	printf("pa value: %p\n", pa);
	printf("*pa value: %d\n", *pa);*/

	/*double b = 1.2;
	double* pb = &b;

	printf("b value: %.1f %.1f\n", b, *pb);
	printf("b address: %p %p \n", &b, pb);*/

	/*char c = 'A';
	char* pc = &c;

	printf("c value: %c %c\n", c, *pc);
	printf("c address: %p %p\n", &c, pc);*/

	/*int d;
	int* pd = &d;
	printf("Input a number: "); scanf_s("%d", pd);
	printf("Inputted number: %d %d\n", d, *pd);*/

	/*int e = 0;
	int* pe = &e;
	printf("Input a number: "); scanf_s("%d", &pe);
	printf("e value: %d\n", e);
	printf("e address: %p\n", &e);
	printf("pe value: %p\n", *pe);*/

	//all pointers are 8 bytes
	/*int sa; int* psa = &sa;
	printf("sa size: %d byte\npsa size: %d byte\n\n", sizeof(sa), sizeof(psa));

	double sb; double* psb = &sb;
	printf("sb size: %d byte\npsb size: %d byte\n\n", sizeof(sb), sizeof(psb));

	char sc; char* psc = &psc;
	printf("sc size: %d byte\npsc size: %d byte\n\n", sizeof(sc), sizeof(psc));*/

	//int fillercode;

	//pointer operation
	//int a; int* pa = &a;
	//printf("pa\t: %p\n", pa);
	//printf("pa + 1\t: %p\n", pa + 1);//+4 bytes
	//printf("pa + 2\t: %p\n", pa + 2);//+4 bytes
	//puts("");

	//double b;  double* pb = &b;
	//printf("pb\t: %p\n", pb);
	//printf("pb + 1\t: %p\n", pb + 1);//+8 bytes
	//printf("pb + 2\t: %p\n", pb + 2);//+8 bytes

	/*int ar[3] = { 10,20,30 }; int* par = ar;
	for (int i = 0; i < 3; i++) {
		printf("ar[%d]: %d %d %d %d\n", i, ar[i], par[i], *(ar + i), *(par + i));
	}
	puts("");

	printf("*par : %d\n", *par);
	par += 1;
	printf("*par : %d\n", *par);
	par -= 1;
	printf("*par : %d\n", *par);
	par++;
	printf("*par : %d\n", *par);
	par--;
	printf("*par : %d\n", *par);*/

	/*int a = 10, b = 20, c = 30;
	int* ar[3] = { &a,&b,&c };

	printf(" ar[1]: %p %p\n", ar[1], *(ar + 1));
	printf(" *ar[1]: %d %d\n", *ar[1], **(ar + 1));*/
//}

int valueFunc(int a, int b) {

}

int addrFunc(int* pa, int* pb) {
	*pa += 100;
	*pb += 100;
}

int main() {
	int s1 = 10, s2 = 20;
	printf("s1 : %d\t\ts2 : %d\n\n", s1, s2);
	valueFunc(s1, s2);
	printf("s1 : %d\t\ts2 : %d\n\n", s1, s2);
	addrFunc(&s1, &s2);
	printf("s1 : %d\ts2 : %d\n", s1, s2);
}