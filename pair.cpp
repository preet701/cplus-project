#include <iostream>
#include <stdio.h>
#include <utility>
using namespace std;
int main()
{
    pair<string, int> p;
    p.first = "demouser";
    p.second = 100;
    cout << p.first;
    cout << p.second;

    return 0;
}