#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "LinkedList.h"
using namespace std;

int main(int argc, char** argv) {
	LinkedList list;
	list.AddNode(3);
	list.AddNode(4);
	list.AddNode(5);
	list.PrintLinkedList();
	list.DeleteNode(4);
	list.PrintLinkedList();

	return 0;
}

