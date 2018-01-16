#include<iostream>

int main()
{
	int val1 = 0, val2 = 0, count = 0;
	std::cout << "Please input 2 numbers" << std::endl;
	std::cin  >> val1 >> val2;
	
	if(val1 > val2)
	{
		while(val2 <= val1)
		{
			std::cout << val2 << std::endl;
			++val2;
		}
	}
	else if(val2 > val1)
	{
		while(val1 <= val2)
		{
			std::cout << val1 << std::endl;
			++val1;
		}

	}
	else
	{
		std::cout << "The 2 numbers are equal to each other" << std::endl;
	}

	return 0;

}
