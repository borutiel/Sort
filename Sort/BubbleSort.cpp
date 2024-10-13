#include "BubbleSort.h"
template <typename T> void BubbleSort(T* array, int c)
{
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < c - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				int key = array[j];
				array[j] = array[j + 1];
				array[j + 1] = key;

			}
		}
	}
}
