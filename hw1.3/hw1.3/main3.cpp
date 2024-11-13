#include <iostream>
#include "Utils.h"

int main()
{
	int size = 10;
	int* nums = new int[size];

	nums = reverse10();

	std::cout << "#################################" << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << "-> " << nums[i] << std::endl;
	}

	delete(nums);
	return 0;
}