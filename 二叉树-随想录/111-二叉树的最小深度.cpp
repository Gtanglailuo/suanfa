using namespace std;
#pragma region "ͷ�ļ�"
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
//�ݹ鷨
/*
	��Ⱥ͸߶�����Ĳ�������
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

	//Ϊʲô�ж��أ�
	//ע�⣺����ҵ���ڵ�Ϊ�գ��ҽ�㻹��ֵ�Ļ�����ô�Ҿͻ᷵��1�������ҵĸ߶Ȳ�����1�����ǻ����ҽ���ǲ��ֳ���
	//	   �����Ҿ�Ҫ���������������
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

	cout << "111-����������С���" << endl;




	return 0;
}
