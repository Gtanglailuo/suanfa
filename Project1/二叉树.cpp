//#include <iostream>
//#include <string>
//#include <algorithm>
//#include<stack>
//using namespace std;
//
///*����������Ľṹ*/
//typedef struct Node
//{
//    int data;                    /*������*/
//    struct Node* lchild, * rchild; /*��������������*/
//} *BiTree, BiNode;
///*�������ͽ������*/
//
///*���贴��������*/
//void CreateBiTree(BiTree &root)
//{
//    int ch;
//    cin >> ch;
//    if (ch == -1)
//    {
//        root = NULL; return;
//    }
//    else
//    {
//        root = new BiNode; /*����һ���½ڵ�*/
//        root->data = ch;
//        CreateBiTree(root->lchild);
//        CreateBiTree(root->rchild);
//    }
//}
//
//void InOrderTraverse1(BiTree T)
//{
//    cout << "�������������£�" << endl;
//    if (T)
//    {
//        InOrderTraverse1(T->lchild);
//        cout << T->data<<" ";
//        InOrderTraverse1(T->rchild);
//    }
//}
//void InOrderTraverse(BiTree root)
//{
//    cout << "�ǵݹ��������������£�" << endl;
//    stack<BiTree> s;
//    BiTree cur = root;
//    while (cur || !empty(s))
//    {
//        while (cur)
//        {
//            s.push(cur);
//            cur = cur->lchild;
//        }
//        if (!empty(s))
//        {
//            cur = s.top();
//            s.pop();
//
//            cout << cur->data << " ";
//            cur = cur->rchild;
//        }
//    }
//}
//int main()
//{
//    BiTree T;
//    cout << "��������:";
//    //1 2 -1 -1 4 5 -1 -1 -1
//    CreateBiTree(T);
//    InOrderTraverse1(T);
//    cout << endl;
//    InOrderTraverse(T);
//
//
//
// 
//    return 0;
//}
