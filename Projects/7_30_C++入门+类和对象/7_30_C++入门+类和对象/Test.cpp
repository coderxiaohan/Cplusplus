#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//int main()
//{
//	const int a = 0;
//	// 不能权限放大
//	//int& b = a;
//
//	// 不是权限放大，拷贝赋值
//	int e = a;
//
//	const int& b = a;
//
//	int c = 0;
//	// 可以权限缩小
//	const int& d = c;
//	
//	// 权限缩小放大，const 指针&引用
//	const int* p1 = &a;
//	// 不能权限放大
//	//int* p2 = p1;
//	const int* p2 = p1;
//
//	// 可以权限缩小
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


// 宏坑很多
// C++建议 const enum inline替代宏
// ADD的宏函数
// 宏替换
// #define ADD(int a, int b) return a + b;
//#define ADD(a, b) a + b;
//#define ADD(a, b) a + b
//#define ADD(a, b) (a + b)
#define ADD(a, b) ((a) + (b))
// 宏函数很复杂，容易写出问题，还不能调试
// 优点：高频调用小函数，写成宏函数，可以提高效率，预处理阶段宏会替换，提高效率，不建立栈帧
//int main()
//{
//	int ret1 = ADD(1, 2); // int ret1 = 1+2;;
//	cout << ret1 << endl;
//
//	int ret2 = ADD(1, 2)*3;
//	cout << ret2 << endl;
//
//	// a和b是表达式，表达式中的运算符比+优先级低
//	int x = 0, y = 1;
//	ADD(x | y, x & y); // ((x|y) + (x&y));
//
//	return 0;
//}

//// 默认debug版本下，inline也不展开，为了方便调试
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
//	SLInit(&s); // call 地址
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
//	f(NULL);  // f(int x), 本意是想调用f(int* ptr)，但在C语言中NULL为0
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


// 数据和方法封装放到了一起，都在类里面
// 封装的本质体现了更严格的规范管理
class Stack
{
public:
	// 成员函数
	void Init(int capacity = 4)
	{
		_a = nullptr;  // malloc
		_top = 0;
		_capacity = capacity;
	}

	void Push(int x)
	{}

private:
	// 成员变量
	int* _a;
	int _top;
	int _capacity;

	//int capacity_;
	////member
	//int m_capacity;
	//int mCapacity;
};

//// 驼峰法  StackInit 类型 函数，	  单词首字母大写开头+单词首字母大写
////        initCapacity   变量      单词首字符小写开头+单词首字母大写
//
////        stack_init
////        init_capacity

//// 兼容c struct的用法
typedef struct A
{
	void func()
	{}

	int a1;
	int a2;
}AA;

// 升级成了类
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
	//struct ListNode* next; 在C++中，不需要struct，struct升级成了类，、struct名称就可以代表类型
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




