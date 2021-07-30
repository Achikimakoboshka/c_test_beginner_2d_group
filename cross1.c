#include <stdio.h>

int main () {
	
	int size = 6;
	
	if (size % 2 != 0){ //если кол-во строк и столбцов матрицы нечетное
		for (int i = 0; i < size; i++){
			for (int j = 0; j < size; j++){
				if (i == size/2 || j == size/2){
					printf ("1");
				}
				else {
					printf ("0");
				}
			}
			printf("\n");
		}
	}
	
	if (size % 2 == 0){ // кол-во четное; крест шире, т.к. иначе он будет смещенным
		for (int i = 0; i < size; i++){
			for (int j = 0; j < size; j++){
				if (i == size/2 || j == size/2 || i == size/2 - 1 || j == size/2 - 1){
					printf ("1");
				}
				else {
					printf ("0");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}