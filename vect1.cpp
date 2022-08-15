#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {12, 34, 45, 6, 56, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + n);
    cout << "vector is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << endl;
    }
    sort(vect.begin(), vect.end());
    cout << "vector after sorting";
    for (int i = 0; i < n; i++)
    {
        cout << vect[i];
    }
    cout << "max" << *max_element(vect.begin(), vect.end());
    return 0;
}
