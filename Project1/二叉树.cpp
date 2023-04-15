//#include <iostream>
//#include <string>
//#include <algorithm>
//#include<stack>
//using namespace std;
//
///*定义二叉树的结构*/
//typedef struct Node
//{
//    int data;                    /*数据域*/
//    struct Node* lchild, * rchild; /*左子树和右子树*/
//} *BiTree, BiNode;
///*整棵树和结点名称*/
//
///*先需创建二叉树*/
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
//        root = new BiNode; /*创建一个新节点*/
//        root->data = ch;
//        CreateBiTree(root->lchild);
//        CreateBiTree(root->rchild);
//    }
//}
//
//void InOrderTraverse1(BiTree T)
//{
//    cout << "中序遍历结果如下：" << endl;
//    if (T)
//    {
//        InOrderTraverse1(T->lchild);
//        cout << T->data<<" ";
//        InOrderTraverse1(T->rchild);
//    }
//}
//void InOrderTraverse(BiTree root)
//{
//    cout << "非递归中序遍历结果如下：" << endl;
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
//    cout << "输入数据:";
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
