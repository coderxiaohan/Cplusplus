#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

// C++的内存管理：new delete
// 1、用法
// 2、初始化和析构的特性
// 3、错误处理

//void func()
//{
//	int i = 1;
//	int* ptr = nullptr;
//	do{
//		if (i == 3656) 
//		{
//			int x = 0; // 只是为了可以在这句加断点，因为vs不可以在空语句上加断点
//		}
//		ptr = new int[1024 * 1024];
//		cout << i++ << ":" << ptr << endl;
//	} while (ptr);
//}
//
//int main()
//{
//	try
//	{
//		func();
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//}


//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A():" << this << endl;
//	}
//	~A()
//	{
//		cout << "~A():" << this << endl;
//	}
//
//private:
//	int _a;
//};
//
//int main()
//{
//	// A* p2 = (A*)operator new(sizeof(A));
//	A* p1 = new A(1);
//	delete p1;
//
//	A* p2 = new A[10];
//	delete[] p2;
//
//	return 0;
//
//}

//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{
//		cout << "A():" << this << endl;
//	}
//	~A()
//	{
//		cout << "~A():" << this << endl;
//	}
//private:
//	int _a;
//};
//
//// 定位new/replacement new
//int main()
//{
//	
//	A* p = new A(1);
//
//	// p现在指向的只不过是与A对象相同大小的一段空间，还不能算是一个对象，因为构造函数没有执行
//	A* ptr = (A*)operator new(sizeof(A));
//
//	// 显示调用构造函数
//	//new(ptr)A,A有默认构造函数时
//	new(ptr)A(1);  // 注意：如果A类的构造函数有参数时，此处需要传参
//
//	// 调用析构函数并释放空间
//	ptr->~A();
//	operator delete(ptr);
//
//	return 0;
//}


//////////////////////////////////////////////////
// 模板初阶
//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//}
//
//void Swap(char& left, char& right)
//{
//	char temp = left;
//	left = right;
//	right = temp;
//}

// 函数模板
// 泛型编程
//template<typename T>
//template<class T> // 第二种写法，class代替typename
//void Swap(T& x, T& y)
//{
//	T temp = x;
//	x = y;
//	y = temp;
//};
//
//int main()
//{
//	int i = 1, j = 2;
//	Swap(i, j);
//
//	char c1 = 'z', c2 = 'y';
//	Swap(c1, c2);
//
//	// Swap(i, c2)  // 类型不同，报错
//
//	return 0;
//}

//template<typename T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//
//template<class T>
//void Func(size_t n)
//{
//	T* ptr = new T[n];
//	cout << ptr << endl;
//}
//
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.1, d2 = 20.1;
//
//	/*
//    该语句不能通过编译，因为在编译期间，当编译器看到该实例化时，需要推演其实参类型
//    通过实参a1将T推演为int，通过实参d1将T推演为double类型，但模板参数列表中只有
//	一个T，编译器无法确定此处到底该将T确定为int 或者 double类型而报错
//   	   注意：在模板中，编译器一般不会进行类型转换操作，因为一旦转化出问题，编译器就需要
//	背黑锅
//    Add(a1, d1);
//   */
//
//   // 此时有两种处理方式：1. 用户自己来强制转化 2. 使用显式实例化
//
//	// 隐式实例化（实参类型，推导模板参数类型）
//	cout << Add(a1, a2) << endl;
//	cout << Add(d1, d2) << endl;
//
//	cout << Add((double)a1, d1); //  用户自己来强制转化
//	cout << Add(a1, (int)d1);
//
//	// 显示实例化
//	cout << Add<int>(a1, d1) << endl;
//	cout << Add<double>(a1, d1) << endl;
//
//	Func<int>(10);
//	Func<double>(10);
//
//	return 0;
//}


//// 专门处理int的加法函数
//int Add(int left, int right)
//{
//	return left + right;
//}
//
//
//// 通用加法函数
//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.1, d2 = 20.1;
//
//
//	cout << Add(a1, a2) << endl;  // 有现成的匹配现成的
//	cout << Add<int>(a1, a2);     //这个强制调模板
//	cout << Add(d1, d2) << endl;  //这个没有现成的，调模板
//
//	return 0;
//}


//// 专门处理int的加法函数
//int Add(int left, int right)
//{
//	return left + right;
//}


//// 通用加法函数
//template<class T1, class T2>
//T2 Add(const T1& left, const T2& right)
//{
//	return left + right;
//}
//
//int main()
//{
//	cout << Add(1, 2) << endl;  //调用现成的第一个
//	cout << Add(1, 1.21) << endl; // 调用通用的模板函数
//	return 0;
//}

//////类模板
////typedef int T;
////
//template<class T>
//class Stack
//{
//public:
//	Stack(size_t n = 4)
//		:_a(new T[n])
//		, _top(0)
//		, _capacity(0)
//	{}
//private:
//	T* _a;
//	size_t _top;
//	size_t _capacity;
//};
//
//int main()
//{
//	//类模板都必须显示实例化
//	//普通类:类名就是类型;类模板:类名不是类型,类名<模板参数> 这个才是类型 -> eg:Stack<int>
//
//	//Stack st1;  // 存int
//	//Stack st2;  // 存double
//
//	Stack<int> st1; // 存int
//	Stack<double> st2; // 存double
//
//	return 0;
//}

// 泛型编程
// 模板不支持声明和定义分离定义.h 和 .cpp
template<class T>
class Stack
{
public:
	//Stack(size_t n = 4)
	//	:_a(new T[n])
	//	, top(0)
	//	, capacity(0)
	//{}

	//void Push(const T& x)
	//{
	//	//扩容
	//	//...
	//	_a[top++] = x;
	//} 
	Stack(size_t n = 4);  // 函数的声明
	void Push(const T& x);

private:
	T* _a;
	size_t _top;
	size_t _capacity;
};

template<class T>
Stack<T>::Stack(size_t n)
	:_a(new T[n])
	, _top(0)
	, _capacity(0)
{}

template<class T>
void Stack<T>::Push(const T& x)
{
	// 扩容
	//...
	_a[_top++] = x;
}

template<class T = int>  //可以给缺省参数
class A
{
public:
	T x1;
	T x2;
};

template<class T1, class T2 = int>  //可以写全缺省,也可以写半缺省,跟以前一样的用法
class B
{
public:
	T1 x1;
	T2 x2;
};

int main()
{
	//类模板都必须显示实例化
	Stack<int> st1;  //存int
	st1.Push(1);
	st1.Push(2);
	st1.Push(3);

	Stack<double> st2;  //存double
	st2.Push(1.1);
	st2.Push(2.1);
	st2.Push(3.1);

	A<> aa1;  // 用缺省的int类型
	A<double> aa2;

	B<double> bb1;
	B<double, double> bb2;

}
