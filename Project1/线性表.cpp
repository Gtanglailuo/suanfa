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
//
//// 生成一个链表
//Node* createList() {
//    // 创建头节点
//    Node* head = new Node();
//    head = NULL;
//    Node* s = head;
//    // 循环输入数据，直到输入-1为止
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
////在下标为n的前面插入数据
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
////显示链表所有的数据
//void Show_ALLNUM(Node* newHead)
//{
//    if (newHead==NULL)
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
////记录链表中所有元素的个数
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
////删除下标为i的结点
//bool delete_Date(Node* newHead,int i)
//{
//    Node* p = newHead,*q;
//    if (i<0 || i>List_Size(newHead)-1)
//    {
//        cout << "下标不在标准范围内" << endl;
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
////删除从下表为i开始的k个结点
//Node* delete_FromItoNum(Node* newHead,int i,int k)
//{
//    Node*q=new Node();
// 
//    if (i+k> List_Size(newHead))
//    {
//        cout << i << "+" << k << "已经超过链表中元素的个数(" << List_Size(newHead) << ")" << endl;
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
////写出下标为i的元素的前驱和后驱
//void find_ForwardAndBack(Node* newHead, int i)
//{
//    if (i==0)
//    {
//        cout << "前驱元素:" << "无  " << "后驱元素:" << newHead->next->data << endl;
//    }
//    else if (i== List_Size(newHead))
//    {
//        int j = 0; while (j<i-1)
//        {
//            newHead = newHead->next;
//            j++;
//        }
//        cout << "前驱元素:" << newHead->data << "  " << "后驱元素:" << "无" << endl;
//    }
//    else
//    {
//        int m = 0;
//        while (m<i-1)
//        {
//            newHead = newHead->next;
//            m++;
//        }
//        cout << "前驱元素:" << newHead->data << "  后驱元素:" << newHead->next->next->data << endl;
//
//    }
//    
//
//}
//// 删除无序链表中的重复元素
//void delete_DuplicatesNum(Node* newHead)
//{
//    if (newHead==NULL||newHead->next==NULL)
//    {
//        cout << "链表为空" << endl;
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
////将两个链表(链表中的元素也是从小到大排列,无头结点)的元素按从小到大的顺序合并在一起
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
//    cout << "我输入的数字" << endl;
//    Node* p = createList();
//    cout << "原始数据" << endl;
//    Show_ALLNUM(p);
//    Node* q = p;
//    //cout << "我输入的数字" << endl;
//    //Node* p1 = createList();
//    //cout << "原始数据" << endl;
//    //Show_ALLNUM(p1);
//
//    //Show_ALLNUM(combine_TwoList(p,p1));
//
//    /*cout << "添加数字之后的数据" << endl;
//    Insert_Num(q, 2, 100);
//    Show_ALLNUM(q);
//
//    cout << "我删除某个小标之后" << endl;
//    if (delete_Date(q,3))
//    {
//        Show_ALLNUM(q);
//    }
//
//    cout << "寻找下标为i的元素前驱和后驱" << endl;
//    find_ForwardAndBack(q, 2);
//
//    cout << "删除单链表中值相同多余的结点" << endl;
//    delete_DuplicatesNum(q);
//    Show_ALLNUM(q);
//
//    cout << "删除从下表为i开始的k个结点" << endl;
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
//执行完 fun函数后，指针s是否会释放？
//
//S已经被释放，但内存没有收回。内存泄露！
//说白了：就是S这个变量被删除了，不能再使用了，但它申请的那快内存切还是有效的，可以使用。但是拿什么去使用它？（S都没有了）。
//可以在后面加return s（当然函数的void要改掉，然后用个变量去接受传回来的内存地址！）
//
//*/