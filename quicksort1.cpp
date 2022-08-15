#include <iostream>
#include <algorithm>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    cout << pivot;
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotindex = start + count;
    swap(arr[pivotindex], arr[start]);
    int i = start, j = end;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] >= pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int p = partition(arr, start, end);
    quicksort(arr, start, p - 1);
    quicksort(arr, p + 1, end);
}

int main(int argc, char const *argv[])
{
    int arr[] = {23, 345, 27, 12, 46, 89, 04, 344, 45, 1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 10};
    int n = 20;
    quicksort(arr, 0, n - 1);
    cout << "array  after sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
