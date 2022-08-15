#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    cout << "capacity" << v.capacity();

    v.push_back(12);
    cout << "Capacity" << v.capacity();
    v.push_back(34);
    cout << "Capacity" << v.capacity();
    v.push_back(56);
    cout << "Capacity" << v.capacity();
    cout << "Size" << v.size();

    cout << "Element at 2nd index" << endl;
    cout << v.at(2);

    cout << "front" << v.front() << endl;
    cout << "back" << v.back() << endl;

    cout << "before pop";
    for (int i : v)
    {
        cout << i << endl;
    }
    cout << endl;
    v.pop_back();
    for (int i : v)
    {
        cout << i << endl;
    }
    return 0;
}