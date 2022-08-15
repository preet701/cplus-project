#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> vect{
        {3, 4, 5},
        {5, 6, 7},
        {7, 8, 9}};

    /// num of rows
    int m = vect.size();
    // num of column
    int n = vect[0].size();

    cout << "The Matrix before sorting 1st row is:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vect[i][j] << endl;
        }
    }
    sort(vect[0].rbegin(), vect[0].rend());
    cout << "The Matrix after sorting 1st row is:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vect[i][j];
        }
    }
}