#pragma once
#include "SectionSort.h"
#include "QuickSort.h"
#include "HeapSort.h"
#include "MergeSort.h"
#include "Array.h"
#include "time.h"
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <iostream>

class SimulationTimeExec
{
public:
	void executeSectionSort(Array arrNums);
	void executeQuickSort(Array arrNums);
	void executeHeapSort(Array arrNums);
	void executeMergeSort(Array arrNums);

	void timeExecOfSectionSort(Array arrNums);
	void timeExecOfQuickSort(Array arrNums);
	void timeExecOfHeapSort(Array arrNums);
	void timeExecOfMergeSort(Array arrNums);
};

