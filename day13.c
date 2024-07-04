#include <stdio.h>
#include <string.h>

int main() {
	/*char wa[10] = "wordA";
	printf("wa : %s\n", wa);*/

	/*char wb[] = "wordB";
	printf("wb : %s\n", wb);
	printf("wb size: %d byte\n", sizeof(wb));*/
	// | w | o | r | d | B | \0 | 6 bytes

	//char wc[] = "Good Luck!";
	//printf("wc : %s\n", wc);
	//printf("wc size : %d bytes\n", sizeof(wc));
	//puts("");

	//wc[3] = '\0';
	//printf("wc : %s\n", wc); //prints up to NULL 
	//printf("wc size : %d byte\n", sizeof(wc));
	//puts("");

	//for (int i = 0; i < sizeof(wc); i++) {
	//	printf("%d index : (%c)\n", i, wc[i]);
	//}

	/*
		strlen()
		 string.h method
		 reads up to NULL and returns string length

	*/

	/*char text[50] = "Have a nice day";
	printf("text : %s\n", text);
	printf("text total length : %d\n", sizeof(text));
	printf("text length : %d\n", strlen(text));
	puts("");

	int cnt = 0;
	for (int i = 0; i < strlen(text); i++) {
		putchar(text[i]);
		cnt++;
	}
	printf(" >> total %d characters", cnt);*/

	/*
		strcpy()
		 copies str2's datauinto str1

			strcpy(str1, str2)
		strcpy_s()
		 for avoid overflow errors has a function that controls size

			strcopy_s(str1, size, str2)
	*/

	//doesnt work for some reason???
	/*char dataA[10], dataB = "2024 C";
	strcpy_s(dataA, sizeof(dataA), dataB);
	printf("dataA : %s\n", dataA);*/

	/*char dataC[10];
	strcpy_s(dataC, sizeof(dataC), "copy test");
	printf("dataC : %s\n", dataC);*/

	/*
		strcat()
		 puts str2 behind str1

			strcat(str1,str2)
		
		strcat_s()
		 if less than specified size then puts str2 behind str1
		 strcat_s(str1, size, str2)
	*/

	/*char base[10] = "abc";
	char stn[] = "def";
	printf("base : %s\n", base);
	printf("stn : %s\n", stn);
	puts("");

	strcat_s(base, sizeof(base), stn);
	printf("new base: %s\n", base);*/

	/*
		strcmp()
		 checks if two strings are the same
		 if completely the same returns 0, else return 1 or -1
		  > returns -1 if str1 ASCII is before
		    returns 1 if str2 ASCII is before

			strcmp(str1, str2)
	*/

	int fillercode;

	/*char stnA[10] = "abc";
	char stnB[5] = "def";
	char stnC[] = "abc";

	printf("stnA : %s\nstnB : %s\nstnC : %s\n", stnA, stnB, stnC);
	printf("stnA, stnB comparsion : %d\n", strcmp(stnA, stnB));
	printf("stnA, stnC comparsion : %d\n", strcmp(stnA, stnC));
	printf("stnB, stnC comparsion : %d\n", strcmp(stnB, stnC));*/


	//exercise 1
	/*char str1[20] = "", str2[20] = "";

	printf("Input first string: "); gets_s(str1, sizeof(str1));
	printf("Input second string: "); gets_s(str2, sizeof(str2));
	puts("");

	if (strcmp(str1, str2) == 1) {
		printf("%s is before", str2);
	}
	else if (strcmp(str1, str2) == -1) {
		printf("%s is before", str1);
	}
	else {
		printf("%s and %s are the same", str1, str2);
	}
	puts("");*/

	//exercise 2
	char text[20] = "";
	char letter;
	int count = 0;

	printf("Put a space at the end of the text\n");
	printf("Input the text: "); gets_s(text, sizeof(text));
	printf("Input a letter: "); letter = getchar();
	puts("");

	for (int i = 0; i < strlen(text) - 1; i++) {
		if ( text[i] == letter)
			count++;
	}

	printf("%c shows up in %s, %d time(s)", letter, text, count);
	puts("");
	
}