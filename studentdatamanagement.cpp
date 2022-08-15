#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()d
{
    char data[15];
    int n = 0, option = 0, count_n = 0;
    string empty = "00";
    string proctor = "";
    ifstream f("example.txt");
    string line;
    for (int i = 0; std::getline(f, line);i++)
    {
        count_n++;
    }
    while(option != 6)
    {
        cout << "\nAvailable operations: \n1. Add New "
                "Students\n2."
             << "Student Login\n3. Faculty Login\n4. "
                "Proctor Login\n5. Admin View\n"
             << "6. Exit\nEnter option: ";
        cin >> option;
        if(option == 1)
        {
            cout << "ENter the number of student";
            cin >> n;
            count_n = count_n + n;
            
        }
    }
}