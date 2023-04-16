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
////递归法
///*
//	参数：   结点（左右结点）         返回值：左右结点的个数和
//	终止条件：结点为空
//	单层逻辑：当前结点=左右结点之和（如果左右结点为空，我就返回0，如果左右结点不为空，我就返回左右结点的和（这就已经开始套娃））
//*/
//int countNodes(TreeNode* root)
//{
//	if (root == nullptr)
//	{
//		return 0;
//	}
//	int left = countNodes(root->left);
//	int right = countNodes(root->right);
//	return left + right + 1;
//}
//
//
//
//int main() {
//
//	cout << "222-完全二叉树的结点个数" << endl;
//
//
//
//
//
//	return 0;
//}
