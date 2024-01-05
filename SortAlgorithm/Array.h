#pragma once
#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

class Array
{
private:
	vector<int> arr;

public:
	Array() {}
	Array(vector<int> arr) : arr(arr) {}
	void setArr(vector<int> arr);
	vector<int> getArr();
	void readFile(const string& filename);
};

