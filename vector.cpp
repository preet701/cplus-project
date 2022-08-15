#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> color{"blue", "pink", "red", "yellow"};
    color.push_back("green");
    for (int i = 0; i < color.size(); i++)
    {
        cout << color[i] << endl;
    }
    return 0;
}