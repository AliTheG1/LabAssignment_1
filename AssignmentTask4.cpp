// AssignmentTask4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int count = 2;
	int i = 1;
	int largestPrime = 1;
	bool isPrime = true;
	while (count <= n)
	{
		isPrime = true;
		i = 2;
		while (i < count && isPrime == true)
		{
			if (!(count % i == 0))
			{
				isPrime = true;
			}
			else
			{
				isPrime = false;
			}
			i++;
		}
		if (isPrime == true)
		{
			largestPrime = count;
		}
		count++;
	}
	cout << "The largest prime number is " << largestPrime << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
