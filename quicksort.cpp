#include <iostream>
#include <algorithm>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    cout << arr[start];
    cout << "pivot is:" << pivot << endl;
    int count = 0;
    for (int i = start; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // Giving pivot element its correct positioni
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            /* code */
            i++;
        }
        while (arr[j] >= pivot)
        {
            /* code */
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
};
void quickSort(int arr[], int start, int end)
{

    // base case
    if (start >= end)
        return;

    // partitioning the array
    int p = partition(arr, start, end);
    // cout << "p is:" << p << endl;
    // Sorting the left part
    quickSort(arr, start, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, end);
}

int main()
{

    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = 10;
    quickSort(arr, 0, n - 1);
    cout << "array after using quick sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
