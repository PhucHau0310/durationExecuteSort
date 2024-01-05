#include "HeapSort.h"

void HeapSort::swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void HeapSort::heapify(vector<int> &arr, int n, int i)
{
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	int largest = i;

	if (left < n && arr[left] > arr[largest]) {
		largest = left;
	}

	if (right < n && arr[right] > arr[largest]) {
		largest = right;
	}

	if (largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

void HeapSort::heapSort(vector<int> &arr, int n)
{
	// Build max heap
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(arr, n, i);
	}

	for (int i = n - 1; i >= 0; i--) {
		swap(arr[i], arr[0]);
		heapify(arr, i, 0);
	}
}


