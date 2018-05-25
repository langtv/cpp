#include <iostream>
using namespace std;

int main()
{
	
	int day, month, year, time;
	cout << "Enter a day:" << endl;
	cin >> day;
	cout << "Enter a month:" << endl;
	cin >> month;
	cout << "Enter a year (two-digit):" << endl;
	cin >> year;
	time = day * month;
	if (time == year)
		cout << "IT'S A MAGIC DATE!";
	else
		cout << "It's not a magic date.";
	
}
