//#include<iostream>
//using namespace std;
//#include<string>
//#include "stdio.h"
//#include "stdlib.h" 
//#include <unordered_set>
//struct Node {
//    int data; // ������
//    Node* next; // ָ����
//};
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
//void Show_ALLNUM(Node* newHead)
//{
//    if (newHead == NULL)
//    {
//        cout << "�������Ϊ��" << endl;
//        return;
//    }
//    while (newHead)
//    {
//        cout << newHead->data << " ";
//        newHead = newHead->next;
//    }
//    cout << endl;
//}
//// ����һ������
//Node* createList() {
//    // ����ͷ�ڵ�
//    Node* head = new Node();
//    head->data = -1; // ͷ�ڵ����������Բ��洢��Ч����
//    head->next = nullptr; // ͷ�ڵ��ָ�����ʼ��Ϊ��
//
//    // ����βָ�룬���ڲ����½ڵ�
//    Node* tail = head;
//
//    // ѭ���������ݣ�ֱ������-1Ϊֹ
//    int x;
//    while (cin >> x) {
//        if (x == -1) break; // ����-1��ʾ����
//
//        // �����½ڵ㣬����ֵ����
//        Node* newNode = new Node();
//        newNode->data = x;
//        newNode->next = nullptr;
//
//        // ���½ڵ���뵽β����������βָ��
//        tail->next = newNode;
//        tail = newNode;
//    }
//
//    // ����ͷ�ڵ�ĵ�ַ
//    return head;
//}
//void Add(Node* p1, Node* p2)
//{
//    unordered_set<int> s;
//    Node* pb = p2->next;
//    while (pb)
//    {
//        s.insert(pb->data);
//        pb = pb->next;
//    }
//
//    Node* pa = p1->next;
//    Node* temp = p1;
//    while (pa)
//    {
//        if (s.find(pa->data) != s.end())
//        {
//            temp->next = pa->next;
//            delete pa;
//            pa = temp->next;
//        }
//        else
//        {
//            temp = temp->next;
//            pa = pa->next;
//        }
//    }
//    cout << "Ԫ�����£�" << endl;
//    Show_ALLNUM(p1->next);
//    cout << "Ԫ�ظ������£�" << List_Size(p1->next) <<endl;
//}
//
//int main()
//{
//    Node* p1 = createList();
//    Node* p2 = createList();
//    Add(p1, p2);
//
//
//    return 0;
//}
//
//
//
//
//
