// 3cardmonte.c

#include <stdio.h>

int main()
{
	char temp = ' ';
	char cards[] = "JQK";
	char a_card = cards[2];
	temp = cards[2];
	cards[2] = cards[1];
	cards[1] = temp;
	puts(cards);
	return 0;
}