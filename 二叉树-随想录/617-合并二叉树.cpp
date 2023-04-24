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
	核心思路：
	这题给我的感觉就像是遍历二叉树
	前序---可以
	中序---好像也可以
	后序---好像不行
	层序---不行
*/
TreeNode* merge(TreeNode* root1, TreeNode* root2,TreeNode &head)
{	
	//先看看前序遍历
	//如果一个空一个不空
	if (root1==nullptr && root2!=nullptr)
	{
		return root2;
	}
	if (root1 != nullptr && root2 == nullptr)
	{
		return root1;
	}
	//如果都空
	if (root1==nullptr && root2==nullptr)
	{
		return nullptr;
	}
	/*****************************************/
	if (root1->left!=nullptr && root2->left!=nullptr)
	{
		int leftValue = root1->left->val + root2->left->val;
		if (head.left!=nullptr)
		{
			head.left->val = leftValue;
			merge(root1->left, root2->left, head);
		}
	}
	if (root1->right!=nullptr && root2->right!=nullptr)
	{
		int rightValue = root1->right->val + root2->right->val;
		if (head.right!=nullptr)
		{
			head.right->val = rightValue;
			merge(root1->right, root2->right, head);
		}
	}
	return &head;

}
TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) 
{

	TreeNode* head;
	if (root1 == nullptr && root2 != nullptr)
	{
		return root2;
	}
	if (root1 != nullptr && root2 == nullptr)
	{
		return root1;
	}
	//如果都空
	if (root1 == nullptr && root2 == nullptr)
	{
		return nullptr;
	}
	if (root1!=nullptr && root2!=nullptr)
	{
		head = new TreeNode(root1->val+root2->val);
	}
	return merge(root1, root2, *head);

}

int main()
{



	return 0;
}
