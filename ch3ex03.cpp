#include <iostream>
using namespace std;

void calculateSum(int, int, int);

int main()
{
	int classA, classB, classC;
	cout << "Enter an amount of class A tickets: ";
	cin >> classA;
	cout << "Enter an amount of class B tickets: ";
	cin >> classB;
	cout << "Enter an amount of class C tickets: ";
	cin >> classC;
	calculateSum(classA, classB, classC);
}

void calculateSum(int ticketsA, int ticketsB, int ticketsC)
{
	int sum;
	sum = (ticketsA * 15) + (ticketsB * 12) + (ticketsC * 9);
	cout << sum << " is the total cost of " << ticketsA << " A ticket(s), " << ticketsB << " B ticket(s) and " << ticketsC << " C ticket(s)." << endl;
}
