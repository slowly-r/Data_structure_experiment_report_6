#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include "Sort_A.h"

using namespace std;

//初始化顺序表L
void InitSqList(SqList& L)
{
	cout << "输入顺序表长度：";
	cin >> L.length;
	for (int i = 0; i < MAXSIZE + 1; i++)		//将所有数组元素置初态为0
	{
		L.r[i].key = 0;
		L.r[i].otherinfo = 0;
	}
	cout << "输入顺序表内容：";
	for (int i = 1; i <= L.length; i++)			//给顺序表内依次输入数据
		cin >> L.r[i].key;
}

//输出顺序表内容
void OutSqList(SqList L)
{
	cout << "输出顺序表内容：";
	for (int i = 1; i <= L.length; i++)			//依次输出顺序表内容
		cout << L.r[i].key << "\t";
	cout << endl;
}

//对顺序表L进行直接插入排序
void InsertSort(SqList &L)
{
	int i, j, a, k = 1;
	for (i = 2; i <= L.length; ++i)
	{
		if (L.r[i].key < L.r[i - 1].key)					//"<"，需将r[i]插入有序子表
		{
			L.r[0] = L.r[i];								//将待插入的记录暂存到监视哨中
			L.r[i] = L.r[i - 1];							//r[i-1]后移
			for (j = i - 2; L.r[0].key < L.r[j].key; --j)	//从后向前寻找插入位置
				L.r[j + 1] = L.r[j];						//记录逐个后移，直到找到插入位置
			L.r[j + 1] = L.r[0];							//将r[0]即原r[i],插入正确位置
		}

		cout << "第" << k << "趟排序结果：";
		for (a = 1; a <= k + 1; a++)						//输出每趟排序结果
			cout << "\t" << L.r[a].key;
		cout << endl;

		a = 1;
		k += 1;
	}
}

//对顺序表L进行冒泡排序
void BubbleSort(SqList &L)	
{
	int m, j, flag, a, k = 1;
	RedType t;
	m = L.length - 1;
	flag = 1;									//flag用来标记某一趟排序是否发生交换
	while ((m > 0) && (flag == 1))	
	{
		flag = 0;								//flag置0，如果本趟排序没有发生交换，则不会执行下一趟排序
		for (j = 1; j <= m; j++)
			if (L.r[j].key > L.r[j + 1].key)
			{
				flag = 1;						//flag置1，表示本趟排序发生了交换
				t = L.r[j];
				L.r[j] = L.r[j + 1];
				L.r[j + 1] = t;					//交换前后两个记录
			}
		--m;

		cout << "第" << k << "趟排序结果：";
		for (a = 1; a <= L.length; a++)			//输出每趟排序结果
			cout << "\t" << L.r[a].key;
		cout << endl;

		a = 1;
		k += 1;
	}
}

//对顺序表L进行简单选择排序
void SelectSort(SqList &L)
{
	int i, k, j, a, b = 1;
	RedType t;
	for (i = 1; i < L.length; ++i)			//在L.r[i~L.length]中选择关键字最小的记录
	{
		k = i;
		for (j = i + 1; j <= L.length; ++j)
			if (L.r[j].key < L.r[k].key)
				k = j;						//k指向此趟排序中关键字最小的记录
		if (k != i)
		{
			t = L.r[i];
			L.r[i] = L.r[k];
			L.r[k] = t;						//交换r[i]与r[k]
		}

		cout << "第" << b << "趟排序结果：";
		for (a = 1; a < b + 1; a++)			//输出每趟排序结果
			cout << "\t" << L.r[a].key;
		cout << endl;

		a = 1;
		b += 1;
	}
}
