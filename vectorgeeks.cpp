#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(34);
    v.push_back(12);
    v.push_back(34);
    v.push_back(56);

    cout << v.front();
    return 0;
}