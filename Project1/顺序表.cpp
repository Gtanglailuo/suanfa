//#include<iostream>
//using namespace std;
//#include<string>
//struct Array
//{
//	int* pBase;//�����һ��Ԫ�صĵ�ַ
//	int len;//��������
//	int cnt;//��ЧԪ�صĸ���
//};
////��ʼ������
//void init_Array(struct Array *myArray,int len)
//{
//	//���ص���ָ��
//	myArray->pBase = new int[len];
//	if (myArray->pBase==NULL)
//	{
//		cout << "��̬�����ڴ�ʧ��" << endl;
//		exit(-1);
//	}
//	myArray->len = len;
//	myArray->cnt = 0;
//}
////�ж��Ƿ�Ϊ��
//bool is_Empty(struct Array* myArray)
//{
//	if (myArray->cnt==0)
//	{
//		return true;
//	}
//	return false;
//}
////��ʾ���������Ԫ��
//void show_Array(struct Array* myArray)
//{
//	for (int i = 0; i < myArray->cnt; i++)
//	{
//		cout << myArray->pBase[i] << " ";
//	}
//	cout << endl;
//}
////�������������
//void insert_Num(struct Array* myArray,int n)
//{
//	if (myArray->cnt==myArray->len)
//	{
//		cout << "����������" << endl;
//		return;
//	}
//	myArray->pBase[myArray->cnt++] = n;
//
//}
////�ж������Ƿ�����
//bool is_Full(struct Array* myArray)
//{
//	if (myArray->cnt==myArray->len)
//	{
//		return true;
//	}
//	return false;
//}
////���±�Ϊp��Ԫ��֮�����ֵΪx��Ԫ��
//int add_Array(struct Array* myArray,int p,int x)
//{
//	if (myArray->cnt == myArray->len)
//	{
//		cout << "����������" << endl;
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
////����ɾ��һ����Ϊx������
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
//				cout << "��Ҫɾ��Ԫ�ز������������" << endl;
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
////��Ҫ��תһ��˳���
//void lizhuan_Array(struct Array* myArray)
//{
//	int n = myArray->cnt,temp=0;
//	for (int i = 0; i < n/2; i++)
//	{
//		temp = myArray->pBase[i];
//		myArray->pBase[i] = myArray->pBase[n-1 - i];
//		myArray->pBase[n-1 - i] = temp;//�����n-1�����,����n-i
//	}
//}
////��Ҫ����������С��һ��ֵ
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
//	cout << "��Сֵ����:" << endl;
//	cout << "min = " << min << endl;
//}
////��Ҫɾ�����Ա���ֵΪx������
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
//	cout << "��ʾ����Ԫ������:" << endl;
//	show_Array(myArray);
//	cout << "��������ݺ������Ԫ������(�±�Ϊp��Ԫ��֮�����ֵΪx��Ԫ��):" << endl;
//	if (add_Array(myArray, 3, 100))
//	{
//		show_Array(myArray);
//	}
//	cout << "��ɾ��һ������֮����������Ԫ������:" << endl;
//	if (delete_Num(myArray, 3))
//	{
//		show_Array(myArray);
//	}
//	cout << "��Ҫ��תһ��˳���" << endl;
//	lizhuan_Array(myArray);
//	show_Array(myArray);
//	find_Num(myArray);
//	cout << "��Ҫɾ�����е�ָ��Ԫ��x" << endl;
//	delete_NumIsX(myArray,2);
//	show_Array(myArray);
//
//
//	return 0;
//	system("Pause");
//
//}