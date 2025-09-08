#pragma once

#include<stdlib.h>

typedef struct SeqList
{
	int* a;
	int size;
	int capacity;
}SL;

void SLInit(SL* pls, int n = 4);
void SLPushBack(SL* pls, int x);
int SLFind(SL* pls, int x, int i = 0);
int& SLat(SL* pls, int i);
void SLModify(SL* pls, int i, int x);
