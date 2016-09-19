#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>

int main(void) {
	int a = 5;
	int b = 10;
	float c = 5.2;
	float d = 10.3;

	printf("%d %f\n", add_int(a, b), add_float(c, d));

	getch();

	return 0;
}