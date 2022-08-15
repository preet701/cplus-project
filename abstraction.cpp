#include <iostream>
using namespace std;
class abstract
{
private:
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a is=" << a;
        cout << "b is=" << b;
    }
};
int main()
{
    abstract ob1;
    ob1.set(23, 24);
    ob1.display();
    return 0;
}