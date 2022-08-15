#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("preet");
    s.push("paunikar");
    s.push("prakash bhai");
    cout << s.top();
    s.pop();
    cout << "top" << s.top();
    cout << "size of stack";
    cout << s.size();
    s.empty();
    return 0;
}