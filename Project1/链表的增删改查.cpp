//#include <iostream>
//#include <string>
//#include <algorithm>
//#include<stack>
//#include <vector>
//#include <set>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* next;
//};
////创建节点
//Node* CreateNode()
//{
//	Node* head = new Node;
//	head->data = 0;
//	head->next = NULL;
//
//	Node* cur = head;
//
//	int x;
//	while (1)
//	{
//		cin >> x;
//		if (x==-1)
//		{
//			break;
//		}
//		Node* m = new Node;
//		m->data = x;
//		m->next = NULL;
//
//		cur->next = m;
//		cur = m;
//	}
//	return head;
//}
////获取链表的长度
//int Length(Node* head)
//{
//	int m = 0;
//	Node* cur = head;
//	while (cur)
//	{
//		cur = cur->next;
//		m++;
//	}
//	return m;
//}
////增加节点(在下标为i的后边插入一个数据x)
//void Add(Node* head,int i,int x)
//{
//	if (i>Length(head)-1 || i<0)
//	{
//		cout << "超出范围" << endl;
//		return;
//	}
//
//
//	Node* temp = new Node;
//	temp->data = x;
//	temp->next = NULL;
//	int m = 0;
//	Node* p = head;
//	while (m<i)
//	{
//		p = p->next;
//		m++;
//	}
//
//	temp->next = p->next;
//	p->next = temp;
//}
////删除下标为i的结点
//void Delete(Node* head, int i)
//{
//	if (i > Length(head) - 1 || i<0)
//	{
//		cout << "超出范围" << endl;
//		return;
//	}
//	int m = 0;
//	Node* p = head;
//	while (m < i-1)
//	{
//		p = p->next;
//		m++;
//	}
//	Node* temp = p->next;
//	p->next = temp->next;
//	delete temp;
//}
////改变下标为i的结点的值
//void Change(Node* head, int i, int x)
//{
//	int m = 0;
//	Node* p = head;
//	while (m < i)
//	{
//		p = p->next;
//		m++;
//	}
//	p->data = x;
//}
////查找下标为i的结点的值
//void Find(Node* head, int i)
//{
//	if (i > Length(head) - 1 || i<0)
//	{
//		cout << "超出范围" << endl;
//		return;
//	}
//
//	int m = 0;
//	Node* p = head;
//	while (m < i)
//	{
//		p = p->next;
//		m++;
//	}
//	cout << "值为：" << p->data << endl;
//}
//void Show(Node* head)
//{
//	Node* p = head->next;
//	while (p)
//	{
//		cout << p->data << " ";
//		p = p->next;
//	}
//}
//int main() {
//	Node* p = CreateNode();
//	cout << "原始数据："<<endl;
//	Show(p);
//	cout << endl;
//	cout << "增"<<endl;
//	Add(p,2,100);
//	Show(p);
//	cout << endl;
//	cout << "删"<<endl;
//	Delete(p,5);
//	Show(p);
//	cout << endl;
//	cout << "改"<<endl;
//	Change(p,3,56);
//	Show(p);
//	cout << endl;
//	cout << "查"<<endl;
//	Find(p,4);
//
//	return 0;
//}
