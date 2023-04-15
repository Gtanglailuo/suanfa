//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//struct Queue
//{
//    int data;
//    Queue* next;
//};
//struct LinkQueue
//{
//    Queue* front;
//    Queue* rear;
//};
//
//void InitQueue(LinkQueue*q)
//{
//    q->front = new Queue;
//    q->rear = new Queue;
//    q->front = q->rear;
//    if (!q->front)
//    {
//        cout << "开辟空间失败" << endl;
//    }
//    q->front = NULL;
//}
//void EnQueue(LinkQueue*q,int x)
//{
//
//    //在队列的尾部插入元素
//    Queue* p = new Queue;
//    p->data = x;
//    p->next = NULL;
//    if (q->front==NULL)
//    {
//        q->front = p;
//    }
//    q->rear->next = p;
//    q->rear = p;
//}
//void print(LinkQueue q)
//{
//    Queue *p;
//    p = q.front->next;
//    cout << "队列数据：";
//    while (p!=NULL)
//    {
//        cout << p->data << " ";
//        p = p->next;
//    }
//}
//
//void QueueEmpty(LinkQueue q)
//{
//    if (q.front==q.rear)
//    {
//        cout << "空" << endl;
//    }
//    else
//    {
//        cout << "不空" << endl;
//    }
//}
//void QueueLength(LinkQueue q)
//{
//    int x=0;
//    Queue *p;
//    p = q.front->next;
//    while (p!=NULL)
//    {
//        p = p->next;
//        x++;
//    }
//    cout << "长度：" << x << endl;
//}
//void QueueRear(LinkQueue q)
//{
//    cout << q.rear->data << endl;
//}
//void DeQueue(LinkQueue &q)
//{
//    int e;
//    if (q.front==q.rear)
//    {
//        cout << "队列为空" << endl;
//        return;
//    }
//    Queue* p;
//    p = q.front->next;
//    e = p->data;
//    q.front->next = p->next;
//    if (q.rear==p)
//    {
//        q.rear = q.front;
//    }
//    delete p;
//    cout << "出队元素：" << e << endl;
//
//}
////求对头元素但是不删
//void QueueFront(LinkQueue q)
//{
//    cout << q.front->next->data << endl;
//}
//
//void CreateQueue(LinkQueue *q)
//{
//    int e=0;
//    while (e!=-1)
//    {
//        cin >> e;
//        if (e==-1)
//        {
//            break;
//        }
//        EnQueue(q,e);
//    }
//}
//
//void DestoryQueue(LinkQueue *q)
//{
//    Queue* p=q->front->next;
//    Queue* a = p;
//    while (p)
//    {
//        a = p->next;
//        delete p;
//        p = a;
//    }
//
//
//    /*while (q->front->next)
//    {
//        p = q->front;
//        q->front = q->front->next;
//        delete p;
//    }
//    delete q->front;*/
//}
//void ClearQueue(LinkQueue &q)
//{
//    q.rear = q.front->next = NULL;
//
//}
//
//
//int main()
//{
//    LinkQueue q;
//    InitQueue(&q);
//    CreateQueue(&q);
//    //print(q);
//    DestoryQueue(&q);
//    
//    return 0;
//}
//
//
