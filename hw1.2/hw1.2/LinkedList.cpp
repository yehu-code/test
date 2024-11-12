#include <iostream>
#include "LinkedList.h"

void addNode(lList* first)
{

	lList* node = new lList;
	node = first;
	lList* newNode = new lList;
	newNode->next = NULL;

	std::cout << "Enter a value for the new node: ";
	std::cin >> newNode->value;

	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = newNode;

}

unsigned int removeNode(lList* first)
{
	lList* node = new lList;
	node = first;
	unsigned int val = 0;

	while (node->next->next != NULL)
	{
		node = node->next;
	}
	val = node->next->value;
	node->next = NULL;
	delete(node->next);

	return val;
}