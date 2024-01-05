#pragma once
#include <vector>
#include <iostream>

using namespace std;

class HeapSort
{
public:
	HeapSort() {}

	void swap(int& a, int& b);
	void heapify(vector<int> &arr, int n, int i);
	void heapSort(vector<int> &arr, int n);
};

