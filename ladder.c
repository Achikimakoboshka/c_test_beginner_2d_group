#include <stdio.h>

int main () {
	
	int size = 5;
	
	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			if (y <= x) {
				printf ("1");
			}
		}
		printf ("\n");
	}
	
	return 0;
}