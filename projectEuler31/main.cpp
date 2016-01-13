#include <iostream>

using namespace std;

int main()
{

	
	double dime = 10;
	
	double totalSum;
	const double divisorValue = 20;

	totalSum = divisorValue;

	double numberOfDimesInSum = totalSum / dime;

	double dimeValue;
	for (int dimeIndex = 1; dimeIndex <= numberOfDimesInSum; dimeIndex++)
	{
		dimeValue = dimeIndex * dime;
		totalSum -= dimeValue;
		
		if (0 >= totalSum)
		{

		}
	}

	int hold;
	cin >> hold;
	return 0;
}