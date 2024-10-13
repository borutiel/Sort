#include "ExchangeSort.h"
template <typename T> void ExchangeSort(T* array, int c) 
{
	for (int i = 0; i < c - 1; i++) {
		for (int j = i + 1; j < c; j++) {
			if (array[i] > array[j]) {
				int key = array[i];
				array[i] = array[j];
				array[j] = key;
			}
		}
	}
}