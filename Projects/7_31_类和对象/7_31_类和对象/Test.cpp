#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//class Stack
//{
//public:
//	// 成员函数
//	void Init(int n = 4)
//	{
//
//	}
//
////private:
//	// 成员变量，声明
//	int* array; // 4 8 4
//	size_t capacity;  // 8  8  
//	size_t top;  // 8 8 8
//};
//
//int main()
//{
//	// 定义，类实例化对象
//	Stack s1;
//	s1.top = 0;
//	s1.Init();
//
//	Stack s2;
//	s1.top = 1;
//	s2.Init(100);
//
//	cout << sizeof(s1) << endl;  //24
//	cout << sizeof(Stack) << endl;  //24
//
//	return 0;
//}


//class A
//{
//public:
//	void Print()
//	{
//		cout << _ch << endl;
//	}
//private:
//	char _ch;
//	int _i;
//};
//
//class B
//{
//public:
//	void Print()
//	{
//		//...
//	}
//};
//
//class C
//{};
//
//int main()
//{
//	cout << sizeof(A) << endl;  //4
//	// 开1byte为了占位，不存储实际数据，表示对象存在过
//	cout << sizeof(B) << endl;  //1
//	cout << sizeof(C) << endl;  //1
//
//	B b1;
//	B b2;
//	cout << &b1 << endl;  //00000037F8EFF6D4
//	cout << &b2 << endl;  //00000037F8EFF6D4
//
//	return 0;
//}

//class Date
//{
//public:
//	//void Init(Date* const this, int year, int month, int day)
//	void Init(int year, int month, int day)
//	{
//		cout << this << endl;
//
//		//const保护this不能修改
//		//this = nullptr;
//
//		//this->_year = year;
//		this->_year = year;
//		this->_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	// 这里只是声明，没有开空间
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2;
//	// d1.Init(&d1, 2025, 7, 31);
//	d1.Init(2025, 7, 31);
//
//	//d2.Init(&d2, 2025, 7, 31);
//	d2.Init(2025, 9, 1);
//
//	d1.Print();
//	d2.Print();
//
//	return 0;
//}


//class A
//{
//public:
//	void Print()
//	{
//		cout << this << endl;
//		cout << "A::Print()" << endl;
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//	p->Print();  // call 函数地址
//
//	//(*p).Print();
//
//	// 00C3210C  mov         ecx, dword ptr[p]
//	// 00C3210F  call        A::Print(0C31447h)
//
//	return 0;
//}

//class Date 
//{
//public:
//	//1. 无参构造函数
//	//Date() 
//	//{
//	//	_year = 2000;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//	// 2. 带参构造函数，不是默认构造函数
//	//Date(int year, int month, int day) 
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	// 3. 全缺省构造函数
//	Date(int year = 2000, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print() 
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//};
//
//int main() {
//	//函数声明
//	/*Date func();*/
//
//	Date d1;  //2000/1/1
//	Date d2 = Date(2025, 9, 9);  //2025/9/9
//
//	Date d3();
//	Date d3;
//
//	d1.Print();
//	d2.Print();
//}

//class Date {
//public:
//	void Print() {
//		cout << _year << "/" << _month << "/"  << _day;
//
//	}
//private:
//	//内置类型
//	int _year;
//	int _month;
//	int _day;
//};
//
//class Stack {
//public:
//	Stack()
//	{
//		_a = nullptr;
//		_top = 0;
//		_capacity = 0;
//	}
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//// 两个栈实现一个队列
//class MyQueue
//{
//private:
//	// 自定义类型
//	Stack _pushst;
//	Stack _popst;
//	int _size;
//
//};
//
//int main() {
//	Date d1;
//	d1.Print();
//
//	MyQueue q;
//
//
//	return 0;
// }

//析构函数
//class Date {
//public:
//	Date(int year=2000, int month=1, int day=1) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print() {
//		cout << _year << "/" << _month << "/" << _day << endl;
//
//	}
//
//	//日期类的析构函数可以不写，因为没有资源释放的需求
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//
//private:
//	//内置类型
//	int _year;
//	int _month;
//	int _day;
//};
//
//class Stack {
//public:
//	Stack(int n = 4)
//	{
//		_a = (int*)malloc(sizeof(int)*n);
//		//检查a是否开辟成功
//		_top = 0;
//		_capacity = n;
//	}
//	// 有资源申请，自己写析构
//	~Stack() {
//		if (_a) 
//		{
//			cout << "~Stack()" << endl;
//			free(_a);
//			_a = nullptr;
//			_top = 0;
//			_capacity = 0;
//		}
//	}
//
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//// 两个栈实现一个队列
//class MyQueue
//{
//public:
//	~MyQueue() 
//	{
//		cout << "~MyQueue" << endl;
//	}
//private:
//	// 自定义类型
//	Stack _pushst;
//	Stack _popst;
//	int _size;
//
//};
//
//int main() {
//	Date d1;
//	Date d2;
//
//	Stack s1;
//	Stack s2(10);
//
//	MyQueue q;
//
//	return 0;
//}






















