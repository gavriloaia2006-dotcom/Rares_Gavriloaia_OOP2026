#include "Sort.h"
#include <iostream>

int main() {
	std::cout << "min/max: " << std::endl;
	Sort s1(7, 2, 35);
	s1.Print();
	std::cout << "BubbleSort " << std::endl;
	s1.BubbleSort();
	s1.Print();
	std::cout << std::endl;

	int v[7] = { 0, 5, 2, 4, 10, 9, 3 };

	std::cout << "vector" << std::endl;
	Sort s2(v, sizeof(v) / sizeof(v[0]));
	s2.Print();
	std::cout << "BubbleSort" << std::endl;
	s2.BubbleSort();
	s2.Print();
	std::cout << std::endl;

	std::cout << "initializer list" << std::endl;
	Sort s5;
	s5.Print();
	std::cout << "QuickSort" << std::endl;
	s5.QuickSort(true);
	s5.Print();
	std::cout << std::endl;

	std::cout << "var" << std::endl;
	Sort s3(6, 3, 4, 5, 2, 6, 9);
	s3.Print();
	std::cout << "BubbleSort" << std::endl;
	s3.BubbleSort(true);
	s3.Print();
	std::cout << std::endl;

	std::cout << "string" << std::endl;
	Sort s4("10,3,8,2,35,8");
	s4.Print();
	std::cout << "QuickSort" << std::endl;
	s4.QuickSort();
	s4.Print();
	std::cout << std::endl;

	std::cout << "Elementul 4 din string " << s4.GetElementFromIndex(3) << std::endl;
	std::cout << "Marime vector " << s4.GetElementsCount() << std::endl;


}
