#include <iostream>
using namespace std;

int main()
{
	
	int celsius, fahrenheit;
	cout << "Enter Celsius degree:" << endl;
	cin >> celsius;
	fahrenheit = (celsius * 9)/5 + 32;
	cout << celsius << " degree in Celsius is " << fahrenheit << " degree in Fahrenheit.";
	
}
