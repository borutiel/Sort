#include "OptimizedBubbleSort.h"
template <typename T>  void OptimizedBubbleSort(T* array, int c)
{
	bool flag;
	for (int i = 0; i < c - 1; i++) {
		flag = false;
		for (int j = 0; j < c - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				int key = array[j];
				array[j] = array[j + 1];
				array[j + 1] = key;
				flag = true;
			}
		}
		if (!flag) {
			break;
		}
	}
}