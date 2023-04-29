//using namespace std;
//#pragma region "м╥нд╪Ч"
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
//
//TreeNode* trimBST(TreeNode* root, int low, int high)
//{
//	if (root==nullptr)
//	{
//		return nullptr;
//	}
//	
//	if (root->val<low)
//	{
//		root->right = trimBST(root->right,low,high);
//		return root->right;
//	}
//	if (root->val>high)
//	{
//		root->left = trimBST(root->left,low,high);
//		return root->left;
//	}
//	root->left = trimBST(root->left, low, high);
//	root->right = trimBST(root->right, low, high);
//
//
//	return root;
//
//
//}
//
//int main()
//{
//
//
//
//	return 0;
//}
