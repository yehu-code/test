#include <iostream>
#include "queue.h"


bool isEmpty(Queue* s)
{
	Queue* first = new Queue;
	first = s;

	while (first->next != NULL)
	{
		std::cout << "Value: " << first->value << std::endl;
		std::cout << "Addres: " << first->next << std::endl;
		if (first->value == NULL)
		{
			return true;
		}
		first = first->next;
	}
	return false;
}

bool isFull(Queue* s)
{
	Queue* first = new Queue;
	first = s;
	
	while (first->next != NULL)
	{
		std::cout << "Value: " << first->value << std::endl;
		std::cout << "Addres: " << first->next << std::endl;
		if (first->value == NULL)
		{
			return false;
		}
		first = first->next;
	}
	return true;
}

void initQueue(Queue* q, unsigned int size)
{
	Queue* first = new Queue;
	first = q;
	for (int i = 0; i < (size -1); i++)
	{
		Queue* nNode = new Queue;
		nNode->value = NULL;
		nNode->next = NULL;
		while (first->next != NULL)
		{
			first = first->next;
		}
		first->next = nNode;
	}
}

void cleanQueue(Queue* q)
{
	Queue* node = new Queue;
	node = q;

	while (node != NULL)
	{
		node->value = NULL;
		node = node->next;
	}
}

void enqueue(Queue* q, unsigned int newValue)
{
	Queue* node = new Queue;
	node = q;

	while (node->value != NULL)
	{
		node = node->next;
	}
	node->value = newValue;
}

int dequeue(Queue* q)
{
	int val = q->value;
	Queue* node = new Queue;
	node = q;
	
	while (q->next != NULL)
	{
		q->value = q->next->value;
		q = q->next;
	}
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->value = NULL; 
	return val;
}

int len(Queue* q)// I need to delete this function ########################################################################################
{
	Queue* first = new Queue;
	first = q;
	int counter = 0;

	while (first->next != NULL)
	{
		counter++;
		first = first->next;
	}
	return counter;
}
