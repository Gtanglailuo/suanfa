//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//struct Queue
//{
//    int front, rear;//头和尾
//    int* value;
//    int MaxSize;
//};
//Queue* CreateQueue(int num)
//{
//    Queue* q = new Queue;
//    q->value = new int[num];
//    q->front = q->rear = 0;
//    return q;
//}
////判断队满
//bool QueueFull(Queue*q)
//{
//    return q->rear -q->front==q->MaxSize;
//}
////判断队空
//bool QueueEmpty(Queue *q)
//{
//    return q->front == q->rear;
//}
////入队操作
//void EnQueue(Queue* q,int x)
//{
//    if (QueueFull(q))
//    {
//        cout << "队列已满" << endl;
//        return;
//    }
//    q->value[q->rear] = x;
//    q->rear = q->rear + 1;
//}
////出队操作
//int DeQueue(Queue* q)
//{
//    if (QueueEmpty(q))
//    {
//        cout << "队列为空，我将返回0" << endl;
//        return 0;
//    }
//    int x = q->value[q->front];
//    q->front = q->front + 1;
//    return x;
//}
//void show(Queue* q)
//{
//    cout << "队列的数据：";
//    while (q->front<q->rear)
//    {
//        cout << q->value[q->front++] << " ";
//    }
//
//}
//int main()
//{
//    Queue* q = CreateQueue(100);
//    EnQueue(q, 1);
//    EnQueue(q, 2);
//    EnQueue(q, 3);
//    EnQueue(q, 4);
//    EnQueue(q, 5);
//    cout <<"出队元素："<< DeQueue(q) << endl;
//    show(q);
//
//
//
//    return 0;
//}
//
//
