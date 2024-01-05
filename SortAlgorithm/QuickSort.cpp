#include "QuickSort.h"

QuickSort::QuickSort()
{
}

void QuickSort::swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void QuickSort::quickSortIncrease(vector<int> &arr, int left, int right)
{

	if (arr.size() == 0) {
		return; 
	}

	if (left >= right) {
		return;
	}

	int middle = (left + right) / 2;
	int pivot = arr[middle];
	int i = left;
	int j = right;


	while (i <= j) {
		while (arr[i] < pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		if (i <= j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}

	if (left < j) {
		quickSortIncrease(arr, left, j);
	}

	if (right > i) {
		quickSortIncrease(arr, i, right);
	}
}



