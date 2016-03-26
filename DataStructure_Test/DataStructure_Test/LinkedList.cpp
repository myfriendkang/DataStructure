#include "stdafx.h"
#include "LinkedList.h"
#include <cstdlib>
#include <iostream>

LinkedList::LinkedList()
{
	head = NULL;
	current = NULL;
	temp = NULL;
}
void LinkedList::AddNode(int addData)
{
	nodePtr nextNode = new node;
	nextNode->next = NULL;
	nextNode->data = addData;

	if (head != NULL) 
	{
		current = head;
		while (current->next != NULL) 
		{
			current = current->next;
		}
		current->next = nextNode;
	}
	else {
		head = nextNode;
	}

}

void LinkedList::DeleteNode(int delData)
{
	nodePtr delPtr = NULL;
	temp = head;
	current = head;
	while (current != NULL &&current->data != delData) {
		temp = current;
		current = current->next;
	}
	if (current == NULL) 
	{
		std::cout << delData << "was not in  the list\n";
		delete  delPtr;
	}
	else 
	{
		delPtr = current; 
		current = current->next;
		temp->next = current;
		if (delPtr == head) 
		{
			head = head->next;
			temp = NULL;
		}
		delete delPtr;
		std::cout << "the value " << delData << " was deleted\n";
	}
}

void LinkedList::PrintLinkedList()
{
	current = head;
	while (current != NULL) {
		std::cout << current->data<<" stored. "<<std::endl;
		current = current->next;
	}
}


LinkedList::~LinkedList()
{
}
