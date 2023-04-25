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
///*
//	核心思路：
//	这题给我的感觉就像是遍历二叉树
//	前序---可以
//	中序---好像也可以
//	后序---好像不行
//	层序---不行
//*/
//
//TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) 
//{
//	if (root1==nullptr)
//	{
//		return root2;
//	}
//	if (root2==nullptr)
//	{
//		return root1;
//	}
//	//前序遍历
//	root1->val += root2->val;
//	root1->left = mergeTrees(root1->left,root2->left);
//	root1->right = mergeTrees(root1->right, root2->right);
//
//	return root1;
//}
//
//int main()
//{
//
//
//
//	return 0;
//}
