#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int *p = NULL;
    p = new (nothrow) int;
    if (!p)
    {
        cout << "failed to allocate memory";
    }
    else
    {
        *p = 29;
        cout << "Pointer value" << *p;
    }
    delete p;
    return 0;
}