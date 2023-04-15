#include<iostream>
using namespace std;
#include<string>
#include "stdio.h"
#include "stdlib.h" 
#include <unordered_set>
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* next;
	LTDataType data;
}ListNode;
void Listprint(ListNode* plist)
{
	ListNode* cur = plist->next;
	while (cur != plist)
	{
		cout << cur->data << " ";
		cur = cur->next;
	}
}
ListNode* CreateListNode()
{

	ListNode* myHead = new ListNode;
	myHead->prev = myHead->next = myHead;
	myHead->data = 0;

	int e = 0;
	while (1)
	{
		cin >> e;
		if (e == -1)
		{
			break;
		}
		ListNode* newNode = new ListNode;
		newNode->prev = newNode->next = NULL;
		newNode->data = e;

		ListNode* tail = myHead->prev;

		tail->next = newNode;
		newNode->prev = tail;
		newNode->next = myHead;
		myHead->prev = newNode;
	}

	return myHead;
}
void change(ListNode* plist,int i)
{
	int x = 1;
	ListNode* temp = plist->next;
	while (x<i)
	{
		temp = temp->next;
		x++;
	}
	ListNode* a = temp->prev->prev;
	ListNode* b = temp->next->next;
	ListNode* c = temp->prev;
	ListNode* d = temp->next;

	a->next = d;
	d->prev = a;
	d->next = temp;
	temp->prev = d;

	temp->next = c;
	c->prev = temp;
	c->next = b;
	b->prev = c;

	Listprint(plist);

}




int main()
{

	change(CreateListNode(),5);
   

    return 0;
}





