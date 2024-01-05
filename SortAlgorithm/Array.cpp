#include "Array.h"

void Array::setArr(vector<int> arr)
{
	this->arr = arr;
}

vector<int> Array::getArr()
{
	return this->arr;
}

void Array::readFile(const string& filename)
{
	ifstream file(filename.c_str());
	// vector<int> arrNum;

	if (!file.is_open()) {
		cout << "Not read file !" << endl;
	}

	int length;
	file >> length;
	for (int i = 0; i < length; i++) {
		int element;
		file >> element;
		// arrNum.push_back(element);
		this->arr.push_back(element);
	}

	file.close();
}

