#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include "Sort_A.h"

using namespace std;

int main()
{
	SqList L1, L2, L3;
	InitSqList(L1);
	L2 = L1;
	L3 = L1;

	cout << "-----------------Ö±½Ó²åÈë·¨ÅÅÐò---------------------" << endl;
	InsertSort(L1);
	OutSqList(L1);
	cout << endl;

	cout << "--------------------Ã°ÅÝÅÅÐò------------------------" << endl;
	BubbleSort(L2);
	OutSqList(L2);
	cout << endl;

	cout << "--------------------Ñ¡ÔñÅÅÐò-----------------------" << endl;
	SelectSort(L3);
	OutSqList(L3);
	cout << endl;

	return 0;
}
