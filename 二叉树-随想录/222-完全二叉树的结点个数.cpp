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
//
////�ݹ鷨
///*
//	������   ��㣨���ҽ�㣩         ����ֵ�����ҽ��ĸ�����
//	��ֹ���������Ϊ��
//	�����߼�����ǰ���=���ҽ��֮�ͣ�������ҽ��Ϊ�գ��Ҿͷ���0��������ҽ�㲻Ϊ�գ��Ҿͷ������ҽ��ĺͣ�����Ѿ���ʼ���ޣ���
//*/
//int countNodes(TreeNode* root)
//{
//	if (root == nullptr)
//	{
//		return 0;
//	}
//	int left = countNodes(root->left);
//	int right = countNodes(root->right);
//	return left + right + 1;
//}
//
//
//
//int main() {
//
//	cout << "222-��ȫ�������Ľ�����" << endl;
//
//
//
//
//
//	return 0;
//}
