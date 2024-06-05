#pragma once
#include "Node.h"


class Tree
{
	friend class Node;
private:
	Node* root;
	Node* InsertNodePrivate(Node* node, int key);
	void InOrderPrivate(Node* root);

public:
	Tree();
	void InsertNode(int data);
	void InOrder();

};

