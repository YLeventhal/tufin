#pragma once

class CNode
{
	CNode* m_pLeft;
	CNode* m_pRight;
	CNode* m_pNext;
	int m_Data;
public:
	CNode(int data);
	~CNode();

	int GetData()const { return m_Data; }// return a reference if this is a template or data are objects
	CNode* GetNext() { return m_pNext; }
	CNode* GetLeft() { return m_pLeft; }
	CNode* GetRight() { return m_pRight; }
	void SetNext(CNode* nextNode) { m_pNext = nextNode; }
};