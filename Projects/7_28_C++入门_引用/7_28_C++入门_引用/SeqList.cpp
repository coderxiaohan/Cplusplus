#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void SLInit(SL* pls, int n)
{
	pls->a = (int*)malloc(n * sizeof(int));
	pls->size = 0;
	pls->capacity = n;
}

void SLPushBack(SL* pls, int x)
{
	//...
	pls->a[pls->size++] = x;
}

// ¡À
int SLFind(SL* pls, int x, int i)
{
	while (i < pls->size)
	{
		// ...
	}

	return -1;
}

int& SLat(SL* pls, int i)
{
	//...
	return pls->a[i];
}

void SLModify(SL* pls, int i, int x)
{
	//...
	pls->a[i] = x;
}