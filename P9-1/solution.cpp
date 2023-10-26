
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
		int num = rand() % 10 + rand() % 100 + rand() % 1000 + rand() % 10000 - 1000;
		nums[i] = num;
		cout << nums[i] << " ";
	}

}