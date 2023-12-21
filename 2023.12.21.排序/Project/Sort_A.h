#pragma once
#ifndef Sort_A_H
#define Sort_A_H

#define MAXSIZE	20			//˳������󳤶�
typedef int KeyType;		//����ؼ�������Ϊ����
typedef int InfoType;

typedef struct {
	KeyType	key;			//�ؼ�����
	InfoType otherinfo;		//����������
}RedType;					//��¼����

typedef struct {
	RedType r[MAXSIZE + 1];	//r[0]���û������ڱ���Ԫ
	int length;				//˳�����
}SqList;					//˳�������

void InitSqList(SqList& L);	//��ʼ��˳���L
void OutSqList(SqList L);	//���˳�������
void InsertSort(SqList& L);	//��˳���L����ֱ�Ӳ�������
void BubbleSort(SqList& L);	//��˳���L����ð������
void SelectSort(SqList& L);	//��˳���L���м�ѡ������

#endif
