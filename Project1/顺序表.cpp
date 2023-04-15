//#include<iostream>
//using namespace std;
//#include<string>
//struct Array
//{
//	int* pBase;//数组第一个元素的地址
//	int len;//数组容量
//	int cnt;//有效元素的个数
//};
////初始化数组
//void init_Array(struct Array *myArray,int len)
//{
//	//返回的是指针
//	myArray->pBase = new int[len];
//	if (myArray->pBase==NULL)
//	{
//		cout << "动态分配内存失败" << endl;
//		exit(-1);
//	}
//	myArray->len = len;
//	myArray->cnt = 0;
//}
////判断是否为空
//bool is_Empty(struct Array* myArray)
//{
//	if (myArray->cnt==0)
//	{
//		return true;
//	}
//	return false;
//}
////显示数组里面的元素
//void show_Array(struct Array* myArray)
//{
//	for (int i = 0; i < myArray->cnt; i++)
//	{
//		cout << myArray->pBase[i] << " ";
//	}
//	cout << endl;
//}
////给数组添加数据
//void insert_Num(struct Array* myArray,int n)
//{
//	if (myArray->cnt==myArray->len)
//	{
//		cout << "数组是满的" << endl;
//		return;
//	}
//	myArray->pBase[myArray->cnt++] = n;
//
//}
////判断数组是否已满
//bool is_Full(struct Array* myArray)
//{
//	if (myArray->cnt==myArray->len)
//	{
//		return true;
//	}
//	return false;
//}
////在下标为p的元素之后插入值为x的元素
//int add_Array(struct Array* myArray,int p,int x)
//{
//	if (myArray->cnt == myArray->len)
//	{
//		cout << "数组是满的" << endl;
//		return 0;
//	}
//	int m = myArray->cnt;
//	for (int i = m-1; i >p; i--)
//	{
//		myArray->pBase[i + 1] = myArray->pBase[i];
//	}
//	myArray->pBase[p + 1] = x;
//	myArray->cnt++;
//	return 1;
//}
////我想删除一个是为x的数据
//int delete_Num(struct Array* myArray,int x)
//{
//	int index=0;
//	for (int i = 0; i < myArray->cnt; i++)
//	{
//		if (myArray->pBase[i]==x)
//		{
//			index = i;
//			break;
//		}
//		else
//		{
//			if (i==myArray->cnt-1)
//			{
//				cout << "你要删除元素不在这个数组中" << endl;
//				return 0;
//			}
//		}
//	}
//	for (int i = index; i < myArray->cnt-1; i++)
//	{
//		myArray->pBase[i] = myArray->pBase[i+1];
//	}
//	myArray->cnt--;
//	return 1;
//}
////我要逆转一个顺序表
//void lizhuan_Array(struct Array* myArray)
//{
//	int n = myArray->cnt,temp=0;
//	for (int i = 0; i < n/2; i++)
//	{
//		temp = myArray->pBase[i];
//		myArray->pBase[i] = myArray->pBase[n-1 - i];
//		myArray->pBase[n-1 - i] = temp;//这里的n-1是灵魂,不是n-i
//	}
//}
////我要找数组中最小的一个值
//void find_Num(struct Array* myArray)
//{
//	int min = myArray->pBase[0];
//	int size = myArray->cnt;
//	for (int i = 0; i < size; i++)
//	{
//		if (min>=myArray->pBase[i])
//		{
//			min = myArray->pBase[i];
//		}
//	}
//	cout << "最小值如下:" << endl;
//	cout << "min = " << min << endl;
//}
////我要删除线性表中值为x的数据
//void delete_NumIsX(struct Array* myArray,int x)
//{
//	int k = 0;
//	for (int i = 0; i < myArray->cnt; i++)
//	{
//		if (x!=myArray->pBase[i])
//		{
//			myArray->pBase[k] = myArray->pBase[i];
//			k++;
//		}
//	}
//	myArray->cnt = k;
//}
//int main()
//{
//	Array* myArray = new Array();
//	init_Array(myArray,15);
//	insert_Num(myArray, 1);
//	insert_Num(myArray, 2);
//	insert_Num(myArray, 3);
//	insert_Num(myArray, 4);
//	insert_Num(myArray, 5);
//	insert_Num(myArray, 6);
//	insert_Num(myArray, 2);
//	insert_Num(myArray, 6);
//	cout << "显示数组元素如下:" << endl;
//	show_Array(myArray);
//	cout << "我添加数据后的数组元素如下(下标为p的元素之后插入值为x的元素):" << endl;
//	if (add_Array(myArray, 3, 100))
//	{
//		show_Array(myArray);
//	}
//	cout << "我删除一个数据之后，它的数组元素如下:" << endl;
//	if (delete_Num(myArray, 3))
//	{
//		show_Array(myArray);
//	}
//	cout << "我要逆转一个顺序表" << endl;
//	lizhuan_Array(myArray);
//	show_Array(myArray);
//	find_Num(myArray);
//	cout << "我要删除所有的指定元素x" << endl;
//	delete_NumIsX(myArray,2);
//	show_Array(myArray);
//
//
//	return 0;
//	system("Pause");
//
//}