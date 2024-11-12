#include <iostream>
#include "Queue.h"

int main()
{
	Queue* q = new Queue;
	q->value = 0;
	q->next = NULL;
	unsigned int size = 0;
	int choice = 0;
	unsigned int newValue = 0;


	std::cout << "Please enter the size of the queue: " ;
	std::cin >> size;
	std::cout << "size: " << size << std::endl;

	initQueue(q, size);
	std::cout << "Empty: " << isEmpty(q)<< std::endl;
	std::cout << "Full: " << isFull(q) << std::endl;

	std::cout << "\n\nLength: " << len(q) << std::endl;// I need to delete this function ###############################################################
	
	while (choice != 4)
	{
		Queue* node = new Queue;
		node = q;
		while (node != NULL)
		{
			std::cout << "value: " << node->value << std::endl;
			node = node->next;
		}

		std::cout << "\nMENU\n1. Add a number to the queue.\n2. Pulling a number from the queue.\n3. Clean the queue.\n4. Exit.\n" << std::endl;
		std::cin >> choice;
		if (choice == 1)
		{
			std::cout << "Enter value: ";
			std::cin >> newValue;
			enqueue(q, newValue);
		}
		else if (choice == 2)
		{
			std::cout << "The number: " << dequeue(q) << std::endl;
		}
		else if (choice == 3)
		{
			cleanQueue(q);
		}
	}

	/*Queue* fNode = new Queue;
	fNode = q;
	while (q != NULL)
	{
		fNode = q;
		q = q->next;
		delete(fNode);
	}
	delete(fNode);
	*/
	return 0;
}
