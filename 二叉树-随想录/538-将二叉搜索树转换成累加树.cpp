using namespace std;
#pragma region "头文件"
#include <iostream>
#include <string>
#include <algorithm>
#include<stack>
#include<queue>
#include <vector>
#include <set>
#include<unordered_set>
#include<unordered_map>
#pragma endregin

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
/*
	我的想法是一个用来固定下标，一个用来遍历整个树



*/
int pre = 0;

void func(TreeNode* cur)
{
	if (cur==nullptr)
	{
		return;
	}
	func(cur->right);

	int temp = cur->val;
	cur->val += pre;
	pre += cur->val;

	func(cur->left);


	return;
}

TreeNode* convertBST(TreeNode* root) 
{
	func(root);

	return root;

}


int main()
{

	// 创建一棵二叉搜索树
	TreeNode* root = new TreeNode(5);
	root->left = new TreeNode(2);
	root->right = new TreeNode(13);






	return 0;
}
