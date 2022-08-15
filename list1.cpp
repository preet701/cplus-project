#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    list<int> m(5, 100);
    cout << "m value is:";
    for (int i : m)
    {
        cout << i << endl;
    }
    l.push_back(23);
    l.push_front(300);
    for (int i : l)
    {
        cout << i;
    }

    l.erase(l.begin());
    for (int i : l)
    {
        cout << i << endl;
    }
}