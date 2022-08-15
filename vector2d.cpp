#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> vect{
        {1, 4},
        {4, 5, 6},
        {8, 8}};
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j];
        }
    }
    return 0;
}