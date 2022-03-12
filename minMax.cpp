#include <chrono>
#include <iostream>
#include <time.h>
#include <cstdlib>

#define N 10

// Functions Prototype .. Function signature
void populateArray(int x[], int l);
void printArray(int x[], int l);
int min(int x[], int n);
int max(int x[], int n);

int main()
{

    // Define Array with length 10 of type int
    int arr[N];

    // Generate N Random Values
    populateArray(arr, N);
    
    printArray(arr, N);

    std::cout << std::endl <<"######################" << std::endl;

    // Get Start Time 
    time_t startTime = time(nullptr) * 1000;

    std::cout << "min: " << min(arr, N) << std::endl;
    std::cout << "max: " << max(arr, N) << std::endl;

    // Get End Time 
    time_t endTime = time(nullptr) * 1000;

    std::cout << "######################" << std::endl;
    std::cout << "Start Time:" << startTime << std::endl
              << "End Time:" << endTime << std::endl
              << "Elapsed Time:" << endTime - startTime << " ms" << std::endl;
    std::cout << "######################" << std::endl;
    
    return 0;
}

// add random values in array from 0 to 100
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

// Get Min Number from an array x with length n
int min(int x[], int n)
{

    int min = x[0];

    for (int i = 1; i < n; i++)
    {
        if (x[i] < min)
            min = x[i];
    }

    return min;
}

// Get Max Number from an array x with length n
int max(int x[], int n)
{
    int max = x[0];

    for (int i = 0; i < n; i++)
    {
        if (x[i] > max)
            max = x[i];
    }

    return max;
}