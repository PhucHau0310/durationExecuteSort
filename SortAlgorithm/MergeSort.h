#pragma once
#include <vector>

using namespace std;

class MergeSort
{
public:
	MergeSort() {}
	void merge(vector<int>& arr, vector<int>& left, vector<int>& right);
	void mergeSort(vector<int>& arr);
};

