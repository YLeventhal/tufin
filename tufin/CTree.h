#pragma once
class CTree
{public:
	CNode* m_pRoot;
public:
	CTree();
	~CTree();

	void Insert(int data);
	void recInsert(CNode* node, int data);

};

