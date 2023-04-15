//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//#include <stack>
//
//const int n = 10;     //行  
//const int m = 10;     //列 
//
//struct Temp
//{            //定义坐标结构体 
//    int x;
//    int y;
//    int di;
//};
//struct Direction
//{
//    int dirx;
//    int diry;
//};
//Direction dir[4] =
//{
//    {0,1},{1,0},{0,-1},{-1,0}
//};
//int maze[6][6] =
//{
//{1,1,1,1,1,1},
//{1,0,0,0,0,1},
//{1,1,0,1,1,1},
//{1,0,0,0,1,1},
//{1,1,1,0,0,1},
//{1,1,1,1,1,1}
//};
//bool SeekPath(int maze[][6],Direction direct[],int m,int n)
//{
//    stack<Temp> s;
//    Temp temp;
//    int x, y, di;
//    int line, col;
//    maze[1][1] = -1;
//    temp={1,1,-1};//这个是点的位置
//    s.push(temp);
//    while (!s.empty())
//    {
//        temp = s.top();
//        s.pop();
//        x = temp.x, y = temp.y, di = temp.di + 1;
//        while (di<4)
//        {
//            line = x + direct[di].dirx;
//            col = y + direct[di].diry;
//            if (maze[line][col]==0)//如果这个点没有走，我就走这个点
//            {
//                temp = {x,y,di};
//                s.push(temp);
//                x = line, y = col, maze[line][col] = -1;
//                if (x==m-2&&y==n-2)
//                {
//                    return true;
//                }
//                else
//                {
//                    //向右边走
//                    di = 0;
//                }
//            }
//            else//如果这个点是墙怎么办，换方向
//            {
//                di++;
//            }
//
//        }
//        return false;
//    }
//}
//int main()
//{
//    if (SeekPath(maze,&dir[4],6,6))
//    {
//        cout << "ok" << endl;
//    }
//
//
//    return 0;
//}
//
//
