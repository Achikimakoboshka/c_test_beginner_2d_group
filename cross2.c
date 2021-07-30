#include <stdio.h>

int main () {
	
	int size = 5;
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				printf("1");
			} 
			if (j == size - i - 1) {
				if (j == size/2 && j == i) {
					break;
				}
				printf("1");
			}
			if (j != i && j != size - i - 1){
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}