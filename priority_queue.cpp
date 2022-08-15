#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // max_heap
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(12);
    maxi.push(13);
    maxi.push(14);
    maxi.push(15);

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << endl;
        maxi.pop();
    }
}