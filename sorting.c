#include <stdio.h>
#include <stdlib.h>

int bubble_perm(int* arr, int size)
{
	int count = 0;
	int temp;

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				count++;
			}
		}
	}
	return count;
}

int selection_perm(int* arr, int size)
{
	int temp;
	int count = 0;

	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j <size; j++) {
			if (arr[j] > arr[i]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
				count++;
			}
		}
	}

	return count;
}


int main()
{
	int bub_arr[20] = {5, 20, 3, 12, 8, 56, 98, 34, 27, 48, 3, 36, 2, 49, 99, 15, 11, 58, 76, 1};
	int sel_arr[20] = {5, 20, 3, 12, 8, 56, 98, 34, 27, 48, 3, 36, 2, 49, 99, 15, 11, 58, 76, 1}; 
	int perm1, perm2;

	// В случае большого кол-ва элементов массива; заполнение массива случайными числами
	/*printf("\nThe array before bubble sort:\n");
	for (int i = 0; i < size_arr; i++) {
		bub_arr[i] = rand();
		printf("bub_arr[%d] = %d\n", i, bub_arr[i]);
	}

	printf("\nThe array before selectoin sort:\n");
	for (int i = 0; i < size_arr; i++) {
		sel_arr[i] = rand();
		printf("sel_arr[%d] = %d\n", i, sel_arr[i]);
	}*/
	
	printf("\nThe array before sort:\n");
	for (int i = 0; i < 20; i++) {
		printf("bub_arr[%d] = %d\n", i, bub_arr[i]);
	}

	perm1 = bubble_perm(bub_arr, 20);
	perm2 = selection_perm(sel_arr, 20);

	printf("\nNumber of permutations in bubble sort: %d", perm1);
	printf("\nNumber of permutations in selection sort: %d\n", perm2);

	printf("\nThe array after bubble sort:\n");
	for (int i = 0; i < 20; i++) {
		printf("bub_arr[%d] = %d\n", i, bub_arr[i]);
	}

	printf("\nThe array after selection sort:\n");
	for (int i = 0; i < 20; i++) {
		printf("sel_arr[%d] = %d\n", i, sel_arr[i]);
	}

	return 0;
}