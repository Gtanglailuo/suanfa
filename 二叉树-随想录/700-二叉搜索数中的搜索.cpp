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
////������,���ţ
////TreeNode* searchBST(TreeNode* root, int val) 
////{
////	queue<TreeNode*> que;
////	que.push(root);
////	int size = que.size();
////	while (!que.empty())
////	{
////		size = que.size();
////		while (size--)
////		{
////			TreeNode* cur = que.front();
////			que.pop();
////			if (cur->val==val)
////			{
////				return cur;
////			}
////			if (cur->left!=nullptr)
////			{
////				que.push(cur->left);
////
////			}
////			if (cur->right!=nullptr)
////			{
////				que.push(cur->right);
////			}
////		}
////	}
////	return nullptr;
////}
//
//
///*
////�����ǵ�������if�жϵ�ʱ��Ҫд����if����Ϊ���������жϣ����п����ж�3�Σ����Ҿ�Ҫ�ж�һ�ξ����ˣ�
//TreeNode* searchBST(TreeNode* root, int val)
//{
//	while(root!=nullptr)
//	{
//		if(root->val<val)
//		{
//			root=root->right;
//		}
//		else if(root->val>val)
//		{
//			root=root->left;
//		}
//		else if(root->val==val)
//		{
//			return root;
//		}
//	}
//	return nullptr;
//}
//*/
////�ݹ鷨
//TreeNode* searchBST(TreeNode* root, int val) 
//{
//	if (root==nullptr)
//	{
//		return nullptr;
//	}
//	if (root->val==val)
//	{
//		return root;
//	}
//
//	TreeNode* result = nullptr;
//	if (val<root->val)
//	{
//		result=searchBST(root->left,val);
//	}
//	if (val > root->val)
//	{
//		result = searchBST(root->right, val);
//	}
//
//	return result;
//
//
//
//}
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
