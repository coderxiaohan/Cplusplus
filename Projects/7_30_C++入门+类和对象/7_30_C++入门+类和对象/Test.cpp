#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//int main()
//{
//	const int a = 0;
//	// ����Ȩ�޷Ŵ�
//	//int& b = a;
//
//	// ����Ȩ�޷Ŵ󣬿�����ֵ
//	int e = a;
//
//	const int& b = a;
//
//	int c = 0;
//	// ����Ȩ����С
//	const int& d = c;
//	
//	// Ȩ����С�Ŵ�const ָ��&����
//	const int* p1 = &a;
//	// ����Ȩ�޷Ŵ�
//	//int* p2 = p1;
//	const int* p2 = p1;
//
//	// ����Ȩ����С
//	int* p3 = &e;
//	const int* p4 = p3;
//
//	return 0;
//}


//void func(const int& x)
//{}
//
//
//int main()
//{
//	const int& a = 10;
//
//	int y = 0;
//	func(y);
//
//	const int z = 1;
//	func(z);
//	func(2);
//
//	double d = 2.2;
//	func(d);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	double d = i;
//
//	int p = (int)&i; 
//
//	const double& rd = i;
//	const int& rp = (int)&i;
//
//	return 0;
//}


// ��Ӻܶ�
// C++���� const enum inline�����
// ADD�ĺ꺯��
// ���滻
// #define ADD(int a, int b) return a + b;
//#define ADD(a, b) a + b;
//#define ADD(a, b) a + b
//#define ADD(a, b) (a + b)
#define ADD(a, b) ((a) + (b))
// �꺯���ܸ��ӣ�����д�����⣬�����ܵ���
// �ŵ㣺��Ƶ����С������д�ɺ꺯�����������Ч�ʣ�Ԥ����׶κ���滻�����Ч�ʣ�������ջ֡
//int main()
//{
//	int ret1 = ADD(1, 2); // int ret1 = 1+2;;
//	cout << ret1 << endl;
//
//	int ret2 = ADD(1, 2)*3;
//	cout << ret2 << endl;
//
//	// a��b�Ǳ��ʽ�����ʽ�е��������+���ȼ���
//	int x = 0, y = 1;
//	ADD(x | y, x & y); // ((x|y) + (x&y));
//
//	return 0;
//}

//// Ĭ��debug�汾�£�inlineҲ��չ����Ϊ�˷������
//inline int Add(int a, int b)
//{
//	a += 1;
//	a += 1;
//	a += 1;
//	a += 1;
//	a += 1;
//	a += 1;
//	a += 1;
//	a += 1;
//	a += 1;
//	a += 1;
//	a += 1;
//	return a + b;
//}
//
//int main()
//{
//	int ret2 = Add(1, 2)*3;
//	cout << ret2 << endl;
//
//	return 0;
//}


//#include"SeqList.h"
//
//int main()
//{
//	SL s;
//	SLInit(&s); // call ��ַ
//
//
//	return 0;
//}

//void f(int x)
//{
//	cout << "f(int x)" << endl;
//}
//
//void f(int* ptr)
//{
//	cout << "f(int* ptr)" << endl;
//}
//
//int main()
//{
//	f(0);  // f(int x)
//	f(NULL);  // f(int x), �����������f(int* ptr)������C������NULLΪ0
//	//f((void*)0);  
//	f(nullptr);  // f(int* ptr)
//
//	int* p1 = NULL;
//	char* p2 = NULL;
//
//	int* p3 = nullptr;
//	char* p4 = nullptr;
//
//	return 0;
//}


// ���ݺͷ�����װ�ŵ���һ�𣬶���������
// ��װ�ı��������˸��ϸ�Ĺ淶����
class Stack
{
public:
	// ��Ա����
	void Init(int capacity = 4)
	{
		_a = nullptr;  // malloc
		_top = 0;
		_capacity = capacity;
	}

	void Push(int x)
	{}

private:
	// ��Ա����
	int* _a;
	int _top;
	int _capacity;

	//int capacity_;
	////member
	//int m_capacity;
	//int mCapacity;
};

//// �շ巨  StackInit ���� ������	  ��������ĸ��д��ͷ+��������ĸ��д
////        initCapacity   ����      �������ַ�Сд��ͷ+��������ĸ��д
//
////        stack_init
////        init_capacity

//// ����c struct���÷�
typedef struct A
{
	void func()
	{}

	int a1;
	int a2;
}AA;

// ����������
struct B
{
	void Init()
	{}

private:
	int b1;
	int b2;
};

struct ListNode
{
	int val;
	//struct ListNode* next; ��C++�У�����Ҫstruct��struct���������࣬��struct���ƾͿ��Դ�������
	ListNode* next;
};

int main()
{
	struct A aa1;
	AA aa2;

	B bb1;
	bb1.Init();

	Stack s1;
	s1.Init();
	s1.Push(1);
	s1.Push(2);
	s1.Push(3);

	//s1.top++;

	return 0;
}




