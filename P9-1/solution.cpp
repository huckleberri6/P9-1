
#include <iostream>
#include <cstdlib>
using namespace std;

const int SIZE = 10;

int main()
{
	srand(time(0));
	int nums[SIZE];
	cout << "The random integers: ";

	for (int i = 0; i < SIZE; i++)
	{
		double num = rand() % 10000;
		while (num < 1000)
			num = rand() % 10000;
		nums[i] = num;
		cout << nums[i] << " ";
	}
	cout << endl;

	cout << "Even indicies:       ";
	for (int i = 0; i < SIZE; i = i + 2)
	{
		cout << nums[i] << " ";
	}
	cout << endl;

	cout << "Even values:         ";
	for (int i = 0; i < SIZE; i++)
	{
		if (nums[i] % 2 == 0)
		cout << nums[i] << " ";
	}
	cout << endl;

	cout << "Reversed order:      ";
	int n[SIZE];
	for (int i = 0; i < SIZE; i++)
		n[i] = nums[i];

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - i - 1; j++)
			if (n[j] < n[j + 1])
			{
				int temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
	}
	for (int i = 0; i < SIZE; i++)
		cout << n[i] << " ";
	cout << endl;

	cout << "First and last:      ";
	cout << nums[0] << " " << nums[SIZE - 1];
	cout << endl;

}