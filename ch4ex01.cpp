#include <iostream>
using namespace std;

int main()
{
	
	float weight, height, bmi;
	cout << "Enter your weight (in pounds):" << endl;
	cin >> weight;
	cout << "Enter your height (in inches):" << endl;
	cin >> height;
	bmi = (weight * 703)/(height * height);
	cout << "Your BMI is " << bmi << endl;
	if (bmi <= 18.5)
		cout << "You're underweight!";
	else if ((bmi > 18.5) and (bmi < 25))
		cout << "You're optimal.";
	else if (bmi >= 25)
		cout << "You're overweight";
	
}
