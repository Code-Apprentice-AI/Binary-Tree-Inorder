#pragma once
class Node
{
	friend class Tree;
private:
	int data;
	Node* left;
	Node* right;

public:
	Node(int val);

};

