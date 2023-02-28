#include "Header.h"

void inputMonkey(double** monkey, int n)
{
	for(int i = 0; i < n; ++i)
	{
		std::cout << "Enter the amount of food in 7 days for monke number " << i << ": ";
		for(int j = 0; j < 7; ++j)
		{
			std::cin >> monkey[i][j];
			if (monkey[i][j] < 0)
			{
				std::cout << "The number that was just input was invalid, please enter for this monke again\n";
				--i;
				break;
			}
		}
	}
}

double minEaten(double** monkey, int n)
{
	double min = monkey[0][0];
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < 7; ++j)
		{
			if(monkey[i][j] < min)
				min = monkey[i][j];
		}
	}
	return min;
}

double maxEaten(double** monkey, int n)
{
	double max = monkey[0][0];
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < 7; ++j)
		{
			if(monkey[i][j] > max)
				max = monkey[i][j];
		}
	}
	return max;
}

double averageEaten(double** monkey, int n)
{
	double avg = 0;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < 7; ++j)
		{
			avg += monkey[i][j];
		}
	}
	avg = avg/(n*7);
	return avg;
}