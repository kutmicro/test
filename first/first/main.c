#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>
#include "add.h"

int main(void) {
	int a = 3;
	int b = 6;
	float c = 5.2;
	float d = 10.3;

	printf("%d %f\n", add_int(a, b), add_float(c, d));
	printf("Hello World!\n");

	getch();

	return 0;
}