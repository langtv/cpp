#include <iostream>
using namespace std;

float calculateBMI(float, float);

int main()
{
	float weight, height, answer;
	cout << "Enter your weight (in pounds):" << endl;
	cin >> weight;
	cout << "Enter your height (in inches):" << endl;
	cin >> height;
	answer = calculateBMI(weight, height);
	cout << "Your BMI is " << answer << endl;	
}

float calculateBMI(float userWeight, float userHeight)
{
	float bmi;
	bmi = (userWeight * 703)/(userHeight * userHeight);
	return bmi;
}
