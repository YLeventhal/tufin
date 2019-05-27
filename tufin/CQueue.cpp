#include "pch.h"
#include "CNode.h"
#include "CQueue.h"


CQueue::CQueue()
{
	m_pHead = nullptr;
	m_pTail = nullptr;
}


CQueue::~CQueue()
{
}

bool CQueue::Enqueue(int data)
{
	if (Empty())
	{
		count++;
		m_pHead = m_pTail = new CNode(data);
		return true;
	}
	else
	{
		count++;
		CNode* newNode = new CNode(data);
		m_pTail->SetNext(newNode);
		m_pTail = newNode;
		return true;
	}
	return false;
}

int CQueue::Dequeue()
{
	int removedData;

	if (Empty())
	{
		return 0;
	}
	else
	{
		removedData = m_pHead->GetData();
		CNode* nodeToRemove = m_pHead;
		m_pHead = m_pHead->GetNext();
		delete nodeToRemove;
		count--;
	}
	return removedData;
}

bool CQueue::Empty()
{
	return (m_pHead == nullptr) ? true : false;
}