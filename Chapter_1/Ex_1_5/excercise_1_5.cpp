#include<iostream>

int main()
{
	int v1 = 0, v2 = 0;
	std::cout << "Please input 2 numbers";
	std::cout << std::endl;
	
	std::cin >> v1;
	std::cin >> v2;

	std::cout << "The result of mulplication of v1 ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1*v2;
	std::cout << std::endl;

	return 0;
	 
}
