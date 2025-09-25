#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d) 
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};

//typedef int STDataType;
//class Stack
//{
//public:
//	Stack(int n = 4)
//	{
//		_a = (STDataType*)malloc(sizeof(STDataType) * n);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = n;
//		_top = 0;
//	}
//
//	// Stack st2(st1);
//	//Stack(const Stack& s)
//	//{
//	//	_a = s._a;
//	//	_capacity = s._capacity;
//	//	_top = s._top;
//	//}
//
//	Stack(const Stack& s)
//	{
//		_a = (STDataType*)malloc(sizeof(STDataType) * s._capacity);
//		if (_a == NULL)
//		{
//			perror("realloc fail");
//			return;
//		}
//
//		memcpy(_a, s._a, s._top * sizeof(STDataType));
//
//		_capacity = s._capacity;
//		_top = s._top;
//	}
//
//	void Push(STDataType x)
//	{
//		if (_top == _capacity)
//		{
//			int newcapacity = _capacity * 2;
//			STDataType* tmp = (STDataType*)realloc(_a, newcapacity *
//				sizeof(STDataType));
//			if (tmp == NULL)
//			{
//				perror("realloc fail");
//				return;
//			}
//			_a = tmp;
//			_capacity = newcapacity;
//		}
//		_a[_top++] = x;
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//private:
//	STDataType* _a;
//	size_t _capacity;
//	size_t _top;
//};
//
//class MyQueue
//{
//private:
//	Stack _pushst;
//	Stack _popst;
//};
//
//
//void Func( const Date& d) 
//{
//
//}
// 自定义类型传值传参要调用拷贝构造
//void Func(Date d)
//{
//
//}

//int main()
//{
//	Date d1(2025, 8, 1);
//	// 拷贝构造，拷贝同类型的对象完成初始化
//	Date d2(d1);
//
//	Func(d1);
//
//	const Date d3(2025, 8, 1);
//	Date d4(d3);
//
//	Stack st1;
//	st1.Push(1);
//	st1.Push(2);
//	st1.Push(3);
//
//	Stack st2(st1);
//
//	MyQueue q1;
//	MyQueue q2(q1);
//
//}

//int& func2()
//{
//	int x = 1;
//	return x;
//}
//Stack func3()
//{
//	Stack st;
//	return st;
//}
//
//int main()
//{
//	int ret1 = func2();
//	cout << ret1 << endl;
//
//	Stack ret2 = func3();
//	 Stack ret2(func3());
//	//cout << ret2 << endl;
//
//	Stack st3;
//	// 以下都是调用拷贝构造
//	Stack st4(st3);
//	Stack st5 = st3;
//}


//////////////////////////////////////////////////////////////////////////////////
// 运算符重载
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	int GetYear()
//	{
//		return _year;
//	}
//
////private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//bool operator==(const Date& x1, const Date& x2)
//{
//	return x1._year == x2._year
//		&& x1._month == x2._month
//		&& x1._day == x2._day;
//}
//
//int operator-(const Date& x1, const Date& x2)
//{
//	return 0;
//}
//
//int main()
//{
//	int i = 0, j = 1;
//	Date d1(2025, 8, 1);
//	Date d2(2025, 10, 1);
//	bool ret = i == j;
//	cout << (d1 == d2) << endl;
//	operator==(d1, d2);
//
//	d1 - d2;
//	operator-(d1, d2);
//
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	//其实还有个形参this
//	bool operator==(const Date& d)
//	{
//		return _year == d._year
//			&& _month == d._month
//			&& _day == d._day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//
//	Date d1(2025, 8, 1);
//	Date d2(2025, 10, 1);
//
//	cout << (d1 == d2) << endl;
//	d1.operator==(d2);
//
//	return 0;
//}


//void func1()
//{
//	cout << "void func()" << endl;
//}
//
//class A
//{
//public:
//	void func2()
//	{
//		cout << "A::func()" << endl;
//	}
//};
//
//int main()
//{
//	// 普通函数指针
//	void(*pf1)() = func1;
//	(*pf1)();
//
//	// A类型成员函数的指针
//	void(A::*pf2)() = &A::func2;
//	A aa;
//	(aa.*pf2)();
//
//	return 0;
//}



//////////////////////////////////////////////////////////////////////
// 赋值运算符重载
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// Date d4(d3);
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//
//	// d1 = d3 = d5
//	// d1 = d1
//	Date& operator=(const Date& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//
//		return *this;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2025, 8, 1);
//	Date d2(d1);
//	// 一定注意，这个是拷贝构造
//	Date d4 = d1;
//
//	Date d3(2025, 10, 1);
//	d1 = d3;
//	Date d5(2025, 9, 1);
//
//	d1 = d3 = d5;
//
//	d1 = d1;
//
//	return 0;
//}


///////////////////////////////////////////////////////
// 日期类的实现
#include"Date.h"

void TestDate1() 
{
		// 日期加法
	//Date d1(2025, 8, 1);
	//Date d2 = d1 += 100;
	//d1.Print();  //2025-11-9
	//d2.Print();   //2025-11-9

	//Date d3(2025, 8, 1);
	//Date d4 = d3 + 100;
	//d3.Print();  //2025-8-1
	//d4.Print();  //2025-11-9

	//前置++和后置++
	//Date d1(2025, 8, 1);
	////Date ret1 = d1.operator++(10); // 显示调用，实参只要是整形就可以
	//Date ret1 = d1++;
	//ret1.Print();   //2025-8-1
	//d1.Print();     //2025-8-2
	//
	//Date d2(2025, 8, 1);
	//Date ret2 = ++d2;
	////Date ret2 = d2.operator++();
	//ret2.Print();  //2025-8-2
	//d2.Print();    //2025-8-2

	// 日期类的减法

	Date d1(2025, 11, 9);
	Date d2 = d1 -= 100;
	d1.Print();  //2025 - 8 - 1
	d2.Print();  //2025 - 8 - 1

	Date d3(2025, 11, 9);
	Date d4 = d3 - 100;
	d3.Print();  //2025-11-9
	d4.Print();  //2025 - 8 - 1
}

void TestDate2()
{
	//// 日期类的比较运算符重载
	//Date d1(2025, 11, 9);
	//Date d2(2025, 10, 9);
	//cout << (d1 == d2) << endl;
	
	// 日期类的相减
	//Date d1(2024, 9, 16);
	//Date d2(2025, 9, 16);
	//cout << d1 - d2 << endl;

	//int i = 1;
	//double d = 1.1;
	//cout << i; // cout.operator<<(i)

	////日期类的输出
	//Date d3(2025, 9, 16);
	//Date d4(2020, 9, 16);
	////operator<<(cout, d1);
	//cout << d3 << d4;

	//日期类的输入
	Date d3(2025, 9, 16);
	Date d4(2020, 9, 16);
	Date d5(2020, 9, 16);

	cin >> d3 >> d4 >> d5;
	cout << d3 << d4 << d5;

}

void TestDate4()
{
	const Date d1(2025, 9, 18);
	d1.Print();
	Date d3 = d1 + 100;

	Date d2(2025, 9, 18);
	d2.Print();
	d2 += 10;

	bool ret = d1 > d2;

	Date* p1 = &d2;
	const Date* p2 = &d1;
	cout << p1 << " " << p2 << endl;

}

//int main()
//{
//	int i = 1;
//	double d = 1.1;
//	cout << i; // cout.operator<<(i)
//	cout << d; // cout.operator<<(d)
//
//	return 0;
//}


//
//int main()
//{
//	TestDate4();
//
//
//	return 0;
//
//}









