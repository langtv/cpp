#include <iostream>
using namespace std;

int main()
{
	
	int number;
	float romanNumeral;
	cout << "Enter a number:" << endl;
	cin >> number;
	if (number == 1)
		cout << "1 is I in Roman Numeral.\n";
	else if (number == 2)
		cout << "2 is II in Roman Numeral.\n";
	else if (number == 3)
		cout << "3 is III in Roman Numeral.\n";
	else if (number == 4)
		cout << "4 is IV in Roman Numeral.\n";
	else if (number == 5)
		cout << "5 is V in Roman Numeral.\n";
	else if (number == 6)
		cout << "6 is VI in Roman Numeral.\n";
	else if (number == 7)
		cout << "7 is VII in Roman Numeral.\n";
	else if (number == 8)
		cout << "8 is VIII in Roman Numeral.\n";
	else if (number == 9)
		cout << "9 is IX in Roman Numeral.\n";
	else if (number == 10)
		cout << "10 is X in Roman Numeral.\n";
	else if ((number < 1) and (number > 10))
		cout << "Cannot convert.\n";
		
}
