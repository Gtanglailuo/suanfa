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
////��һ�ֵݹ�
///*
//int getNum(TreeNode* root)
//{
//	if (root==nullptr)
//	{
//		return 0;
//	}
//	int left = getNum(root->left);
//	if (left==-1)
//	{
//		return -1;
//	}
//	int right = getNum(root->right);
//	if (right==-1)
//	{
//		return -1;
//	}
//	int result;
//	if (abs(left-right)>1)
//	{
//		result = -1;
//	}
//	else
//	{
//		result = 1 + max(left,right);
//	}
//	return result;
//}
//bool isBalanced(TreeNode* root) 
//{
//
//	return getNum(root) == -1 ? false : true;
//}
//*/
//
////�ڶ��ֵݹ�
//int getHeight(TreeNode* root) {
//	if (root == nullptr) { // �սڵ�߶�Ϊ0
//		return 0;
//	}
//	int leftHeight = getHeight(root->left);
//	int rightHeight = getHeight(root->right);
//	return max(leftHeight, rightHeight) + 1;
//}
//
//bool isBalanced(TreeNode* root) {
//	if (root == nullptr) { // ����Ϊƽ�������
//		return true;
//	}
//	int leftHeight = getHeight(root->left);
//	int rightHeight = getHeight(root->right);
//	bool diff = abs(leftHeight - rightHeight) <= 1; // �ж����������߶Ȳ�
//	bool balancedLeft = isBalanced(root->left); // �ж��������Ƿ�Ϊƽ�������
//	bool balancedRight = isBalanced(root->right); // �ж��������Ƿ�Ϊƽ�������
//	return diff && balancedLeft && balancedRight;
//}
//
//
//
//int main() {
//
//
//	TreeNode* root = new TreeNode(1);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//	root->left->left = new TreeNode(4);
//	root->left->right = new TreeNode(5);
//	root->right->left = new TreeNode(6);
//	root->right->right = new TreeNode(7);
//
//	bool result = isBalanced(root);
//	if (result) {
//		cout << "The given tree is a balanced binary tree." << endl;
//	}
//	else {
//		cout << "The given tree is not a balanced binary tree." << endl;
//	}
//
//	return 0;
//}
