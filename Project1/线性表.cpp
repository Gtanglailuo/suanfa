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
//
//// ����һ������
//Node* createList() {
//    // ����ͷ�ڵ�
//    Node* head = new Node();
//    head = NULL;
//    Node* s = head;
//    // ѭ���������ݣ�ֱ������-1Ϊֹ
//    int x;
//    while (1) {
//        cin >> x;
//        if (x==-1)
//        {
//            break;
//        }
//        Node* newNode = new Node();
//        newNode->data = x;
//        newNode->next = NULL;
//        if (head==NULL)
//        {
//            head = newNode;
//            s = head;
//        }
//        else
//        {
//            s->next = newNode;
//            s = newNode;
//        }    
//    }
//    return head;
//}
////���±�Ϊn��ǰ���������
//void Insert_Num(Node*newHead,int n,int num)
//{
//    Node* p = newHead;
//    Node* q;
//    Node* temp = new Node();
//    temp->data = num;
//    temp->next = NULL;
//    int i = 0;
//    while (i<n-1)
//    {
//        p = p->next;
//        i++;
//    }
//    q = p->next;
//    temp->next = q;
//    p->next = temp;
//}
////��ʾ�������е�����
//void Show_ALLNUM(Node* newHead)
//{
//    if (newHead==NULL)
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
////��¼����������Ԫ�صĸ���
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
////ɾ���±�Ϊi�Ľ��
//bool delete_Date(Node* newHead,int i)
//{
//    Node* p = newHead,*q;
//    if (i<0 || i>List_Size(newHead)-1)
//    {
//        cout << "�±겻�ڱ�׼��Χ��" << endl;
//        return false;
//    }
//    int j = 0;
//    while (j<i-1)
//    {
//        p = p->next;
//        j++;
//    }
//    q = p->next;
//    p->next = q->next;
//    delete q;
//    return true;
//}
////ɾ�����±�Ϊi��ʼ��k�����
//Node* delete_FromItoNum(Node* newHead,int i,int k)
//{
//    Node*q=new Node();
// 
//    if (i+k> List_Size(newHead))
//    {
//        cout << i << "+" << k << "�Ѿ�����������Ԫ�صĸ���(" << List_Size(newHead) << ")" << endl;
//        return NULL;
//    }
//    int m = 0, n = 0;
//    if (i!=0)
//    {
//        while (m < i - 1)
//        {
//            newHead = newHead->next;
//            m++;
//        }
//
//        while (n<k)
//        {
//            q = newHead->next;
//            newHead->next = q->next;
//            delete q;
//            n++;
//        }
//    }
//    if (i==0)
//    {
//        
//        while (n<k)
//        {
//            q = newHead->next;
//            delete newHead;
//            newHead = q;
//            n++;
//        }
//    }
//
//    return newHead;
//}
////д���±�Ϊi��Ԫ�ص�ǰ���ͺ���
//void find_ForwardAndBack(Node* newHead, int i)
//{
//    if (i==0)
//    {
//        cout << "ǰ��Ԫ��:" << "��  " << "����Ԫ��:" << newHead->next->data << endl;
//    }
//    else if (i== List_Size(newHead))
//    {
//        int j = 0; while (j<i-1)
//        {
//            newHead = newHead->next;
//            j++;
//        }
//        cout << "ǰ��Ԫ��:" << newHead->data << "  " << "����Ԫ��:" << "��" << endl;
//    }
//    else
//    {
//        int m = 0;
//        while (m<i-1)
//        {
//            newHead = newHead->next;
//            m++;
//        }
//        cout << "ǰ��Ԫ��:" << newHead->data << "  ����Ԫ��:" << newHead->next->next->data << endl;
//
//    }
//    
//
//}
//// ɾ�����������е��ظ�Ԫ��
//void delete_DuplicatesNum(Node* newHead)
//{
//    if (newHead==NULL||newHead->next==NULL)
//    {
//        cout << "����Ϊ��" << endl;
//        return;
//    }
//    unordered_set<int> visited;
//    Node* pre = newHead;
//    Node* curr = newHead->next;
//    visited.insert(newHead->data);
//    while (curr)
//    {
//        if (visited.count(curr->data))
//        {
//            Node* temp = curr;
//            pre->next = curr->next;
//            delete temp;
//
//        }
//        else
//        {
//            visited.insert(curr->data);
//            pre = pre->next;
//        }
//        curr = pre->next;
//    }
//
//}
//
////����������(�����е�Ԫ��Ҳ�Ǵ�С��������,��ͷ���)��Ԫ�ذ���С�����˳��ϲ���һ��
//Node* combine_TwoList(Node *newHead1,Node *newHead2)
//{
//    Node* dummy=new Node;
//    dummy->data = 0;
//    dummy->next = NULL;
//    Node* cur= dummy;
//    while (newHead1!=NULL && newHead2!= NULL)
//    {
//        if (newHead1->data<=newHead2->data)
//        {
//            cur->next= newHead1;
//            newHead1 = newHead1->next;
//        }
//        else
//        {
//            cur->next = newHead2;
//            newHead2 = newHead2->next;
//        }
//        cur = cur->next;
//    }
//    if (newHead1!=NULL)
//    {
//        cur->next = newHead1;
//    }
//    if (newHead2!=NULL)
//    {
//        cur->next = newHead2;
//    }
//    return dummy->next;
//}
//
//
//int main()
//{
//    cout << "�����������" << endl;
//    Node* p = createList();
//    cout << "ԭʼ����" << endl;
//    Show_ALLNUM(p);
//    Node* q = p;
//    //cout << "�����������" << endl;
//    //Node* p1 = createList();
//    //cout << "ԭʼ����" << endl;
//    //Show_ALLNUM(p1);
//
//    //Show_ALLNUM(combine_TwoList(p,p1));
//
//    /*cout << "�������֮�������" << endl;
//    Insert_Num(q, 2, 100);
//    Show_ALLNUM(q);
//
//    cout << "��ɾ��ĳ��С��֮��" << endl;
//    if (delete_Date(q,3))
//    {
//        Show_ALLNUM(q);
//    }
//
//    cout << "Ѱ���±�Ϊi��Ԫ��ǰ���ͺ���" << endl;
//    find_ForwardAndBack(q, 2);
//
//    cout << "ɾ����������ֵ��ͬ����Ľ��" << endl;
//    delete_DuplicatesNum(q);
//    Show_ALLNUM(q);
//
//    cout << "ɾ�����±�Ϊi��ʼ��k�����" << endl;
//    Show_ALLNUM(delete_FromItoNum(q, 0, 2));*/
//
//    
//
//	return 0;
//}
//
//
//
///*
//
//
//void fun()
//{
//char* s = (char*)malloc(100);
//}
//
//ִ���� fun������ָ��s�Ƿ���ͷţ�
//
//S�Ѿ����ͷţ����ڴ�û���ջء��ڴ�й¶��
//˵���ˣ�����S���������ɾ���ˣ�������ʹ���ˣ�����������ǿ��ڴ��л�����Ч�ģ�����ʹ�á�������ʲôȥʹ��������S��û���ˣ���
//�����ں����return s����Ȼ������voidҪ�ĵ���Ȼ���ø�����ȥ���ܴ��������ڴ��ַ����
//
//*/