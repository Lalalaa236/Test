#include "Header.h"

int main()
{
	int n;
	std::cout << "Enter the number of monke: ";
	std::cin >> n;
	double** monkey = new double*[n];
	for(int i = 0; i < n; ++i)
		monkey[i] = new double[7];
	inputMonkey(monkey, n);
	std::cout << "The average: " << averageEaten(monkey, n) << "\n";
	std::cout << "The least: " << minEaten(monkey, n) << "\n";
	std::cout << "The most: " << maxEaten(monkey, n) << "\n";
	for(int i = 0; i < n; ++i)
	{
		delete[] monkey[i];
	}
	delete[] monkey;
	return 0;
}

