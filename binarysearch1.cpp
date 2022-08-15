#include <algorithm>
#include <iostream>
using namespace std;
void show(int ar[], int arraysize)
{
    for (int i = 0; i <= arraysize; i++)
    {
        cout << ar[i] << endl;
    }
}
int main(int argc, char const *argv[])
{
    int a[] = {23, 34, 1, 2, 3, 4, 5, 5, 6, 7, 8, 9};
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "the array is:" << endl;
    show(a, asize);
    sort(a, a + asize);
    cout << "array after sorting";
    show(a, asize);
    if (binary_search(a, a + 12, 34))
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}
