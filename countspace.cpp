#include <iostream>
using namespace std;
int main()
{
    int *p = NULL;
    p = new (nothrow) int;
    if (!p)
    {
        cout << "Allocation of memory failed";
    }
    else
    {
        *p = 25;
        cout << "Value of p is:" << *p;
    }
    float *r = new float(78.34);
    cout << "Value of r is:" << *r;
    int n = 5;
    int *q = new (nothrow) int[n];
    if (!q)
    {
        cout << "allocation of memory failed";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            /* code */
            q[i] = i + 1;
            cout << "Value store in block of memory:";
            for (int i = 0; i < n; i++)
            {
                /* code */
                cout << q[i] << endl;
            }
        }
    }

    int o = 50;
    int *a = new (nothrow) int[o];
    if (!r)
    {
        cout << "allocation of memory failed";
    }
    else
    {
        for (int i = 0; i < o; i++)
        {
            a[i] = i + 1;
            cout << "value store in block 0";
            for (int i = 0; i < o; i++)
            {
                cout << a[i] << endl;
            }
        }
    }
    delete p;
    delete[] a;
    delete[] q;
    return 0;
}