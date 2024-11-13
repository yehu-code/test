#include <iostream>
#include "Stack.h"


int main()
{
	Stack* first = new Stack;
	first->value = NULL;
	first->next = NULL;
	Stack* node = new Stack;
	node = first;
	int choice = 0;
	unsigned int element = 0;

	while (choice != 4)
	{
		std::cout << "MENU\n1. Push.\n2. Pop.\n3. Clean stack.\n4. Exit" << std::endl;
		std::cout << "What is your choice?: ";
		std::cin >> choice;
	
		if (choice == 1)
		{
			if (first->value == NULL)
			{
				std::cout << "Please enter value: ";
				std::cin >> first->value;
				continue;
			}

			std::cout << "Please enter value: ";
			std::cin >> element;
			push(first,element);
		}
		else if (choice == 2)
		{
			if (first->next == NULL)
			{
				std::cout << "The node cannot be deleted!" << std::endl;
				continue;
			}
			std::cout << "value: " << pop(first) << std::endl;
		}
		else if (choice == 3)
		{
			cleanStack(first);
			continue;
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
