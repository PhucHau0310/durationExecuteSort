#include "MergeSort.h"

void MergeSort::merge(vector<int>& arr, vector<int>& left, vector<int>& right)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        }
        else {
            arr[k++] = right[j++];
        }
    }

    while (i < left.size()) {
        arr[k++] = left[i++];
    }

    while (j < right.size()) {
        arr[k++] = right[j++];
    }
}

void MergeSort::mergeSort(vector<int>& arr)
{
    if (arr.size() <= 1) return;

    vector<int> left, right;
    int mid = arr.size() / 2;

    for (int i = 0; i < mid; i++) {
        left.push_back(arr[i]);
    }

    for (int i = mid; i < arr.size(); i++) {
        right.push_back(arr[i]);
    }

    mergeSort(left);
    mergeSort(right);
    merge(arr, left, right);
}
