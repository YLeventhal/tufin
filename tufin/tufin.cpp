

#include "pch.h"
#include <iostream>
#include "CNode.h"
#include "CStack.h"
#include "CQueue.h"
#include "CTree.h"

using namespace std;


int main()
{
	CStack stack;
	cout << stack.Pop() << endl;
	stack.Push(3);
	stack.Push(5);
	stack.Push(7);
	stack.Push(9);

	//cout << stack.Size() << endl;

	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl;

	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl;
	//cout << stack.Pop() << endl;
	//cout << stack.Size() << endl;


	CQueue queue;

	cout << queue.Dequeue() << endl;

	queue.Enqueue(4);
	queue.Enqueue(6);
	queue.Enqueue(8);
	queue.Enqueue(10);

	cout << queue.Dequeue() << endl;
	cout << queue.Dequeue() << endl;

	cout<< queue.Size();


	CTree tree;

	tree.Insert(12);
	tree.Insert(14);
	tree.Insert(11);
	tree.Insert(13);

	cout << tree.m_pRoot->GetData()<<endl;
	cout << tree.m_pRoot->GetRight()->GetData() << endl;
	cout << tree.m_pRoot->GetLeft()->GetData() << endl;
	cout << tree.m_pRoot->GetRight()->GetLeft()->GetData() << endl;





}

