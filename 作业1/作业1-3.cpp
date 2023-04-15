//#include<iostream>
//using namespace std;
//#include<string>
//#include "stdio.h"
//#include "stdlib.h" 
//#include <unordered_set>
//struct Node {
//    int data; // 数据域
//    Node* next; // 指针域
//};
//// 生成一个链表
//Node* createList() {
//    // 创建头节点
//    Node* head = new Node();
//    head->data = -1; // 头节点的数据域可以不存储有效数据
//    head->next = nullptr; // 头节点的指针域初始化为空
//
//    // 创建尾指针，用于插入新节点
//    Node* tail = head;
//
//    // 循环输入数据，直到输入-1为止
//    int x;
//    while (cin >> x) {
//        if (x == -1) break; // 输入-1表示结束
//
//        // 创建新节点，并赋值数据
//        Node* newNode = new Node();
//        newNode->data = x;
//        newNode->next = nullptr;
//
//        // 将新节点插入到尾部，并更新尾指针
//        tail->next = newNode;
//        tail = newNode;
//    }
//
//    // 返回头节点的地址
//    return head;
//}
//Node* Add(Node* p1, Node* p2)
//{
//    Node* cur = p1;
//    Node* pa = p1->next;
//    Node* pb = p2->next;
//    Node* newhead = cur,*temp;
//    while (pa&&pb)
//    {
//        if (pa->data < pb->data)
//        {
//            temp = pa->next;
//            delete pa;
//            pa = temp;
//        }
//        else if (pa->data > pb->data)
//        {
//            temp = pb->next;
//            delete pb;
//            pb = temp;
//        }
//        else
//        {
//            cur->next = pa;
//            cur = pa;
//            pa = pa->next;  
//            temp = pb->next;
//            delete pb;
//            pb = temp;
//        }
//    }
//    if (cur!=NULL)
//    {
//        cur->next = NULL;
//    }
//    else
//    {
//        cur = NULL;
//    }
//
//    return newhead->next;
//
//}
//void Show_ALLNUM(Node* newHead)
//{
//    if (newHead == NULL)
//    {
//        cout << "这个链表为空" << endl;
//        return;
//    }
//    while (newHead)
//    {
//        cout << newHead->data << " ";
//        newHead = newHead->next;
//    }
//    cout << endl;
//}
//int main()
//{
//    Node* p1 = createList();
//    Node* p2 = createList();
//    Show_ALLNUM(Add(p1, p2));
//
//
//    return 0;
//}
//
//
//
//
//
