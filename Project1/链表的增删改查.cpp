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
////�����ڵ�
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
////��ȡ����ĳ���
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
////���ӽڵ�(���±�Ϊi�ĺ�߲���һ������x)
//void Add(Node* head,int i,int x)
//{
//	if (i>Length(head)-1 || i<0)
//	{
//		cout << "������Χ" << endl;
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
////ɾ���±�Ϊi�Ľ��
//void Delete(Node* head, int i)
//{
//	if (i > Length(head) - 1 || i<0)
//	{
//		cout << "������Χ" << endl;
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
////�ı��±�Ϊi�Ľ���ֵ
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
////�����±�Ϊi�Ľ���ֵ
//void Find(Node* head, int i)
//{
//	if (i > Length(head) - 1 || i<0)
//	{
//		cout << "������Χ" << endl;
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
//	cout << "ֵΪ��" << p->data << endl;
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
//	cout << "ԭʼ���ݣ�"<<endl;
//	Show(p);
//	cout << endl;
//	cout << "��"<<endl;
//	Add(p,2,100);
//	Show(p);
//	cout << endl;
//	cout << "ɾ"<<endl;
//	Delete(p,5);
//	Show(p);
//	cout << endl;
//	cout << "��"<<endl;
//	Change(p,3,56);
//	Show(p);
//	cout << endl;
//	cout << "��"<<endl;
//	Find(p,4);
//
//	return 0;
//}
