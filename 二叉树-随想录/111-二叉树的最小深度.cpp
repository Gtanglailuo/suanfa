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


int minDepth(TreeNode * root)
{
	if (root == nullptr)
	{
		return 0;
	}
	queue<TreeNode*> que;
	int count = 0;
	que.push(root);
	int size = que.size();

	while (!que.empty())
	{
		count++;
		size = que.size();
		while (size--)
		{
			TreeNode* temp = que.front();
			que.pop();
			if (temp->left != nullptr)
			{
				que.push(temp->left);

				if (temp->left->left == nullptr && temp->left->right == nullptr)
				{
					return count + 1;
				}
			}
			if (temp->right != nullptr)
			{
				que.push(temp->right);

				if (temp->right->left == nullptr && temp->right->right == nullptr)
				{
					return count + 1;
				}
			}
		}
	}
	return count;
}
//递归法
/*
	深度和高度区别的博客文章
	https://www.cnblogs.com/jianglinliu/p/11197715.html
*/
int minDepth1(TreeNode* root)
{
	if (root==nullptr)
	{
		return 0;
	}
	int left = minDepth1(root->left);
	int right = minDepth1(root->right);

	//为什么判断呢？
	//注意：如果我的左节点为空，右结点还有值的话，那么我就会返回1，但是我的高度并不是1，而是会在右结点那部分出现
	//	   所以我就要避免这种情况出现
	if (root->left ==nullptr && root->right != nullptr)
	{
		return 1 + right;
	}
	if (root->right==nullptr && root->left != nullptr)
	{
		return 1 + left;
	}
	return 1 + min(left,right);
}





int main() {

	cout << "111-二叉树的最小深度" << endl;




	return 0;
}
