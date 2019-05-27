#pragma once
class CQueue
{
	CNode* m_pHead;
	CNode* m_pTail;
	int count = 0;
public:
	CQueue();
	~CQueue();

	bool Enqueue(int data);
	int Dequeue();
	bool Empty();
	int Size() { return count; }

};

