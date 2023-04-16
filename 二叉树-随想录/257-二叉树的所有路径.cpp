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
/*
	�ݹ�������ڵ�               ����ֵ��ֵ
	��ֹ���������ҽڵ�Ϊ��
	����ݹ��߼���

*/
void traversal(TreeNode* cur, vector<int>& path, vector<string>& result)
{
	path.push_back(cur->val);
	if (cur->left == nullptr && cur->right == nullptr)
	{
		//��Ҫ���ַ����԰ɣ���ô�Ҿ�Ҫ���ַ���������Ҫ��֤���һ���ַ�������û��->
		string sPath;
		for (int i = 0; i < path.size() - 1; i++)
		{
			sPath += to_string(path[i]);
			sPath += "->";
		}
		sPath += to_string(path[path.size() - 1]);
		//Ȼ������Ž���������
		result.push_back(sPath);
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

vector<string> binaryTreePaths(TreeNode* root)
{
	vector<string> result;
	vector<int> path;
	if (root == nullptr)
	{
		return result;
	}
	traversal(root, path, result);
	return result;
}
int main()
{



	return 0;
}
