#include <iostream>
#include "Utils.h"

void reverse(int* nums, unsigned int size)
{
	int* arr = new int[size+1];

	int j = 0;
	for (int i = size-1; i >= 0; i--)
	{
		arr[j] = nums[i];
		j++;
	}
	for (int index = 0; index < size; index++)
	{
		nums[index] = arr[index];
	}
}

int* reverse10()
{
	int size = 10;
	int* nums = new int[size];

	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter number: ";
		std::cin >> nums[i];
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << "-> " << nums[i] << std::endl;
	}
	 reverse(nums, (unsigned int)size);

	 return nums;

}