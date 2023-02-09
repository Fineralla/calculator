#include <iostream>
#include "operating.h"

int main()
{
	setlocale(LC_ALL, "");

	double first_number, second_number;
	long double result = 0;
	char operation;
	std::cout << "Вас привествует Калькулятор, введите математическое выражение" << std::endl;
	while (true)
	{
		std::cin >> first_number >> operation >> second_number;
		result = count(first_number,operation, second_number);
		std::cout.precision(20);
		if (result != 0)
		{
			std::cout << result << std::endl;
		}
	}
}
//TODO: переделать функцию на класс