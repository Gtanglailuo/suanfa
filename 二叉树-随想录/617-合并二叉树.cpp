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
	����˼·��
	������ҵĸо������Ǳ���������
	ǰ��---����
	����---����Ҳ����
	����---������
	����---����
*/
TreeNode* merge(TreeNode* root1, TreeNode* root2,TreeNode &head)
{	
	//�ȿ���ǰ�����
	//���һ����һ������
	if (root1==nullptr && root2!=nullptr)
	{
		return root2;
	}
	if (root1 != nullptr && root2 == nullptr)
	{
		return root1;
	}
	//�������
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
	//�������
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
