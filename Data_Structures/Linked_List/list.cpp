#include "list.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void List::menu()
{
	List list;
	int choice;

	do
	{
		cout << "1- Insert\n2- Print\n3- Count\n4- Exit\nSelect an option- ";
		cin >> choice;

		switch(choice)
		{
			case 1: list.insert();
			break;

			case 2: list.print();
			break;
	
			case 3: list.count();
			break;

			default: exit(0);
		}
	}while(choice != 4);
}

void List::insert()
{
	Node *temp1 = new Node();
	Node *temp2 = new Node();

	cout << "Enter the value- ";
	cin >> temp1->value;

	if(head == NULL)
	{
		head = temp1;
		temp1->next = NULL;
		temp1->previous = NULL;
	}
	else
	{
		temp2 = head;
		temp1->next = temp2;
		temp1->previous = NULL;
		head = temp1;
		temp2->previous = temp1;
	}
	print();
}

void List::print()
{
	Node *temp = new Node();

	temp = head;

	if(head == NULL)
	{
		cout << "List is empty" << endl;
	}
	
	else
	{
		while(temp != NULL)
		{
			cout << "Node- " << temp->value << endl;
			temp = temp->next;
		}
	}
}

void List::count()
{
	Node *temp;
	int count = 0;

	temp = head;
	if(head == NULL)
	{
		cout << "Count =  0" << endl;
	}
	else
	{
		while(temp != NULL)
		{
			count++;
			temp = temp->next;
		}
		cout << "Count = " << count << endl;
	}
}

Node :: Node()
{
}
