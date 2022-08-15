#include <iostream>
using namespace std;
class Day
{
private:
	int day;

public:
	void set_data()
	{
		cout << "ENter Day";
		cin >> day;
	}

	void display()
	{
		switch (day)
		{
		case 1:
			cout << "MONDAY";
			break;
		case 2:
			cout << "TUESDAY";
			break;
		case 3:
			cout << "WEDNESDAY";
			break;
		case 4:
			cout << "THURSEDAY";
			break;
		default:
			cout << "NO MATCH";
			break;
		}
	}
};
int main()
{
	Day d1;
	d1.set_data();
	d1.display();
	return 0;
}
