#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printDistinctSubString(string str)
{
    map<pair<char, char>, int> dPairs;
    for (int i = 0; i < str.size(); i++)
    {
        dPairs[make_pair(str[i], str[i + 1])]++;
    }
    cout << "Distinct substrict with count";
    for (auto it = dPairs.begin(); it != dPairs.end(); it++)
    {
        cout << it->first.first << it->first.second << "-" << it->second << " ";
    }
}
int main()
{
    string str = "abcafghfhffhgagcvbnavsajvajgavjaasasasaaxzc";
    printDistinctSubString(str);
    return 0;
}