#pragma once
class CStack
{
	CNode* m_pHead;
public:
	CStack();
	~CStack();

	bool Push(int data);
	int Pop();
	bool Empty();
	int Size();
};

