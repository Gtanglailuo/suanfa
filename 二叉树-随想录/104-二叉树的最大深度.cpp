//using namespace std;
//#pragma region "ͷ�ļ�"
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include<stack>
//#include<queue>
//#include <vector>
//#include <set>
//#include<unordered_set>
//#include<unordered_map>
//#pragma endregin
//
//struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
////������
///*
//	˼·����Ȼ����Ҫ����������ȣ���ֻҪ֪�����ж��ٲ�Ϳ����ˣ���ʱ��������Ŀ���ʵ�֡�
//	���������˼·�����ö�����ʵ�ֵ�,Ȼ���ö��е�Ԫ�ظ������Ը�����
//*/
//int maxDepth1(TreeNode* root)
//{
//	if (root==nullptr)
//	{
//		return 0;
//	}
//	int count = 0;
//
//	//�����������
//	queue<TreeNode*> que;
//	que.push(root);
//	int size = que.size();
//
//	while (!que.empty())
//	{
//		size = que.size();
//		count++;
//		while (size--)
//		{
//			TreeNode* temp = que.front();
//			que.pop();
//			if (temp->left != nullptr)
//			{
//				que.push(temp->left);
//			}
//			if (temp->right != nullptr)
//			{
//				que.push(temp->right);
//			}
//		}
//	}
//	return count;
//}
//
////�ݹ鷨
///*
//	������   ��㣨���ҽ�㣩         ����ֵ�����ҽ������ֵ
//	��ֹ���������Ϊ��
//	�����߼�����ǰ���=���ҽ�������ģ�������ҽ��Ϊ�գ��Ҿͷ���0��������ҽ�㲻Ϊ�գ��Ҿͷ������ҽ�����ģ�����Ѿ���ʼ���ޣ���
//	������Ϊ�գ��ͷ���0
//*/
//int maxDepth2(TreeNode* root)
//{
//
//	if (root==nullptr)
//	{
//		return 0;
//	}
//	int left = maxDepth2(root->left);
//	int right = maxDepth2(root->right);
//	return 1 + max(left,right);
//	
//}
//
//
//
//int main() {
//
//
//
//
//
//
//
//	return 0;
//}
