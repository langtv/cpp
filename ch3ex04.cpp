#include <iostream>
using namespace std;

void calculateSalesTax(float, float*, float*, float*);

int main()
{
	float totalSales, totalSalesTax, stateSalesTax, countySalesTax;
	cout << "Enter the total sales for the month: ";
	cin >> totalSales;
	calculateSalesTax(totalSales, &stateSalesTax, &countySalesTax, &totalSalesTax);
	cout << totalSalesTax << " is the total sales tax of " << stateSalesTax << " (4% of state sales tax rate) and " << countySalesTax << "(2% of county sales tax rate).";
}

void calculateSalesTax(float sales, float *state, float *county, float *total)
{
	*state = sales * 0.04;
	*county = sales * 0.02;
	*total = *state + *county;
}
