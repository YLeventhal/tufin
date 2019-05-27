#include "pch.h"
#include "CNode.h"


CNode::CNode(int data)
{
	m_Data = data;
	m_pNext = nullptr;
	m_pLeft = nullptr;
	m_pRight = nullptr;
}


CNode::~CNode()
{
}
