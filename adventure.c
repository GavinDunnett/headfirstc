// adventure.c

#include <stdio.h>

void go_southeast(int *lat, int *lon)
{
	++*lat;
	--*lon;
}

int main()
{
	int latitude = 32;
	int longitude = 64;

	go_southeast(&latitude, &longitude);
	printf("latitude = %i, longitude = %i\n", latitude, longitude);
	return 0;
}
