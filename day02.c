#include <stdio.h>

int main() {
	/*
		\" : to print "
		\\ : to print \
	*/

	/*printf("\"you miss 100%% of the shots you dont take\" - wayne gretsky \n");
	printf("\\20,000\n");
	printf("$20.00");*/

	/*
	all used in printf	
	%d : take next argument as int
	%f : take next argument as double/float
	%c : take next argument as single character using single quotes
	%s : take next argument as string
	*/

	//%d
	/*printf("10 + 10 = 20\n");
	printf("%d + %d = %d\n", 10, 10, 20);*/

	/*printf("the temperature today is 32 degrees celcius.");
	printf("the temperature today is %d degrees celcius.", 32);*/

	//printf("%d + %d = 20\n", 10, 10, 20); //too many inputs
	//printf("%d + %d = %d\n", 10, 10);//not enough inputs, last input not shown
	//too many of these and the computer will bluescreen because it eats ram

	//printf("%d + %d = %d\n", 10, 10, 10 + 10);

	//%f - always shows 6 decimal places
	//printf("%f + %f =  %f", 1.2, 2.4, 1.2+2.4);

	//between % and f place a .number to print to that decimal place, rounds does not truncate, cannot round .5 up and rounds .6 up
	/*printf("%f + %f =  %f\n", 1.222, 2.4, 1.222+2.4);
	printf("%.1f + %.1f =  %.1f\n", 1.222, 2.4, 1.222 + 2.4);
	printf("%.2f + %.2f =  %.2f\n", 1.222, 2.4, 1.222 + 2.4);
	printf("%.2f + %.2f =  %.2f\n", 5.555, 6.6666, 5.555 + 6.6666);*/

	//%c
	//printf("%c %c\n", 's', 'g'); //cannot use double quotes
	//printf("%c %c\n", 'test', '°¡'); //can only take single characters, korean is not a single character

	//%s
	//printf("%s %s\n", "test", "°¡");
	//printf("%s\n", "g");
	//printf("%s\n", 'g'); //error

	//printf("%d %.2f %c %s\n", 10, 1.123, 's', "test");

	//printf("!%d!%d!\n", 123, 123);
	//printf("!%5d!%5d!\n", 1234567, 123); //the 5 creates a 5 width space for the %d, theres 5 spaces between !     !
	//if the number is bigger than the provided space whole number is printed, if number is smaller then white spaces are created accordingly

	//printf("!%5d!%-5d!\n",123,123);
	//printf("!%10s!%-10s!\n","test", "word"); //no - creates left space, - creates right space

	//printf("!%10.2f!\n",123.45678);

	/*printf("Amount\t:$%10d\nTax\t:$%10d\nTotal\t:$%10d\n",
		20000, 2000, 20000 + 2000);*/

	printf("Name\t: %s\nAge\t: %d\nGender\t: %c\nAddress\t: %s\n",
		"Andrew Bae", 16, 'M', "Aurora,IL");

	return 0;
}