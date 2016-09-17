#ifndef LIST_H
#define LIST_H
#include "node.h"
#include <stdlib.h>

class List
{
	public:
				Node *head = NULL;

				void menu();
				void insert();
				void print();
				void count();
				void empty();
};

#endif
