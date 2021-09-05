void InsertSort1(int* arr, int arrSize) {
	int i = 1;
	for (i = 1; i < arrSize; ++i) {
		if (arr[i] < arr[i - 1]) {
			int temp = arr[i];
			int j = 0;
			for (j = i - 1; j >= 0 && arr[j] > temp; --j) {
				arr[j+1] = arr[j];
			}
			arr[j+1] = temp;
		}
	}
}//÷±Ω”≤Â»Î≈≈–Ú

void InsertSort2(int* arr, int arrSize) {
	int i = 0;
	for (i = 1; i < arrSize; ++i) {
		if (arr[i] < arr[i - 1]) {
			int temp = arr[i];
			int left = 0, right = i - 1;
			int mid = 0;
			while (left <= right) {
				mid = (left + right) / 2;
				if (arr[mid] > temp)
					right = mid - 1;
				else if (arr[mid] < temp)
					left = mid + 1;
				else
					break;
			}
			int j = 0;
			for (j = i - 1; j >= mid; --j)
				arr[j + 1] = arr[j];
			arr[j + 1] = temp;
		}
	}
}//’€∞Î≤Â»Î≈≈–Ú

void bubbleSort(int* arr, int arrSize) {
	int i, j;
	for (i = 0; i < arrSize - 1; ++i) {
		for (j = arrSize - 1; j > i; --j) {
			if (arr[j] < arr[j - 1]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}//√∞≈›≈≈–Ú