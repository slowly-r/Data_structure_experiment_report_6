#pragma once
#ifndef Sort_A_H
#define Sort_A_H

#define MAXSIZE	20			//顺序表的最大长度
typedef int KeyType;		//定义关键字类型为整形
typedef int InfoType;

typedef struct {
	KeyType	key;			//关键字项
	InfoType otherinfo;		//其他数据项
}RedType;					//记录类型

typedef struct {
	RedType r[MAXSIZE + 1];	//r[0]闲置或用做哨兵单元
	int length;				//顺序表长度
}SqList;					//顺序表类型

void InitSqList(SqList& L);	//初始化顺序表L
void OutSqList(SqList L);	//输出顺序表内容
void InsertSort(SqList& L);	//对顺序表L进行直接插入排序
void BubbleSort(SqList& L);	//对顺序表L进行冒泡排序
void SelectSort(SqList& L);	//对顺序表L进行简单选择排序

#endif
