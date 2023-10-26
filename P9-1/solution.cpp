
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
}