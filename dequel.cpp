#include <iostream>
#include <deque>
using namespace std;
int main()
{

    deque<int> q;
    q.push_back(23);
    q.push_front(44);
    for (int i : q)
    {
        cout << i;
    }   

    q.pop_back();
    for (int i : q)
    {
        cout << i;
    }
}