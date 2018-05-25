#include <iostream>
using namespace std;

void calculateBMI(float, float, float*);

int main()
{
	float weight, height, answer;
	cout << "Enter your weight (in pounds):" << endl;
	cin >> weight;
	cout << "Enter your height (in inches):" << endl;
	cin >> height;
	calculateBMI(weight, height, &answer);
	cout << "Your BMI is " << answer << endl;	
}

void calculateBMI(float userWeight, float userHeight, float *bmi)
{
	//float bmi;
	*bmi = (userWeight * 703)/(userHeight * userHeight);
	//return bmi;
}
