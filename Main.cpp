#include <iostream>
#include "Tree.h"
using namespace std;


int main()
{
	Tree T1;

	T1.InsertNode(1);
	T1.InsertNode(5);
	T1.InsertNode(2);
	T1.InsertNode(7);
	T1.InsertNode(4);
	T1.InsertNode(10);
	T1.InsertNode(8);


	T1.InOrder();


	return 0;
}