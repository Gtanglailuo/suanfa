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

bool isSame(int n, int row,int col ,vector<string>& chessboard)
{
	//这个是判断当前行当前列一直向上是否出现Q
	for (int i = 0; i <row; i++)
	{
		if (chessboard[i][col]=='Q')
		{
			return false;
		}
	}
	//判断左上角一直到尽头是否会出现值
	for (int i = row-1, j=col-1; i >=0&&j>=0; i--,j--)
	{
		if (chessboard[i][j]=='Q')
		{
			return false;
		}

	}

	//判断右上角一直到尽头是否会出现值
	for (int i = row - 1, j=col+1; i >= 0&&j<=n-1; i--,j++)
	{

		if (chessboard[i][j] == 'Q')
		{
			return false;
		}

	}
	return true;


}
vector<vector<string>> result;

void func(int n,int row,vector<string> &chessboard)
{
	//终止条件：当到最后一行的时候就结束
	if (row==n)
	{
		result.push_back(chessboard);
		return;
	}

	for (int col = 0; col < n; col++)
	{
		if (isSame(n,row,col,chessboard))
		{
			chessboard[row][col] = 'Q';//当前行上面去赋值
			func(n, row + 1, chessboard);
			chessboard[row][col] = '.';
		}

	}
}

vector<vector<string>> solveNQueens(int n) 
{
	result.clear();
	vector<string> path(n,string(n,'.'));
	func(n,0, path);
	return result;


}
int main()
{
	vector<vector<string>> s = solveNQueens(4);
	for (auto& t : s)
	{
		for (auto& i : t)
		{
			cout << i << " ";
		}
		cout << endl;

	}


	return 0;
}
