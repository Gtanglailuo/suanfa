//using namespace std;
//#pragma region "ͷ�ļ�"
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include<stack>
//#include<queue>
//#include <vector>
//#include <set>
//#include<unordered_set>
//#include<unordered_map>
//#pragma endregin
//
//struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
///*
//˼����ʲô��
//	1.���Ҹ���㣿�Ӻ�������������
//	2.���ݸ�������и��������飬�ٸ�������������и���������и��������
//	3.���=����+���
//	4.�ұ�=����+�Һ�
//*/
//TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
//{
//	//�����������û��ֵ����ô���������ǿյ�
//	if (postorder.size()==0)
//	{
//		return nullptr;
//	}
//
//	//�����������ֻ��һ��ֵ����ô�������ֻ��һ����㣬�������ֵ�������
//	if (postorder.size()==1)
//	{
//		TreeNode* head = new TreeNode(postorder[postorder.size()-1]);
//		return head;
//	}
//	TreeNode* root = new TreeNode(postorder[postorder.size() - 1]);
//	/*Ѱ�Ҹ��ڵ���±�*/
//	//������������д�����ֵ
//	int valueIndex;//��¼������ĸ��ڵ�����Ӧ���±�
//	int value = postorder[postorder.size()-1];//���ڵ��ֵ
//	for (int index = 0; index < postorder.size(); index++)
//	{
//		if (postorder[index]==value)
//		{
//			valueIndex = value; break;
//		}
//	}
//
//	/*�и���������ͺ�������*/
//	//1.���и���������
//	int inorderIndex=0;//����������и���±�
//	for (int i = 0; i < inorder.size(); i++)
//	{
//		if (inorder[i]==value)
//		{
//			inorderIndex = i; break;
//		}
//	}
//	vector<int> leftInorder(inorder.begin(),inorder.begin()+inorderIndex);
//	vector<int> rightInorder(inorder.begin() + inorderIndex+1, inorder.end());
//
//	//2.���и��������
//	postorder.resize(postorder.size()-1);
//
//	vector<int> leftPostorder(postorder.begin(), postorder.begin() + leftInorder.size());
//	vector<int> rightPostorder(postorder.begin() + leftInorder.size(), postorder.end());
//
//	//���ݹ�ʵ��
//
//	root->left = buildTree(leftInorder, leftPostorder);
//	root->right = buildTree(rightInorder, rightPostorder);
//
//	return root;
//}
//
//
//
//
//
//int main()
//{
//
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}
