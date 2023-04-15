//#include<iostream>
//using namespace std;
//#include<string>
//#include "stdio.h"
//#include "stdlib.h" 
//#include <unordered_set>
//typedef int LTDataType;
//typedef struct ListNode
//{
//	struct ListNode* prev;
//	struct ListNode* next;
//	LTDataType data;
//}ListNode;
//void Listprint(ListNode* plist)
//{
//	ListNode* cur = plist->next;
//	while (cur != plist)
//	{
//		cout << cur->data << " ";
//		cur = cur->next;
//	}
//}
//ListNode* CreateListNode()
//{
//
//	ListNode* myHead = new ListNode;
//	myHead->prev = myHead->next = myHead;
//	myHead->data = 0;
//
//	int e = 0;
//	while (1)
//	{
//		cin >> e;
//		if (e==-1)
//		{
//			break;
//		}
//		ListNode* newNode = new ListNode;
//		newNode->prev = newNode->next = NULL;
//		newNode->data = e;
//
//		ListNode* tail = myHead->prev;
//
//		tail->next = newNode;
//		newNode->prev = tail;
//		newNode->next = myHead;
//		myHead->prev = newNode;
//	}
//
//	return myHead;
//}
//
//
//int main()
//{
//	Listprint(CreateListNode());
//
//
//    return 0;
//}
//
//
//
//
//
