#include "SelectionSort.h"
template <typename T> void SelectionSort(T* array, int c) 
{
		for (int i = 0; i < c - 1; ++i) {
			int min = i;
			for (int j = i + 1; j < c; ++j) {
				if (array[j] < array[min]) {
					min = j;
				}
			}
			int key = array[i];
			array[i] = array[min];
			array[min] = key;
		}
}