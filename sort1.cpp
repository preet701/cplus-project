#include <iostream>
#include <algorithm>
using namespace std;
void show(int arr[], int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int a[] = {1, 2, 4, 4, 5, 6, 7, 8, 9, 0, 23, 3, 4, 56, 12, 3, 4};
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "array before sorting";
    show(a, asize);
    sort(a, a + asize);
    cout << "After sorting";
    show(a, asize);
    return 0;
}