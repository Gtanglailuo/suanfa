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
vector<vector<int>> result;
vector<int> v;
//相加之和为n的k个数，从0到9里面选
int sum(vector<int> ve)
{
	int z = 0;
	for (auto& i : ve)
	{
		z += i;
	}
	return z;
}
void combination(int k, int n,int index,int sum) 
{
	if (v.size()==k && sum==n)
	{
		result.push_back(v);
		return;
	}
	 
	for (int i = index; i <= 9; i++)
	{
		v.push_back(i);
		combination(k,n,i+1,sum);
		v.pop_back();
	}
}
vector<vector<int>> combinationSum3(int k, int n) {
	combination(k, n, 1);
	return result;
}
int main()
{



	return 0;
}
