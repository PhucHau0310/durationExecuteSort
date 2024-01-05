#pragma once
#include <vector>
#include <iostream>

using namespace std;

class SectionSort
{
public:
	SectionSort() {}
	void swap(int& a, int& b);
	void sectionSortIncrease(vector<int>& arr);
	void sectionSortDecrease(vector<int>& arr);
};

