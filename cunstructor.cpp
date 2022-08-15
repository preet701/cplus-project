#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class student
{
    int no;
    char name[20];
    double fee;

public:
    student()
    {
        cout << "Enter Role No";
        cin >> no;
        cout << "ENter name";
        cin >> name;
        cout << "ENter fees";
        cin >> fee;
    }
    void display()
    {
        cout << "roll no is:" << no << endl;
        cout << "name is:" << name << endl;
        cout << "fees is:" << fee << endl;
    }
};
int main()
{
    student s;
    s.display();
    return 0;
}