#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct lList
{
	unsigned int value;
	struct lList* next;
}lList;

void addNode(lList* first);
unsigned int removeNode(lList* first);


#endif /* LINKEDLIST_H */
