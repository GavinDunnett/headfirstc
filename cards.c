// cards.c
/* 
* This program evaluates card face values.
* It is bases on code from the book Head Fist C.
* Gavin John Dunnett
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	short int count = 0;
	short int val = 0;

	do {
	puts("Enter a card name: ");
	scanf("%2s", card_name);

	switch(card_name[0]) {
		case 'k':
		case 'q':
		case 'j':
			val = 10;
			break;
		case 'a':
			val = 11;
			break;
		case 'x': // quit program
			break;
		default:
			val = atoi(card_name);
			if (val < 1 || val > 10) {
				printf("Invalid card\n");
				continue;
			}
	}

	printf("The card's value is %i\n", val);

	if (val == 10) count++;
	else if (val >=3 && val <= 6) count--;

	printf("The count is now %i\n", count);

	} while(card_name[0] != 'x');

	return 0;
}



