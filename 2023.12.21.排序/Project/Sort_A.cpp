#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include "Sort_A.h"

using namespace std;

//��ʼ��˳���L
void InitSqList(SqList& L)
{
	cout << "����˳����ȣ�";
	cin >> L.length;
	for (int i = 0; i < MAXSIZE + 1; i++)		//����������Ԫ���ó�̬Ϊ0
	{
		L.r[i].key = 0;
		L.r[i].otherinfo = 0;
	}
	cout << "����˳������ݣ�";
	for (int i = 1; i <= L.length; i++)			//��˳�����������������
		cin >> L.r[i].key;
}

//���˳�������
void OutSqList(SqList L)
{
	cout << "���˳������ݣ�";
	for (int i = 1; i <= L.length; i++)			//�������˳�������
		cout << L.r[i].key << "\t";
	cout << endl;
}

//��˳���L����ֱ�Ӳ�������
void InsertSort(SqList &L)
{
	int i, j, a, k = 1;
	for (i = 2; i <= L.length; ++i)
	{
		if (L.r[i].key < L.r[i - 1].key)					//"<"���轫r[i]���������ӱ�
		{
			L.r[0] = L.r[i];								//��������ļ�¼�ݴ浽��������
			L.r[i] = L.r[i - 1];							//r[i-1]����
			for (j = i - 2; L.r[0].key < L.r[j].key; --j)	//�Ӻ���ǰѰ�Ҳ���λ��
				L.r[j + 1] = L.r[j];						//��¼������ƣ�ֱ���ҵ�����λ��
			L.r[j + 1] = L.r[0];							//��r[0]��ԭr[i],������ȷλ��
		}

		cout << "��" << k << "����������";
		for (a = 1; a <= k + 1; a++)						//���ÿ��������
			cout << "\t" << L.r[a].key;
		cout << endl;

		a = 1;
		k += 1;
	}
}

//��˳���L����ð������
void BubbleSort(SqList &L)	
{
	int m, j, flag, a, k = 1;
	RedType t;
	m = L.length - 1;
	flag = 1;									//flag�������ĳһ�������Ƿ�������
	while ((m > 0) && (flag == 1))	
	{
		flag = 0;								//flag��0�������������û�з����������򲻻�ִ����һ������
		for (j = 1; j <= m; j++)
			if (L.r[j].key > L.r[j + 1].key)
			{
				flag = 1;						//flag��1����ʾ�����������˽���
				t = L.r[j];
				L.r[j] = L.r[j + 1];
				L.r[j + 1] = t;					//����ǰ��������¼
			}
		--m;

		cout << "��" << k << "����������";
		for (a = 1; a <= L.length; a++)			//���ÿ��������
			cout << "\t" << L.r[a].key;
		cout << endl;

		a = 1;
		k += 1;
	}
}

//��˳���L���м�ѡ������
void SelectSort(SqList &L)
{
	int i, k, j, a, b = 1;
	RedType t;
	for (i = 1; i < L.length; ++i)			//��L.r[i~L.length]��ѡ��ؼ�����С�ļ�¼
	{
		k = i;
		for (j = i + 1; j <= L.length; ++j)
			if (L.r[j].key < L.r[k].key)
				k = j;						//kָ����������йؼ�����С�ļ�¼
		if (k != i)
		{
			t = L.r[i];
			L.r[i] = L.r[k];
			L.r[k] = t;						//����r[i]��r[k]
		}

		cout << "��" << b << "����������";
		for (a = 1; a < b + 1; a++)			//���ÿ��������
			cout << "\t" << L.r[a].key;
		cout << endl;

		a = 1;
		b += 1;
	}
}
