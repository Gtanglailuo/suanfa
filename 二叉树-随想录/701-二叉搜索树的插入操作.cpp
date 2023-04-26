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
//
//void func(TreeNode* root, int val)
//{
//	//中左右，前序遍历
//	if (root==nullptr)
//	{
//		return;
//	}
//	if (root->left==nullptr&&val<root->val)
//	{
//		TreeNode* left = new TreeNode(val);
//		root->left = left;
//		return;
//	}
//	if (root->right == nullptr && val > root->val)
//	{
//		TreeNode* right = new TreeNode(val);
//		root->right = right;
//		return;
//	}
//
//	if (val<root->val)
//	{
//		func(root->left,val);
//	}
//
//	if (val>root->val)
//	{
//		func(root->right,val);
//	}
//}
//TreeNode* insertIntoBST(TreeNode* root, int val) 
//{
//	TreeNode* head = root;
//	if (root==nullptr)
//	{
//		TreeNode* cur = new TreeNode(val);
//		return cur;
//	}
//	func(root,val);
//	return head;
//}
//
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
