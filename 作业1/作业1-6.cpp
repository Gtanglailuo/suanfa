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
//int List_Size(Node* newHead)
//{
//    int size = 0;
//    while (newHead)
//    {
//        size++;
//        newHead = newHead->next;
//    }
//
//    return size;
//}
//void Add(Node* p1)
//{
//    Node* cur = p1->next;
//    int temp = cur->data;
//    while (cur)
//    {
//        if (cur->data>=temp)
//        {
//            temp = cur->data;
//        }
//        cur = cur->next;
//    }
//
//    cout << "最大的结点的值为：" << temp<< endl;
//}
//
//int main()
//{
//    Node* p1 = createList();
//    //Node* p2 = createList();
//    Add(p1);
//
//
//    return 0;
//}
//
//
//
//
//
