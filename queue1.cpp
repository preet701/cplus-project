#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("preet");
    q.push("paunikar");
    q.push("demo");
    cout << q.front();
    q.pop();
    cout << endl;
    cout << "after poping value";
    cout << q.front();
}