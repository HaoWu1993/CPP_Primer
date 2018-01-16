#include<iostream>

int main()
{
	int v1 = 0, v2 = 0;
	std::cout << "Please input 2 numbers" << std::endl;
	std::cin >> v1 >> v2;
	std::cout << "The result of multiplication of v1 " << v1
		  << " and v2 " << v2
		  << " is: " << v1*v2 << std::endl;

	return 0;
}
