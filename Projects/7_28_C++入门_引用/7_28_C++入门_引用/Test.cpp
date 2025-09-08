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
//	// 在io需求比较高的地方，如部分大量输入的竞赛题中，加上以下3行代码
//	// 可以提高C++IO效率
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
// 全缺省
//void Func1(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
// 半缺省
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
//	// 没有扩容
//	SLInit(&s1, n);
//
//	// n很大，比如10000，不断扩容
//	for (int i = 0; i < n; i++)
//	{
//		SLPushBack(&s1, i);
//	}
//
//	SL s2;
//	SLInit(&s2);
//
//	//  5 4 6 3 4 7 4
//	// 查找出所有的4
//	int i = SLFind(&s2, 4);
//	while (i != -1)
//	{
//		i = SLFind(&s2, 4, i+1);
//	}
//
//	return 0;
//}


/////////////////////////////////////////////////////////////////////////////////////
// 函数重载
// C不支持同名函数存在
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
//// 函数重载
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
//// 2、参数个数不同
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
//// 3、参数类型顺序不同
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
// //构成函数重载
// //不传参调用时，存在调用歧义
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
// 引用

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
//	//一个变量可以用多个引用
//
//	int& k = j;
//	k = 20;
//
//	cout << i << endl;  //20
//	cout << j << endl;  //20
//	cout << k << endl;  //20
//
//	////引用在定义时必须初始化
//	//int& x;  //报错
//	//x = i;
//
//	// 引用一旦引用一个实体，再不能引用其他实体
//	int m = 30;
//	k = m;
//	cout << &k << endl;   //地址没变，值变为30
//
//	return 0;
//}

// 指针
// 引用
// 大部分场景去替代指针，部分场景还是离不开指针

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
////交换指针(指针)
//void Swap(int** pp1, int** pp2) {
//	int* temp = *pp1;
//	*pp1 = *pp2;
//	*pp2 = temp;
//}
//
//////交换指针（引用）
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
////上面的结构体相当于下面两句
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
//		// 找到尾结点，newnode链接到尾结点
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
//		//找到尾结点，newnode链接到尾结点
//	}
//
//}

//int main()
//{
//	//int x = 0, y = 1; 
//	//cout << x << " " << y << endl;  // 0 1
//
//	////Swap(&x, &y); // 调用的是指针
//	//cout << x << " " << y << endl;  // 1 0 
//
//	////Swap(x, y);  // 调用的是引用
//	//cout << x << " " << y << endl;  // 0 1 
//
//	//SL s;
//	//SLInit(s);
//
//	//int* p1 = &x, *p2 = &y;
//	//Swap(&p1, &p2);  // 调用的是指针
//	//Swap(p1, p2);  // 调用的是引用
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

//传引用返回
int& func() {
	int ret = 0;
	return ret;
}

//int main() {
//	int x = func();
//	cout << x << endl;
//
//	int a[10];
//	//// 越界抽查
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
//	cout << x << endl;  //0,引用指向了一个临时变量
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
//	// 修改顺序表第i个位置的值
//	int i = 0, x = 0;
//	cin >> i;
//	cin >> x;
//	//SLModify(&s, i, x);  //不返回值，修改完就结束
//
//	// SLat返回顺序表中第 i 个元素的引用。因为返回的是 int&，
//	// 所以调用者既可以 读取值，也可以 直接修改值。
//	SLat(&s, i) = x; // 写
//
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << SLat(&s, i) << " ";  // 读
//	}
//	cout << endl;
//
//	return 0;
//}

int main()
{
	int i = 0;
	// 语法上引用不开空间，指针要开空间
	int& r1 = i;
	int* p = &i;

	r1++;
	(*p)++;

	return 0;
}





