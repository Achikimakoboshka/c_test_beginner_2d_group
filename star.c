int star(int a, int b, int c, int d) {

	int arr[4] = { a, b, c, d };
	int temp;

	for (int i = 0; i < 4 - 1; i++) {
		for (int j = 0; j < 4 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}


	return arr[2];
}