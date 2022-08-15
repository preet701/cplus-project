#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
    int sum = 0;
    vector<int> vect{1, 2, 3, 4, 5, 6};
    while (vect.size() > 0)
    {
        sum = sum + vect.back();
        vect.pop_back();
    }
    cout << sum;
    return 0;
}