#include "pch.h"
#include "CNode.h"
#include "CStack.h"


CStack::CStack()
{
	m_pHead = nullptr;
}


CStack::~CStack()
{
}

bool CStack::Push(int data)
{
	if (Empty())
	{
		m_pHead = new CNode(data);
		return true;
	}
	else
	{
		CNode* newNode = new CNode(data);
		newNode->SetNext(m_pHead);
		m_pHead = newNode;
	    return true;
	}
}

int CStack::Pop()
{
	if (Empty())
	{
		return 0;
	}
	else
	{
		int retVal = m_pHead->GetData();
		CNode* temp = m_pHead;
		m_pHead = m_pHead->GetNext();
		delete temp;
		return retVal;
	}
}

bool CStack::Empty()
{
	return (m_pHead == nullptr) ? true : false;
}

int CStack::Size()
{
	int counter = 0;
	CNode* temp = m_pHead;

	while (temp != nullptr)
	{
		counter++;
		temp = temp->GetNext();
	}
	return counter;
}
