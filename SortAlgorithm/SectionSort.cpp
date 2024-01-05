#include "SectionSort.h"

void SectionSort::swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void SectionSort::sectionSortIncrease(vector<int>& arr)
{
	int min;
	for (int i = 0; i < arr.size() - 1; i++) {
		min = i;

		for (int j = i + 1; j < arr.size(); j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}

		this->swap(arr[min], arr[i]);
	}
}

void SectionSort::sectionSortDecrease(vector<int>& arr)
{
	int max;
	for (int i = 0; i < arr.size() - 1; i++) {
		max = i;

		for (int j = i + 1; j < arr.size(); j++) {
			if (arr[j] > arr[max]) {
				max = j;
			}
		}

		this->swap(arr[max], arr[i]);
	}
}
