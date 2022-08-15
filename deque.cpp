#include <iostream>
#include <stdio.h>
#include <deque>
using namespace std;
void show(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); it++ <)
    {
        cout << *it;
    }
}

int main()
{
    deque<int> g;
    g.push_back(10);
    g.push_front(30);
    show(g);
}