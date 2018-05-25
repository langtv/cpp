#include <iostream>
using namespace std;

int main ()
{
	
	int celsius, fahrenheit;
	cout << "Enter Fahrenheit degree:" << endl;
	cin >> fahrenheit;
	celsius =  (fahrenheit - 32) * 5/9;
	cout << fahrenheit << " degree in Fahrenheit is " << celsius << " degree in Celsius";
	
}
