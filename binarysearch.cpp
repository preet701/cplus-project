#include <iostream>
#include <algorithm>
using namespace std;
void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; i++)
    {
        cout << a[i] << endl;
    }
}
int main()
{
    int a[] = {1, 2, 4, 5, 6, 7, 8, 9, 0, 12, 3, 4, 556, 778, 6};
    int asize = sizeof(a) / sizeof(a[0]);
    show(a, asize);
    if (binary_search(a, a + 10, 2))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}