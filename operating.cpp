#include <iostream>
#include "operating.h"

long double count(long double first_number, char operation,long double second_number)
{
	switch (operation)
	{
	case '+':
		return first_number + second_number;
	case '-':
		return first_number - second_number;
	case '/':
		if (second_number == 0)
		{
			std::cout << "На ноль мы не делим" << std::endl;
		}
		else
		{
			return first_number / second_number;
		}
	case '*':
		return first_number * second_number;
	default:
		break;
	}
}
