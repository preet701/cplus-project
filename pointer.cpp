#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    const char *color[4] = {"bike", "car", "laptop", "ac"};
    for (int i = 0; i <= 4; i++)
    {
        cout << color[i] << endl;
    }
    return 0;
}