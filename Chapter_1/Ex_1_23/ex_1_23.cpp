#include<iostream>
#include "Sales_item.h"

int main()
{
	Sales_item currItem, item;
	if(std::cin >> item){
		int cnt = 1;
		while(std::cin >> currItem)
		{
			if(currItem.isbn() == item.isbn()){
				++cnt;
			}else{
				std::cout << item << " appears "
					  << cnt  << " times." << std::endl;

				cnt = 1;
				item = currItem;
			}
		}

		std::cout << item << " appears "
			  << cnt  << " times." <<std::endl;
	}

	return 0;
}
