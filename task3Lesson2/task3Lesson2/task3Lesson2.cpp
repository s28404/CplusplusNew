// task3Lesson2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main() {
	std::cout << "Write letter and I will write how many are behind it and in front of it in the alphabet:" << std::endl;
	
	std::string userInput;
	std::cin >> userInput;
	userInput = tolower(userInput);

	char charUserInput = (char) userInput;

	while (!isalpha(userInput)) {
		std::cout << "It's not a letter" << std::endl;
		std::cout << "Write letter and I will write how many are behind it and in front of it in the alphabet:" << std::endl;
		char userInput;
		std::cin >> userInput;
	}
	
	

	return 0;
}