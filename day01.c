#include <stdio.h>

/*
	#include: use info from a differenthaeder file
	stdio.h: basic header file (standard input/output)
*/

// ctrl + k + u : remove line comment shortcut
// ctrl + k + c : line comment

/*
" " : for strings
' ' : for single characters
*/

//printf prints on a single line like System.out.print()
//\n is backslash n

/*
Escape sequences:
\n : new line
\t : goes to new tab (each tab is 8 spaces, each character is 2 spaces, numbers are 1 space)
\b : cursor pull to one space to the left and overwrite (lines 40 and 41)
\r : cursor goes to first space and rewrites everthing from there (lines 43 and 44)
*/

int main() { //main method
	/*printf("Hello World\n");
	printf("second printf\n");

	printf("123456789\n\n");
	printf("1234\t56\t789\n\n");
	printf("1234567\t8\t9\n\n");
	printf("12345678\t9\n\n");

	printf("Name\t\t: Andrew Bae\n");
	printf("Age\t\t: 16\n");
	printf("Residence\t: Aurora, IL\n");*/

	/*printf("12345\n");
	printf("12\b345\n");8*/

	printf("123456789\n");
	printf("12345\r6789\n");
	return 0;
}