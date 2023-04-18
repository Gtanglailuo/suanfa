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
////迭代法（我真他马的吊，一遍过）
//int sumOfLeftLeaves(TreeNode* root) 
//{
//	queue<TreeNode*> que;
//	int sum = 0;
//	if (root==nullptr)
//	{
//		return sum;
//	}
//	que.push(root);
//	int size = que.size();
//
//	while (!que.empty())
//	{
//		size = que.size();
//		while (size--)
//		{
//			TreeNode* temp = que.front();
//			que.pop();
//			if (temp->left!=nullptr)
//			{
//				que.push(temp->left);
//				if (temp->left->left==nullptr && temp->left->right==nullptr)
//				{
//					sum += temp->left->val;
//				}
//			}
//			if (temp->right!=nullptr)
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
