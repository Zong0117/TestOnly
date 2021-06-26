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
	NODE* head; //ͷ
public:
	LIST() { head = new NODE; head->next = nullptr; } //��������
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
		NODE* temp = new NODE;	//�����½ڵ�
		temp->data = data;
		temp->next = head->next;
		head->next = temp;
}
void LIST::Insert(int data)	//β��
{
	NODE* temp = new NODE;
	temp->data = data;	//��ֵ
	NODE* p = head;		//p��headָ����ͬ
	while (p->next)		//���p.next��Ϊ��ѭ���ҵ����һ��
	{
		p = p->next;	
	}
	p->next = temp;		//�ҵ����һ��ָ��temp
	temp->next = nullptr;
}
void LIST::Insert(int data, int n)	//�м��
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
	cout << "��ǰ����Ϊ��";
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