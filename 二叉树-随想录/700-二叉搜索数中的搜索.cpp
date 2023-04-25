//using namespace std;
//#pragma region "头文件"
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
////迭代法,真的牛
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
////依旧是迭代法（if判断的时候不要写三个if，因为他会连续判断，就有可能判断3次，而我就要判断一次就行了）
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
////递归法
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
