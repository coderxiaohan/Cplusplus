#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//class Time
//{
//public:
//	Time(int hour)
//		:_hour(hour)
//	{
//		cout << "time()" << endl;
//	}
//private:
//	int _hour;
//};
//
//
//class Date
//{
//public:
//	Date(int& x, int year = 1, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//		, _t(12)
//		, _ref(x)
//		, _n(1)
//	{
//		// error C2512: “Time”: 没有合适的默认构造函数可用
//		// error C2530 : “Date::_ref” : 必须初始化引用
//		// error C2789 : “Date::_n” : 必须初始化常量限定类型的对象
//	}
//
//private:
//	// 声明
//	int _year;
//	int _month;
//	int _day;
//
//	int& _ref;    // 引用
//	const int _n; // const
//	Time _t;      // 没有默认构造
//};
//
//class Stack
//{
//public:
//	Stack(int n)
//	{
//		cout << "Stack(int n)" << endl;
//	}
//};
//
//class MyQueue
//{
//public:
//	MyQueue(int n = 4)
//		:_st1(n)
//		,_st2(n)
//	{}
//private:
//	Stack _st1;
//	Stack _st2;
//};
//
//
//int main()
//{
//	int y = 0;
//	// 对象整体定义
//	Date d1(y);
//
//	++y;
//
//	MyQueue q1;
//
//	return 0;
//}


//class Time
//{
//public:
//	Time(int hour)
//		:_hour(hour)
//	{
//		cout << "Time" << endl;
//	}
//
//private:
//	int _hour;
//};
//
//class Date
//{
//public:
//	Date()
//		:_year(100)
//
//	{}
//
//
//private:
//	// 注意这里不是初始化，这里给的是缺省值，这个缺省值是给初始化列表的
//	// 如果初始化列表没有显示初始化，默认就会用这个缺省值初始化
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//
//	Time _t = 1;
//	const int _x = 1;
//	int* ptr = (int*)malloc(40);
//
//};
//
//int main()
//{
//	Date d1;
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int n = 4)
//	{
//		cout << "Stack(int n)" << endl;
//	}
//};
//
//class MyQueue
//{
//public:
//private:
//	int _size = 0;
//	Stack _st1;
//	Stack _st2;
//};
//
//class A
//{
//public:
//	A(int n = 10)
//		:_a((int*)malloc(sizeof(int)*n))
//		,_size(0)
//	{
//		// 函数体：检查或者更深层次的初始化
//		if (_a == nullptr)
//		{
//			cout << "malloc fail" << endl;
//			exit(-1);
//		}
//
//		memset(_a, 0, sizeof(int) * n); //都初始化成0，初始化列表不能做这样的事情
//	}
//
//private:
//	int* _a;
//	int _size;
//};
//
//int main()
//{
//	MyQueue q1;
//	A aa;
//
//	return 0;  
//}


//class A
//{
//public:
//	// 构造函数explicit就不再支持隐式类型转换
//	// explicit A(int a1)
//	A(int a1)
//		:_a1(a1)
//	{}
//
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//};
//
//void func(const A& aa = 1)
//{}
//
//class Stack
//{
//public:
//	void Push(const A& a)
//	{}
//};
//
//int main()
//{
//	int i = 1;
//	double d = i;
//
//	const double& ref1 = i;
//
//	// 构造
//	A a1(1);
//
//	// 隐式类型转换
//	A a2 = 1;
//
//	const A& ref2 = a1;
//	const A& ref3 = 1;
//	
//	func(a1);
//	func(1);
//	func();
//
//	Stack st1;
//	A a3(3);
//	st1.Push(a3);
//
//	st1.Push(3);
//
//	return 0;
//}


//class A
//{
//public:
//	// 构造函数explicit就不再支持隐式类型转换
//	// explicit A(int a1)
//	A(int a1)
//		:_a1(a1)
//	{
//		cout << "A(int a1)" << '\n';
//	}
//	// 拷贝构造
//	A(const A& aa)
//	{
//		cout << "A(const A& aa)" << '\n';
//	}
//
//	A(int a1, int a2)
//		:_a1(a1)
//		, _a2(a2)
//	{}
//
//	int Get() const
//	{
//		return _a1 + _a2;
//	}
//
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//};
//
//class B
//{
//public:
//	B(const A& a)
//		:_b(a.Get())
//	{}
//private:
//	int _b = 0;
//};
//
//int main()
//{
//	// 构造
//	A a1(1);
//
//	// 2为参数构造临时对象，临时对象拷贝构造a2 -> 优化为直接构造
//	A a2 = 2;
//
//	const A& ref1 = 3;
//
//	A a3(1, 1);
//	A a4 = { 1, 1 };
//	const A& ref2 = { 1, 1 };
//
//	//Stack st1;
//	//st1.Push(a4);
//	//st1.Push({2,2});
//
//	B b1 = a3;
//	const B& ref3 = a3;
//
//	return 0;
//}


//// 实现一个类，计算程序中创建出了多少个类对象？
//class A
//{
//public:
//	A(int a = 0)
//		:_a1(a)
//		,_a2(a)
//	{
//		++_count;
//	}
//
//	A(const A& t)
//	{
//		++_count;
//	}
//
//	static int GetCount()
//	{
//		// _a1++; 不能访问非静态成员，没有this
//		return _count;
//	}
//private:
//	int _a1 = 1;
//	int _a2 = 1;
////public:
//	// 声明
//	static int _count;
//};
//
//int A::_count = 0;
//
//int main()
//{
//	A aa1;
//	cout << sizeof(aa1) << endl;
//	A* ptr = nullptr;
//
//	A aa2 = 1;
//	//cout << ptr->_count<< endl;
//	//cout << aa1._count << endl;
//	//cout << A::_count << endl;
//
//	cout << A::GetCount() << endl;
//	cout << aa2.GetCount() << endl;
//	cout << ptr->GetCount() << endl;
//
//	return 0;
//}








