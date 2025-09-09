#pragma once
#include<stdlib.h>

typedef struct SeqList
{
	int* a;
	int size;
	int capacity;
}SL;

//inline void SLInit(SL* pls, int n = 4)
//{
//	pls->a = (int*)malloc(n * sizeof(int));
//	pls->size = 0;
//	pls->capacity = n;
//}

inline void SLInit(SL* pls, int n = 4);

void SLPushBack(SL* pls, int x);
int SLFind(SL* pls, int x, int i = 0);
int& SLat(SL* pls, int i);
void SLModify(SL* pls, int i, int x);


class Stack
{
public:
	// Ա
	void Init(int capacity = 4);
	void Push(int x);
private:
	// Ա
	int* _a;
	int _top;
	int _capacity;
};





