#include "SimulationTimeExec.h"


void SimulationTimeExec::executeSectionSort(Array arrNums)
{
	SectionSort section_sort;
	//Array arrNums;

	//arrNums.readFile("input.txt");
	vector<int> data = arrNums.getArr();

	cout << "Array before sort: " << endl;
	for (int num : data) {
		cout << num << " ";
	}
	cout << endl;

	section_sort.sectionSortIncrease(data);
	
	cout << "Array after sort: " << endl;
	for (int num : data) {
		cout << num << " ";
	}
	cout << endl;
}

void SimulationTimeExec::executeQuickSort(Array arrNums)
{
	QuickSort quick_sort;
	//Array arrNums;

	//arrNums.readFile("input.txt");

	vector<int> data = arrNums.getArr();

	int left = 0;
	int right = data.size() - 1;

	quick_sort.quickSortIncrease(data, left, right);

}

void SimulationTimeExec::executeHeapSort(Array arrNums)
{
	HeapSort heap_sort;
	//Array arrNums;

	//arrNums.readFile("input.txt");

	vector<int> data = arrNums.getArr();

	int left = 0;
	int right = data.size() - 1;

	heap_sort.heapSort(data, data.size());

}

void SimulationTimeExec::executeMergeSort(Array arrNums)
{
	MergeSort merge_sort;
	//Array arrNums;

	//arrNums.readFile("input.txt");

	vector<int> data = arrNums.getArr();

	merge_sort.mergeSort(data);

}

void SimulationTimeExec::timeExecOfSectionSort(Array arrNums)
{
	clock_t start, finish;

	start = clock();
	this->executeSectionSort(arrNums);
	finish = clock();

	double time_taken = double(finish - start) / double(CLOCKS_PER_SEC);
	cout << "Time taken by section sort is : " << fixed
		<< time_taken << setprecision(5);
	cout << " sec " << endl;
}

void SimulationTimeExec::timeExecOfQuickSort(Array arrNums)
{
	clock_t start1, finish1;

	start1 = clock();
	this->executeQuickSort(arrNums);
	finish1 = clock();

	double time_taken = double(finish1 - start1) / double(CLOCKS_PER_SEC);
	cout << "Time taken by quick sort is : " << fixed
		<< time_taken << setprecision(5);
	cout << " sec " << endl;
}

void SimulationTimeExec::timeExecOfHeapSort(Array arrNums)
{
	clock_t start2, finish2;

	start2 = clock();
	this->executeHeapSort(arrNums);
	finish2 = clock();

	double time_taken = double(finish2 - start2) / double(CLOCKS_PER_SEC);
	cout << "Time taken by heap sort is : " << fixed
		<< time_taken << setprecision(5);
	cout << " sec " << endl;
}

void SimulationTimeExec::timeExecOfMergeSort(Array arrNums)
{
	clock_t start3, finish3;

	start3 = clock();
	this->executeMergeSort(arrNums);
	finish3 = clock();

	double time_taken = double(finish3 - start3) / double(CLOCKS_PER_SEC);
	cout << "Time taken by merge sort is : " << fixed
		<< time_taken << setprecision(5);
	cout << " sec " << endl;
}
