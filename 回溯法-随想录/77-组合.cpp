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
vector<vector<int>> result; vector<int> path;
void func(int n,int k,int startIndex)
{
	if (path.size()==k)
	{
		result.push_back(path);
		return;
	}
	//�����i�����±꣬��������
	for (int i = startIndex; i <=n; i++)
	{
		
		path.push_back(i);
		func(n,k,i+1);
		cout << "�˳�" << endl;
		path.pop_back();
	}

}
vector<vector<int>> combine(int n, int k) 
{
	func(n,k,1);
	return result;
}

int main()
{
	vector<vector<int>> v = combine(6,3);


	return 0;
}
