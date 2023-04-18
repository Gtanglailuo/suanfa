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
//����������������ĵ���һ�����
int sumOfLeftLeaves(TreeNode* root) 
{
	queue<TreeNode*> que;
	int sum = 0;
	if (root==nullptr)
	{
		return sum;
	}
	que.push(root);
	int size = que.size();

	while (!que.empty())
	{
		size = que.size();
		while (size--)
		{
			TreeNode* temp = que.front();
			que.pop();
			if (temp->left!=nullptr)
			{
				que.push(temp->left);
				if (temp->left->left==nullptr && temp->left->right==nullptr)
				{
					sum += temp->left->val;
				}
			}
			if (temp->right!=nullptr)
			{
				que.push(temp->right);
			}
		}
	}
	return sum;
}
//�ݹ鷨
/*
	�ݹ�������ڵ�       ����ֵ���÷�֧����ڵ�
	��ֹ���������ýڵ����ڵ����ڵ�==��  &&  �ýڵ����ڵ���ҽ��==�գ�|| �ڵ�==��
	����ݹ��߼����ڴ����У����жϵ�ǰ�����û�������ӽ�㡣��������ӣ�����������ӵ����Һ����ǿյģ�������������
	��ֵ��

	
*/
int sumOfLeftLeaves1(TreeNode* root)
{
	if (root==nullptr)
	{
		return 0;
	}
	if (root->left==nullptr && root->right==nullptr)
	{
		return 0;
	}

	int left = sumOfLeftLeaves1(root->left);
	if (root->left!=nullptr && root->left->left==nullptr && root->left->right==nullptr)
	{
		left = root->left->val;
	}
	int right = sumOfLeftLeaves1(root->right);

	int sum = left + right;
	return sum;

}
int main()
{
	// ����һ�ö�����
	TreeNode* root = new TreeNode(3);
	TreeNode* node1 = new TreeNode(9);
	TreeNode* node2 = new TreeNode(20);
	TreeNode* node3 = new TreeNode(15);
	TreeNode* node4 = new TreeNode(7);

	root->left = node1;
	root->right = node2;
	node2->left = node3;
	node2->right = node4;

	// ������Ҷ��֮��

	int sum = sumOfLeftLeaves1(root);
	cout << "��Ҷ��֮��Ϊ��" << sum << endl;

	// �ͷ��ڴ�
	delete root;
	delete node1;
	delete node2;
	delete node3;
	delete node4;

	return 0;



}
