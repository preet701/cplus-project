#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void printFrequency(string st)
{
    // each word is mapped to its frequency
    map<string, int> FW;
    // used for breaking word
    stringstream ss(st);
    string word;
    while (ss >> word)
    {
        FW[word]++;
    }
    map<string, int>::iterator m;
    for (m = FW.begin(); m != FW.end(); m++)
    {
        cout << m->first << "->" << m->second << "\n";
    }
}
int main()
{
    string s = "Geeks For Geeks India";
    printFrequency(s);
    return 0;
}