template <typename T> void InsertionSort(T* array, int c)
{
	for (int i = 0; i < c; i++) {
		int key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
		

}
//template void InsertionSort<int>(int[], int);
//template void InsertionSort<double>(double[], int);