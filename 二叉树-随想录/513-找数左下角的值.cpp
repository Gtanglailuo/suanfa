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
////给定一个二叉树的 根节点 root，请找出该二叉树的 最底层 最左边 节点的值。
//
//int maxDepth(TreeNode* root)
//{
//	if (root==nullptr)
//	{
//		return 0;
//	}
//	int left = maxDepth(root->left);
//	int right = maxDepth(root->right);
//	return 1 + max(left,right);
//}
//int findBottomLeftValue(TreeNode* root)
//{
//	int length = maxDepth(root);
//	queue<TreeNode*> que;
//	int sum = 0;
//	if (root == nullptr)
//	{
//		return sum;
//	}
//	que.push(root);
//	int size = que.size();
//
//	while (!que.empty())
//	{
//		length--;
//		size = que.size();
//
//		while (size--)
//		{
//			TreeNode* temp = que.front();
//			if (length == 0)
//			{
//				return temp->val;
//			}
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
//	return sum;
//}
//
//int main()
//{
//
//
//
//	return 0;
//}
