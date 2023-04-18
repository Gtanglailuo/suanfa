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
//������
/*
void traversal(TreeNode* cur, vector<int>& path, vector<vector<int>>& result)
{
	path.push_back(cur->val);
	if (cur->left == nullptr && cur->right == nullptr)
	{
		//��Ҫ���ַ����԰ɣ���ô�Ҿ�Ҫ���ַ���������Ҫ��֤���һ���ַ�������û��->
		result.push_back(path);
		return;
	}
	if (cur->left)
	{
		traversal(cur->left, path, result);
		path.pop_back();//��ѧ����vector�����pop_back����,����л���
	}
	if (cur->right)
	{
		traversal(cur->right, path, result);
		path.pop_back(); 
	}
}
int sum(vector<int> path)
{
	int a = 0;
	for (auto& i : path)
	{
		a += i;
	}
	return a;
}
bool hasPathSum(TreeNode* root, int targetSum) 
{
	vector<vector<int>> result;
	vector<int> path;
	if (root == nullptr)
	{
		return false;
	}
	traversal(root, path, result);


	for (auto& i : result)
	{
		if (targetSum==sum(i))
		{
			return true;
		}
	}

	return false;
}
*/
//�ݹ鷨
bool findPath(TreeNode* root, int count)
{
	if (root==nullptr)
	{
		return false;
	}
	if (root->left==nullptr && root->right==nullptr && count==0)
	{
		return true;
	}
	if (root->left == nullptr && root->right == nullptr && count != 0)
	{
		return false;
	}

	if (root->left!=nullptr)
	{
		count -= root->left->val;
		cout << "�� --- ����" << count << endl;
		if (findPath(root->left, count))
		{
			return true;
		}
		//����ǻ���
		count += root->left->val;
		cout << "�� --- ����" << count << endl;
	}
	if (root->right != nullptr)
	{
		count -= root->right->val;
		cout << "�� --- ����" << count << endl;
		if (findPath(root->right, count))
		{
			return true;
		}
		count += root->right->val;
		cout << "�� --- ����" << count << endl;
	}
	return false;
}
bool hasPathSum(TreeNode* root, int targetSum)
{

	if (root == NULL) 
		return false;


	return findPath(root, targetSum - root->val);
}


int main()
{
	// ����һ�ö�����
	TreeNode* root = new TreeNode(5);
	TreeNode* node1 = new TreeNode(4);
	TreeNode* node2 = new TreeNode(8);
	TreeNode* node3 = new TreeNode(11);
	TreeNode* node4 = new TreeNode(13);
	TreeNode* node5 = new TreeNode(4);
	TreeNode* node6 = new TreeNode(7);
	TreeNode* node7 = new TreeNode(3);
	TreeNode* node8 = new TreeNode(1);

	root->left = node1;
	root->right = node2;
	node1->left = node3;
	node2->left = node4;
	node2->right = node5;
	node3->left = node6;
	node3->right = node7;
	node5->right = node8;

	// ����·�����Ƿ����22
	bool hasPath = hasPathSum(root, 22);
	if (hasPath) {
		cout << "����·��ʹ��·���͵���22" << endl;
	}
	else {
		cout << "������·��ʹ��·���͵���22" << endl;
	}

	// �ͷ��ڴ�
	delete root;
	delete node1;
	delete node2;
	delete node3;
	delete node4;
	delete node5;
	delete node6;
	delete node7;
	delete node8;

	return 0;
}
