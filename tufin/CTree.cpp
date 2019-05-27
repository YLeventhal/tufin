#include "pch.h"
#include "CNode.h"
#include "CTree.h"


CTree::CTree()
{
	m_pRoot = nullptr;
}


CTree::~CTree()
{
}

void recInsert(CNode* node, int data)
{
	if (node == nullptr)
	{
		node = new CNode(data);
		return;
	}
	
	if (data > node->GetData())
		recInsert(node->GetRight(), data);
	else
		recInsert(node->GetLeft(), data);

}
void CTree::Insert(int data)
{
	recInsert(m_pRoot, data);
}
