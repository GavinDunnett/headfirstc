// 3cardmonte.c

#include <stdio.h>

int main()
{
	char* cards = "JQK";
	char a_card = cards[2];
	cards[2] = cards[1];
	puts(cards);
	return 0;
}