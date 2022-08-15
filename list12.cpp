#include <iostream>
#include <list>
using namespace std;
int main()
{
    // Declaring a list
    list<int> a;
    // Initialising list iterator
    list<int>::iterator b = a.begin();
    for (int i = 1; i <= 5; i++)
    {
        a.emplace_back(i);
    }
    cout << "after emplace_back operation";
    for (int &i : a)
    {
        cout << i << endl;
    }

    // Entering list element using emplace_front()
    for (int i = 10; i <= 50; i += 10)
    {
        a.emplace_front(i);
    }

    cout << "after front insertion";
    for (int &i : a)
    {
        cout << i << endl;
    }
    // using advance() to advance iterator position
    advance(b, 4);
    // inserting element at 2nd position using emplace()
    a.emplace(b, 100);
    cout << "List after emplace operation is : ";
    for (int &i : a)
    {
        cout << i << endl;
    }
}