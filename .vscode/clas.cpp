#include <iostream>
#include <stdio.h>
using namespace std;
class Geeks
{
public:
    string name;
    int id;
    void printname();
    void printid()
    {
        cout << "id is:" << id;
    }
};
void Geeks::printname()
{
    cout << "Geeks name is:" << name;
}
int main()
{
    Geeks obj;
    obj.name = "preetpaunikar";
    obj.id = 12;
    obj.printname();
    cout << endl;
    obj.printid();
}