#include <iostream>
using namespace std;
class encapsulation
{
private:
    int salary;

public:
    void set(int x)
    {
        salary = x;
    }

public:
    void get()
    {
        cout << "salary is:" << salary;
    }
};
int main()
{
    encapsulation aq;
    aq.set(200000);
    aq.get();
    return 0;
}