              #ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

/* a positive-integer value stack, with no size limit */
typedef struct Stack
{
	unsigned int value;
	Stack* next;
} Stack;

void push(Stack* s, unsigned int element);
int pop(Stack* s); // Return -1 if stack is empty

void initStack(Stack* s);
void cleanStack(Stack* s);

bool isEmpty(Stack* s);
bool isFull(Stack* s);

int len(Stack* first);

#endif // STACK_H