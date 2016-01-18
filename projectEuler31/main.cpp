#include <iostream>

using namespace std;

//problem 31
//In England the currency is made up of pound, £, and pence, p, and there are eight coins in general circulation :
//
//1p, 2p, 5p, 10p, 20p, 50p, £1(100p) and £2(200p).
//It is possible to make £2 in the following way :
//
//1×£1 + 1×50p + 2×20p + 1×5p + 1×2p + 3×1p
//How many different ways can £2 be made using any number of coins ?

void tenCount(double totalSum, int*);
void fiveCount(double totalSum, int*);

const double tenPence = 10;
const double fivePence = 5;
const double divisorValue = 20;

int main()
{
	

	
	int* waysToSum;
	waysToSum = new int(0);
	
	double totalSum = divisorValue;
	tenCount(totalSum, waysToSum);
	cout << "ways To Sum: " << *waysToSum << endl;

	int hold;
	cin >> hold;
	return 0;
}

void tenCount(double totalSum, int *waysToSum)
{
	totalSum = divisorValue;

	double	numberOfTensInSum = totalSum / tenPence;
	double	numberOfFivesInSum;

	double	tensValue;
	double  fivesValue;

	for (int dimeIndex = 1; dimeIndex <= numberOfTensInSum; dimeIndex++)
	{
		tensValue = dimeIndex * tenPence;
		totalSum -= tensValue;

		if (0 < totalSum)
		{
			//nickels
			numberOfFivesInSum = totalSum / fivePence;

			for (int nickelIndex = 1; nickelIndex <= numberOfFivesInSum; nickelIndex++)
			{
				fivesValue = nickelIndex * fivePence;
				totalSum -= fivesValue;

				if (0 >= totalSum)
				{
					*waysToSum = (*waysToSum) + 1;
				}
				{
					*waysToSum = (*waysToSum) + 1;
				}

			}

			// what if the division has a remainder? take the floor
			// just make it 

			//pennies -- when you get to pennies then it is just returned as the value
		}
		else
		{
			*waysToSum = (*waysToSum) + 1;
		}
	}
}