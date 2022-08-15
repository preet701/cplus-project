#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    char s1[] = "PreetPaunikar";
    char s2[] = "ayush";
    char s3[] = "Hodusoft";
    char *r, *t;
    r = strpbrk(s1, s2);
    if (r != 0)
    {
        cout << "matching charecter is:" << *r << endl;
    }
    else
    {
        cout << "Not found";
    }
}