#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int i = 0;
//	cout << "xxx" << i << '\n' << endl;
//	printf("%d\n", i);
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	// ��io����Ƚϸߵĵط����粿�ִ�������ľ������У���������3�д���
//	// �������C++IOЧ��
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//
// ȫȱʡ
//void Func1(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
// ��ȱʡ
//void Func2(int b, int c = 20, int a = 10)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//	Func(1);
//	Func();
//
//	Func1(1, 2, 3);
//	Func1(1, 2);
//	Func1(1);
//	Func1();
//
//	Func2(1);
//	Func2(1, 2);
//	Func2(1, 2, 3);
//
//	return 0;
//}

//#include"SeqList.h"
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	SL s1;
//	// û������
//	SLInit(&s1, n);
//
//	// n�ܴ󣬱���10000����������
//	for (int i = 0; i < n; i++)
//	{
//		SLPushBack(&s1, i);
//	}
//
//	SL s2;
//	SLInit(&s2);
//
//	//  5 4 6 3 4 7 4
//	// ���ҳ����е�4
//	int i = SLFind(&s2, 4);
//	while (i != -1)
//	{
//		i = SLFind(&s2, 4, i+1);
//	}
//
//	return 0;
//}


/////////////////////////////////////////////////////////////////////////////////////
// ��������
// C��֧��ͬ����������
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
//
//int main()
//{
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//// ��������
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
//
//// 2������������ͬ
//void f()
//{
//	cout << "f()" << endl;
//}
//
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}
//
//// 3����������˳��ͬ
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}
//
//void fxx()
//{}
//
//int fxx()
//{
//	return 0;
//}
//
//
// //���ɺ�������
// //�����ε���ʱ�����ڵ�������
//void f1()
//{
//	cout << "f()" << endl;
//}
//
//void f1(int a = 10)
//{
//	cout << "f(int a)" << endl;
//}
//
//int main()
//{
//	cout << Add(1, 2) << endl;
//	cout << Add(1.1, 2.2) << endl;
//
//	f();
//	f(1);
//
//
//	f1(1);
//	//f1();
//
//	return 0;
//}

////////////////////////////////////////////////////////////////////
// ����

//#include<iostream>
//using namespace std;
//
//int main() {
//	int i = 10;
//	int& j = i;
//
//	cout << &i << endl;
//	cout << &j << endl;
//
//	++j;
//
//	//һ�����������ö������
//
//	int& k = j;
//	k = 20;
//
//	cout << i << endl;  //20
//	cout << j << endl;  //20
//	cout << k << endl;  //20
//
//	////�����ڶ���ʱ�����ʼ��
//	//int& x;  //����
//	//x = i;
//
//	// ����һ������һ��ʵ�壬�ٲ�����������ʵ��
//	int m = 30;
//	k = m;
//	cout << &k << endl;   //��ַû�䣬ֵ��Ϊ30
//
//	return 0;
//}

// ָ��
// ����
// �󲿷ֳ���ȥ���ָ�룬���ֳ��������벻��ָ��

#include<iostream>
using namespace std;

//void Swap(int* rx, int* ry) {
//	int temp = *rx;
//	*rx = *ry;
//	*ry = temp;
//}
//
//void Swap(int& rx, int& ry) {
//	int temp = rx;
//	rx = ry;
//	ry = temp;
//}

//typedef struct SeqList {
//	//;
//}SL;

////void SLInit(SL* psl, int n = 4)
//void SLInit(SL& psl, int n = 4) {
//}
//
////����ָ��(ָ��)
//void Swap(int** pp1, int** pp2) {
//	int* temp = *pp1;
//	*pp1 = *pp2;
//	*pp2 = temp;
//}
//
//////����ָ�루���ã�
//void Swap(int*& pp1, int*& pp2) {
//	int* temp = pp1;
//	pp1 = pp2;
//	pp2 = temp;
//}
//
//typedef struct SListNode {
//	struct SListNode* Next;
//	int val;
//}SLTNode, * PSLTNode;
//
////����Ľṹ���൱����������
//typedef struct SListNode SLTNode;
//typedef struct SListNode* PLSTNode;

//void SLTPushBack(SLTNode** pphead, int x) {
//	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode)); // malloc
//	newnode->val = x;
//	newnode->Next = NULL;
//
//	if (*pphead == NULL) {
//		*pphead = newnode;
//	}
//	else {
//		// �ҵ�β��㣬newnode���ӵ�β���
//		SLTNode* tail = *pphead;
//		if (tail->Next!=NULL) {
//			tail = tail->Next;
//		}
//		tail->Next = newnode;
//	}
//}

////void SLTPushBack(SLTNode*& phead, int x)
//void SLTPushBack(PSLTNode& phead, int x) {
//	PSLTNode newnode = NULL; // malloc
//	if (phead == NULL) {
//		phead = newnode;
//	}
//	else
//	{
//		//�ҵ�β��㣬newnode���ӵ�β���
//	}
//
//}

//int main()
//{
//	//int x = 0, y = 1; 
//	//cout << x << " " << y << endl;  // 0 1
//
//	////Swap(&x, &y); // ���õ���ָ��
//	//cout << x << " " << y << endl;  // 1 0 
//
//	////Swap(x, y);  // ���õ�������
//	//cout << x << " " << y << endl;  // 0 1 
//
//	//SL s;
//	//SLInit(s);
//
//	//int* p1 = &x, *p2 = &y;
//	//Swap(&p1, &p2);  // ���õ���ָ��
//	//Swap(p1, p2);  // ���õ�������
//
//	SLTNode* plist = NULL;
//	SLTPushBack(&plist, 1);
//	SLTPushBack(&plist, 2);
//	SLTPushBack(&plist, 3);
//	SLTPushBack(&plist, 4);
//
//
//	SLTNode* plist = NULL;
//	PSLTNode plist = NULL;
//	SLTPushBack(plist, 1);
//	SLTPushBack(plist, 2);
//	SLTPushBack(plist, 3);
//	SLTPushBack(plist, 4);
//
//	return 0;
//}

//�����÷���
int& func() {
	int ret = 0;
	return ret;
}

//int main() {
//	int x = func();
//	cout << x << endl;
//
//	int a[10];
//	//// Խ����
//	//a[10] = 1;
//	//a[11] = 2;
//	//a[12] = 3;
//	return 0;
//}


//int& func1()
//{
//	//static int ret = 0;
//	int ret = 0;
//	// ...
//	return ret;
//}
//
//int& func2()
//{
//	int y = 456;
//	// ...
//	return y;
//}

//int main()
//{
//	int& x = func1();
//	cout << x << endl;  //0,����ָ����һ����ʱ����
//	func2();
//	cout << x << endl;  //456
//
//	return 0;
//}


//#include"SeqList.h"
//int main()
//{
//	SL s;
//	SLInit(&s, 10);
//	for (size_t i = 0; i < 10; i++)
//	{
//		SLPushBack(&s, i);
//	}
//
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << SLat(&s, i) << " ";
//	}
//	cout << endl;
//
//	// �޸�˳����i��λ�õ�ֵ
//	int i = 0, x = 0;
//	cin >> i;
//	cin >> x;
//	//SLModify(&s, i, x);  //������ֵ���޸���ͽ���
//
//	// SLat����˳����е� i ��Ԫ�ص����á���Ϊ���ص��� int&��
//	// ���Ե����߼ȿ��� ��ȡֵ��Ҳ���� ֱ���޸�ֵ��
//	SLat(&s, i) = x; // д
//
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << SLat(&s, i) << " ";  // ��
//	}
//	cout << endl;
//
//	return 0;
//}

int main()
{
	int i = 0;
	// �﷨�����ò����ռ䣬ָ��Ҫ���ռ�
	int& r1 = i;
	int* p = &i;

	r1++;
	(*p)++;

	return 0;
}





