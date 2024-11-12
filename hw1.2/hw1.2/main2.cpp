#include <iostream>
#include "LinkedList.h"


int main()
{
	lList* first = new lList;
	first->value = NULL;
	first->next = NULL;
	lList* node = new lList;
	node = first;
	int choice = 0;
	
	while (choice != 3)
	{
		std::cout << "MENU\n1. Add node.\n2. Remove node.\n3. exit" << std::endl;
		std::cout << "What is your choice?: ";
		std::cin >> choice;

		if (choice == 1)
		{
			if (first->value == NULL)
			{
				std::cout << "Please enter value: ";
				std::cin >> first->value;
			}

			addNode(first);
		}
		else if (choice == 2)
		{
			if (first->next == NULL)
			{
				std::cout << "The node cannot be deleted!" << std::endl;
				continue;
			}
			std::cout << "value: " << removeNode(first) << std::endl;
		}

		node = first;
		while (node != NULL)
		{
			std::cout << "--" << node->value << std::endl;
			node = node->next;
		}

	}
	return 0;
}
