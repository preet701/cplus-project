#include <iostream>
#include <iterator>
#include <list>
#include <vector>
using namespace std;
void show(list<int> g)
{
    list<int>::iterator i;
    for (i = g.begin(); i != g.end(); i++)
    {
        cout << *i << endl;
    }
}
int main()
{
    list<int> list1, list2;
    for (int i = 0; i <= 10; i++)
    {
        list1.push_back(i * 2);
        list2.push_front(i * 3);
    }
    show(list1);
    show(list2);
    return 0;
}