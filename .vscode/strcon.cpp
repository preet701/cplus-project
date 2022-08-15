#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
    char src[50] = "DemoJeep";
    char dest[20] = "Preet";
    strncat(dest, src, 4);
    cout << dest;
    return 0;
}