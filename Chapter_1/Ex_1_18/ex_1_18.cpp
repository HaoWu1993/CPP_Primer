#include<iostream>

int main()
{
	int currVal = 0, val = 0;
	std::cout << "Please input numbers" << std::endl;
	if(std::cin >> currVal){
		int cnt = 1;
		while(std::cin >> val)
		{
			if(currVal == val)
				++cnt;
			else{
				std::cout << currVal << "appears"
					  << cnt     << "times" << std::endl;
				cnt = 1;
				currVal = val;
			}
		}

		std::cout << currVal << "appears"
			  << cnt     << "times" << std::endl;   
	}

	return 0;
}
