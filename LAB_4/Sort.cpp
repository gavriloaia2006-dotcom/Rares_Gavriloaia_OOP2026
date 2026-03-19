#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstdarg>
#include <ctime>
#include <cstring>
Sort::Sort(int s, int min, int max) {
    this->size = s;
    arr = new int[size];
    srand(time(NULL));
    for (int i = 0; i < s; i++) {
        int r = rand() % (max - min + 1) + min;
        arr[i] = r;
    }
}
Sort::Sort() : size(5), arr(new int[5] {5, 3, 7, 3, 20}) {}
Sort::Sort(int arr[], int s) {
    this->size = s;
    this->arr = new int[size];
    for (int i = 0; i < s; i++) {
        this->arr[i] = arr[i];
    }
}

Sort::Sort(int count, ...) {
    this->size = count;
    this->arr = new int[size];
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        this->arr[i] = va_arg(args, int);
    }
    va_end(args);
}
Sort::Sort(const char* s) {
    char b[255];
    strcpy(b, s);
    char* p = strtok(b, ",");

    char s1[255][255];
    int size = 0;
    while (p != nullptr) {
        strcpy(s1[size++], p);
        p = strtok(nullptr, ",");
    }

    this->size = size;
    arr = new int[this->size];
    for (int i = 0; i < this->size; i++) {
        arr[i] = atoi(s1[i]);
    }
}

int partition(int* arr, int lo, int hi, bool ascendent) {
    int p = arr[hi];

    int i = (lo - 1);

    for (int j = lo; j <= hi - 1; j++) {
        if (ascendent == true && arr[j] <= p || ascendent == false && arr[j] >= p) {
            i++;
            std::swap(arr[j], arr[i]);
        }
    }

    std::swap(arr[i + 1], arr[hi]);

    return (i + 1);
}

void quickSort(int* arr, int lo, int hi, bool ascendent) {
    if (lo < hi) {
        int p = partition(arr, lo, hi, ascendent);

        quickSort(arr, lo, hi - 1, ascendent);
        quickSort(arr, p + 1, hi, ascendent);
    }
}

void Sort::QuickSort(bool ascendent) {
    quickSort(arr, 0, size - 1, ascendent);
}
void Sort::BubbleSort(bool ascendent) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (ascendent == true && arr[i] > arr[j] || ascendent == false && arr[i] < arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}
void Sort::Print() {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int Sort::GetElementsCount() {
    return size;
}
int Sort::GetElementFromIndex(int index) {
    return arr[index];
}
