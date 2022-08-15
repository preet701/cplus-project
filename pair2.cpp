#include <iostream>
#include <utility>
using namespace std;
int main()
{
    pair<int, char> p;
    pair<string, double> q("GeeksForGeeks", 1.23);
    pair<string, double> r;
    p.first = 100;
    p.second = 'f';

    r = make_pair("Geeks of Geeks", 10);

    cout << p.first << endl;
    cout << p.second << endl;

    cout << q.first << endl;
    cout << q.second << endl;

    cout << r.first << endl;
    cout << r.second << endl;
    return 0;
}