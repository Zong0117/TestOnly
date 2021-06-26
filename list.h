#pragma once
#include<iostream>
using namespace std;
struct NODE
{
	int data;
	NODE* next;
};
class LIST
{
	NODE* head; //头
public:
	LIST() { head = new NODE; head->next = nullptr; } //构造链表
	void InsertH(int data);
	void Insert(int data, int n);
	void Insert(int data);
	void Pop(int n);
	void print();
	NODE* reverse(NODE*);
	~LIST() {};
};

void LIST::InsertH(int data)
{
		NODE* temp = new NODE;	//创建新节点
		temp->data = data;
		temp->next = head->next;
		head->next = temp;
}
void LIST::Insert(int data)	//尾插
{
	NODE* temp = new NODE;
	temp->data = data;	//赋值
	NODE* p = head;		//p和head指向相同
	while (p->next)		//如果p.next不为空循环找到最后一项
	{
		p = p->next;	
	}
	p->next = temp;		//找到最后一项指向temp
	temp->next = nullptr;
}
void LIST::Insert(int data, int n)	//中间插
{
	NODE* temp = new NODE;
	NODE* p = head;
	temp->data = data;
	temp->next = nullptr;
	if (n == 1)
	{
		temp->next = head;
		head = temp;
		return;
	}
	else
	{
		for (int i = 0; i < n - 2; i++)
		{
			p = p->next;
		}
		temp->next = p->next;
		p->next = temp;
	}
}
void LIST::print()
{
	NODE* p = head->next;
	cout << "当前链表为：";
	while (p)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
void LIST::Pop(int n)
{
	NODE* temp1 = head;
	if (n == 1)
	{
		head = temp1->next;
		delete temp1;
		return;
	}
	for (int i = 1; i < n; i++)
	{
		temp1 = temp1->next;
	}
	NODE* temp2 = temp1->next;
	temp1->next = temp2->next;
	delete temp2;
}
NODE* LIST::reverse(NODE* pHead)
{
	NODE* cur = pHead;
	NODE* pre = nullptr;
	NODE* nex = nullptr;
	while (cur)
	{
		nex = cur->next;
		cur->next = pre;
		pre = cur;
		cur = nex;
	}
	
}