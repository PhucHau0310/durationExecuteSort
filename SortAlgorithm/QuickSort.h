#pragma once
#include <vector>
#include <iostream>

using namespace std;

class QuickSort
{
public:
	QuickSort();

	void swap(int& a, int& b);
	void quickSortIncrease(vector<int> &arr, int left, int right);
};

