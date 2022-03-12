#include <chrono>
#include <iostream>
#include <time.h>
#include <cstdlib>

#define N 10

// Functions Prototype .. Function signature
void populateArray(int x[], int l);
void printArray(int x[], int l);
void insertionSort(int X[], int n);

int main()
{

	// Define Array with length 10 of type int
	int arr[N];
	// Generate N Random Values
	populateArray(arr, N);

	std::cout << " Unsorted Array: ";
	printArray(arr, N);
	std::cout << std::endl
			  << "######################" << std::endl;

	time_t startTime = time(nullptr) * 1000;

	// SORT ARRAY USING INSERTION ALGORITHM
	insertionSort(arr, N);

	time_t endTime = time(nullptr) * 1000;

	// std::cout << " sorted Array : ";
	printArray(arr, N);
	std::cout << std::endl
			  << "######################" << std::endl;

	std::cout << "start Time:" << startTime << std::endl
			  << "end Time:" << endTime << std::endl
			  << "Elapsed Time:" << endTime - startTime << " ms" << std::endl;

	return 0;
}

// add random values in array
void populateArray(int x[], int l)
{
	for (int i = 0; i < l; i++)
	{
		x[i] = rand() % 100;
	}
}

// Print elements of array
void printArray(int x[], int l)
{
	for (int i = 0; i < l; i++)
	{
		std::cout << x[i] << " ";
	}
}

// Insertion Sort
void insertionSort(int arr[], int n)
{
	std::cout << std::endl
			  << "Sorting ...." << std::endl;

	int i, key, j;

	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}