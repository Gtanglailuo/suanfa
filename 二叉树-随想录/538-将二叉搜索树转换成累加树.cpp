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
	�ҵ��뷨��һ�������̶��±꣬һ����������������



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

	// ����һ�ö���������
	TreeNode* root = new TreeNode(5);
	root->left = new TreeNode(2);
	root->right = new TreeNode(13);






	return 0;
}
