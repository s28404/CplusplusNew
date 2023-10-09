#include <iostream>

int main() {

	const int seven = 7;
	const int thirteen = 13;

	int first;
	std::cout << "Write first number:\n";
	std::cin >> first;

	int second;
	std::cout << "Write second number:\n";
	std::cin >> second;

	int between = abs(first - second);

	int theBiggest = 0;
	int sum = 0;

	while (between >= 0) {
		if (between % seven == 0 && between % thirteen == 0) {
			theBiggest = between;
			sum++;
		}
	}

	std::cout << "There is " << sum << " numbers dividible by 7 and 13 and the biggest is " << theBiggest;

	return 0;
}