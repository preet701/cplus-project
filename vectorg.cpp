#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1{1, 2, 3, 4};
    vector<int> v2;
    for (int i = 0; i < v1.size(); i++)
    {
        v2.push_back(v1[i]);
    }
    cout << "old element";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i];
    }

    cout << "copied";
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i];
    }
    v1[0] = 23;
    
    return 0;
}