#include <iostream>
using namespace std;

int main() {

	int firstNum;
	int secondNum;
	char operation;
	int answer;

	std::cout << "Enter first number: ";
	std::cin >> firstNum;

	std::cout << "Enter second number: ";
	std::cin >> secondNum;

	std::cout << "Enter operation (*, /, +, -): ";
	std::cin >> operation;

	if (operation == '*') {
		answer = firstNum * secondNum;
	} else if (operation == '/') {
		answer = firstNum / secondNum;
	} else if (operation == '+') {
		answer = firstNum + secondNum;
	} else if (operation == '-') {
		answer = firstNum - secondNum;
	} else {
		return 1;
	}

	std::cout << answer;

	return 0;
}
