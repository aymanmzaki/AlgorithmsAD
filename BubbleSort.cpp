
#include <iostream>
#include <chrono>

#define N 100000

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j, outerLoopCounter = 0, innerLoopCounter = 0, conditionMetCounter = 0;
    for (i = 0; i < n - 1; i++)
    {
        outerLoopCounter++;
        for (j = 0; j < n - i - 1; j++)
        {
            innerLoopCounter++;
            if (arr[j] > arr[j + 1])
            {
                conditionMetCounter++;
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    std::cout<< "InnerLoop:" <<innerLoopCounter <<" Condition True: "<<conditionMetCounter<< " OuterLoop: "<<outerLoopCounter<<std::endl;
}
// Last i elements are already in place

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

int main()
{

    int arr[N];

    populateArray(arr, N);

    printArray(arr, N);
    std::cout << std::endl;

    time_t startTime = time(nullptr) * 1000;

    bubbleSort(arr, N);
    time_t endTime = time(nullptr) * 1000;

    printArray(arr, N);

    std::cout << std::endl;
    std::cout << "start Time:" << startTime << std::endl
              << "end Time:" << endTime << std::endl
              << "Elapsed Time:" << endTime - startTime << " ms" << std::endl;

    return 0;
}