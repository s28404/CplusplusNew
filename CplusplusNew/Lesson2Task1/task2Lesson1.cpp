#include <iostream>

int main()
{
	int firstVariable, secondVariable;

	std::cout << "Enter the first variable: ";
	std::cin >> firstVariable;

	std::cout << "Enter the second variable: ";
	std::cin >> secondVariable;

	int sum = 0;

	// Point A. Calculate the sum of all integers in the range
	for (int i = firstVariable; i <= secondVariable; i++)
	{
		if (sum + i > INT_MAX)
		{
			std::cout << "Integer overflow occurred.\n";
			break;
		}
		sum += i;

		
	}

	std::cout << "Sum of integers in the range: " << sum << std::endl;
	return 0;
}
