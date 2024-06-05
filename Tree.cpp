#include "Tree.h"
#include "Node.h"
#include <iostream>
using namespace std;

Tree::Tree() : root(nullptr){}



Node* Tree::InsertNodePrivate(Node* node, int key)
{
	if (node == nullptr) {
		return new Node(key);
	}

	if (key < node->data) {
		node->left = InsertNodePrivate(node->left, key);
	}
	else
	{
		node->right = InsertNodePrivate(node->right, key);
	}

	return node;
}

void Tree::InsertNode(int data)
{
	root = InsertNodePrivate(root, data);
}


void Tree::InOrderPrivate(Node* root)
{
	if (root == nullptr) {
		return;
	}

	InOrderPrivate(root->left);

	cout << root->data << ", ";

	InOrderPrivate(root->right);


}




void Tree::InOrder()
{
	InOrderPrivate(root);
}




