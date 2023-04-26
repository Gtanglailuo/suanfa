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
//TreeNode* pre = nullptr;
//void func(TreeNode* root, int& min)
//{
//	if (root == nullptr)
//	{
//		return;
//	}
//
//	func(root->left, min);
//	//我把它放在这里是有作用的，判定完之后再更改这个值
//	if (pre != nullptr)
//	{
//		if (min >= abs(root->val - pre->val))
//		{
//			min = abs(root->val - pre->val);
//		}
//
//	}
//	if (pre != nullptr && pre->val >= root->val)
//	{
//		return;
//	}
//	else
//	{
//		pre = root;
//	}
//	//这行代码是用来回调的
//	func(root->right, min);
//
//	return;
//}
//int getMinimumDifference(TreeNode* root)
//{
//	int min;
//	if (root->left == nullptr && root->right == nullptr)
//	{
//		return root->val;
//	}
//	if (root->left != nullptr && root->right == nullptr)
//	{
//		min = root->val - root->left->val;
//	}
//	if (root->left == nullptr && root->right != nullptr)
//	{
//		min = root->right->val - root->val;
//	}
//	if (root->left != nullptr && root->right != nullptr)
//	{
//		min = root->right->val - root->val;
//	}
//	func(root, min);
//	return min;
//}
//int main()
//{
//
//
//
//	return 0;
//}
