#include<iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item;
	std::cout << "Please input the transction information" << std::endl;
	std::cin >> item;
	std::cout << item;

	return 0;
}
