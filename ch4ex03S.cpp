#include <iostream>
using namespace std;

int main()
{
	int number;
	float romanNumeral;
	cout << "Enter a number:" << endl;
	cin >> number;
	
	switch( number ){
		case 1:	cout << "1 is I in Roman Numeral.\n";
			break;
		case 2:	cout << "2 is II in Roman Numeral.\n";
			break;
		case 3:	cout << "3 is III in Roman Numeral.\n";
			break;
		case 4:	cout << "4 is IV in Roman Numeral.\n";
			break;
		case 5:	cout << "5 is V in Roman Numeral.\n";
			break;
		case 6:	cout << "6 is VI in Roman Numeral.\n";
			break;
		case 7:	cout << "7 is VII in Roman Numeral.\n";
			break;
		case 8:	cout << "8 is VIII in Roman Numeral.\n";
			break;
		case 9:	cout << "9 is IX in Roman Numeral.\n";
			break;
		case 10:cout << "10 is X in Roman Numeral.\n";
			break;
		default:cout << "Cannot convert.\n";
	}		
}
