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
//struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//TreeNode* deleteNode(TreeNode* root, int key) 
//{
//	if (root==nullptr)
//	{
//		return nullptr;
//	}
//
//	if (root->val==key)
//	{
//		if (root->left==nullptr && root->right==nullptr)
//		{
//			delete root;
//			return nullptr;
//		}
//		else if (root->left!=nullptr && root->right==nullptr)
//		{
//			auto retNode = root->left;
//			delete root;
//			return retNode;
//		}
//		else if (root->left == nullptr && root->right != nullptr)
//		{
//
//			auto retNode = root->right;
//			delete root;
//			return retNode;
//		}
//		else
//		{
//			/*
//				�ҵ���Ҫɾ���Ľڵ㣬ȥѰ������ڵ���ҽ�㣬Ȼ���������ҽ�����ڵ㣬һֱ������ȥ
//				�ҵ��������ߵ���ڵ㣬Ȼ�������ڵ����߾���Ҫɾ���Ľڵ��������
//			*/
//
//			TreeNode* cur = root->right;
//			while (cur->left!=nullptr)
//			{
//				cur = cur->left;
//			}
//			cur->left = root->left;
//
//			TreeNode* tmp = root;
//			root = root->right;
//			delete tmp;
//			return root;
//		}
//	}
//	if (key < root->val)
//	{
//		root->left = deleteNode(root->left, key);
//	}
//	if (key > root->val)
//	{
//		root->right = deleteNode(root->right, key);
//	}
//	return root;
//}
//
//
//
//
//
//int main()
//{
//
//
//
//	return 0;
//}
