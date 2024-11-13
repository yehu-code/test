#include <iostream>
#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	Stack* node = new Stack;
	node = s;
	Stack* newNode = new Stack;
	newNode->next = NULL;
	newNode->value = element;

	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = newNode;

}

int pop(Stack* s)
{
	Stack* node = new Stack;
	node = s;
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

void initStack(Stack* s)
{
	//I don't understand why this function is needed...
}

void cleanStack(Stack* s)
{
	int length = len(s);

	for (int i = 0; i < length; i++)
	{
		pop(s);
	}

}

bool isEmpty(Stack* s)
{
	if (s == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool isFull(Stack* s)
{
	//I don't understand why this function is needed...
	return false;
}

int len(Stack* first)// I need to delete this function ########################################################################################
{
	Stack* node = new Stack;
	node = first;
	int counter = 0;

	while (node->next != NULL)
	{
		counter++;
		node = node->next;
	}
	return counter;
}