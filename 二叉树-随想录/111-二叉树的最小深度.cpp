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


int main() {

	cout << "111-二叉树的最小深度" << endl;




	return 0;
}
