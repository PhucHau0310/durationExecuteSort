#include <iostream>
#include "SimulationTimeExec.h"
#include "Array.h"

using namespace std;

int main()
{
	srand(time(NULL));
	vector<int> arrNums;
	int n;
	cout << "Enter length of Arr ?: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int random_num = rand() % 101;
		arrNums.push_back(random_num);
	}

	Array arr;
	arr.setArr(arrNums);

	SimulationTimeExec exec;
	
	exec.timeExecOfSectionSort(arr);
	exec.timeExecOfQuickSort(arr);
	exec.timeExecOfHeapSort(arr);
	exec.timeExecOfMergeSort(arr);

	return 0;
}
