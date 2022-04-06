// larger.c

#include <stdio.h>

int larger(int a, int b) {
	return a > b ?  a : b;
}

int main() {
	int greatest = larger(9000, 1000);
	printf("%i is the greatest\n", greatest);
	return 0;
}