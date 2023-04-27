using namespace std;
#pragma region "头文件"
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
	//这里的i不是下标，而是数字
	for (int i = startIndex; i <=n; i++)
	{
		
		path.push_back(i);
		func(n,k,i+1);
		cout << "退出" << endl;
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
