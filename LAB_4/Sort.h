#pragma once

class Sort {
	int size;
	int* arr;
public:
	Sort(int s, int min, int max);
	Sort();
	Sort(int arr[], int s);
	Sort(int count, ...);
	Sort(const char* s);
	void QuickSort(bool ascendent = false);
	void BubbleSort(bool ascendent = false);
	void Print();
	int  GetElementsCount();
	int  GetElementFromIndex(int index);
};
