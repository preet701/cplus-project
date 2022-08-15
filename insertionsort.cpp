#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        cout << "i is:" << i;
        // cout << "key is:" << key << endl;

        j = i - 1;
        cout << "j is:" << j << endl;
        while (j > 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printarry(int arr[], int n)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {3, 4, 5, 5, 7, 8, 9, 0, 0, -3, 2, 3, 234};
    int N = 10;
    insertionSort(arr, N);
    cout << "array after sorting";
    printarry(arr, N);
    return 0;
}