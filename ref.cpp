#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int &ref = x;
    ref = 20;
    cout << "x is:" << x;
    x = 30;
    cout << "ref is:" << ref;
    return 0;
}