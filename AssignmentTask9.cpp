// AssignmentTask9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a[5];
	int num = 0;
	bool found = false;
	cout << "Enter a number\n";
	cin >> num;
	cout << endl;
	cout << "Enter the numbers of the array\n";
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				if (a[i] + a[j] + a[k] == num)
				{
					found = true;
				}
			}
		}
	}
	if (!found)
	{
		cout << "Triplet not found" << endl;
	}
	else
	{
		cout << "Triplet found\n";
	}
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
