#include <iostream>

int main() 
{
	int hours;
	float payRate, grossPay;
	std::cout << "Enter the number of hours the employee worked.";
	std::cin >> hours;
	std::cout << "Enter the employee's hourly pay rate.";
	std::cin >> payRate;
	grossPay = hours * payRate;
	std::cout << "The employee's gross pay is $" << grossPay;
	return 1;
}
