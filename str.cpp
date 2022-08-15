#include <iostream>
using namespace std;
void extract(string str)
{
    char ch;
    int l = str.length();
    for (int i = 0; i < l; i++)
    {
        ch = str.at(i);
        cout << ch << endl;
    }
}
int main(){
    string str("GeeksForGeek");
    extract(str);
    return 0;
}