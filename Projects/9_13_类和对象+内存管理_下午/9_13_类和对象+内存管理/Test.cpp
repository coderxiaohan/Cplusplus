#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//// 前置声明，否则A的友元函数声明编译器不认识B
//class B;
//
//class A
//{
//	// 友元声明
//	friend void func(const A & aa, const B & bb);
//	private:
//	int _a1 = 1;
//	int _a2 = 2;
//};
//
//class B
//{
//	// 友元声明
//	friend void func(const A& aa, const B& bb);
//private:
//	int _b1 = 3;
//	int _b2 = 4;
//};
//
//void func(const A& aa, const B& bb)
//{
//	cout << aa._a1 << endl;
//	cout << bb._b1 << endl;
//}
//
//// xxx.h
//class C
//{
//	// 友元声明
//	friend class D;
//public:
//	void func1(const D& dd);
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//};
//
//class D
//{
//	friend class C;
//public:
//	void func1(const C& aa);
//	void func2(const C& aa);
//private:
//	int _b1 = 3;
//	int _b2 = 4;
//};
//
//// xxx.cpp
//void C::func1(const D& dd)
//{
//	cout << dd._b1 << endl;
//}
//
//void D::func1(const C& aa)
//{
//	cout << aa._a1 << endl;
//	cout << _b1 << endl;
//}
//
//void D::func2(const C& aa)
//{
//	cout << aa._a2 << endl;
//	cout << _b2 << endl;
//}
//
//int main()
//{
//	A aa;
//	B bb;
//	func(aa, bb);
//
//	C cc;
//	D dd;
//	dd.func1(cc);
//	dd.func2(cc);
//
//	return 0;
//}

//class A
//{
//private:
//	static int _k;
//	int _h = 1;
//public:
//	// 内部类
//	class B // B默认就是A的友元
//	{
//	public:
//		void foo(const A& a)
//		{
//			cout << _k << endl; //OK
//			cout << a._h << endl; //OK
//		}
//	private:
//		int _b1;
//	};
//};
//
//int main()
//{
//	// 内部类不参与类的大小计算
//	cout << sizeof(A) << endl;  //4
//
//	A::B bb;
//
//	return 0;
//}
//
//class Solution {
//    class Sum
//    {
//    public:
//        Sum()
//        {
//            _ret += _i;
//            ++_i;
//        }
//    };
//public:
//    void Clear()
//    {
//        _i = 1;
//        _ret = 0;
//    }
//
//    int Sum_Solution(int n) {
//        Sum* ptr = new Sum[n];
//        delete[] ptr;
//
//        return _ret;
//    }
//
//    ~Solution()
//    {
//        cout << "~Solution()" << endl;
//    }
//
//private:
//    static int _i;
//    static int _ret;
//};
//
//int Solution::_i = 1;
//int Solution::_ret = 0;
//
//
//void Func(const Solution& s = Solution(), int i = 1)
//{
//
//}
//
//int main()
//{
//    Solution s; // 有名对象
//    cout << s.Sum_Solution(10) << endl;  //55
//    s.Clear();
//
//    // 生命周期只在当前一行
//    //Solution(); // 匿名对象
//    cout << Solution().Sum_Solution(10) << endl; //55
//    // const 引用会延长匿名对象的生命周期，生命周期跟const 引用一样
//    const Solution& ref = Solution();
//
//   /* Func(Solution());
//    Func(s);
//    Func();*/
//
//    return 0;
//}


//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a;
//};
//class Solution {
//public:
//	int Sum_Solution(int n) {
//		//...
//		return n;
//	}
//};
//int main()
//{
//	A aa1;
//	// 不能这么定义对象，因为编译器无法识别下面是一个函数声明，还是对象定义
//	//A aa1();
//	// 但是我们可以这么定义匿名对象，匿名对象的特点不用取名字，
//	// 但是他的生命周期只有这一行，我们可以看到下一行他就会自动调用析构函数
//	A();
//	A(1);
//	A aa2(2);
//	// 匿名对象在这样场景下就很好用，当然还有一些其他使用场景，这个我们以后遇到了再说
//	Solution().Sum_Solution(10);
//	return 0;
//}


//class a
//{
//public:
//	a(int a = 0)
//		:_a1(a)
//	{
//		cout << "a(int a)" << endl;
//	}
//
//	a(const a& aa)
//		:_a1(aa._a1)
//	{
//		cout << "a(const a& aa)" << endl;
//	}
//
//	a& operator=(const a& aa)
//	{
//		cout << "a& operator=(const a& aa)" << endl;
//		if (this != &aa)
//		{
//			_a1 = aa._a1;
//		}
//		return *this;
//	}
//
//	~a()
//	{
//		cout << "~a()" << endl;
//	}
//private:
//	int _a1 = 1;
//};
//
//void f1(a aa)
//{}
//
//int main()
//{
//	// 构造+拷贝构造 优化-> 构造
//	a aa1 = 1;
//	cout << "==================" << endl;
//
//	f1(aa1);
//	cout << "==================" << endl;
//
//	f1(1);
//	cout << "==================" << endl;
//
//	f1(a(1));
//	cout << "==================" << endl;
//
//
//	return 0;
//}


//class A
//{
//public:
//	A(int a = 0)
//		:_a1(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	A(const A& aa)
//		:_a1(aa._a1)
//	{
//		cout << "A(const A& aa)" << endl;
//	}
//	A& operator=(const A& aa)
//	{
//		cout << "A& operator=(const A& aa)" << endl;
//		if (this != &aa)
//		{
//			_a1 = aa._a1;
//		}
//		return *this;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a1 = 1;
//};
//
//void f1(A aa)
//{}
//A f2()
//{
//	A aa;
//	return aa;
//}
//int main()
//{
//	// 传值传参
//	// 构造+拷贝构造
//	A aa1;
//	f1(aa1);
//	cout << endl;
//	// 隐式类型，连续构造+拷贝构造->优化为直接构造
//	f1(1);
//	// 一个表达式中，连续构造+拷贝构造->优化为一个构造
//	f1(A(2));
//	cout << endl;
//	cout << "***********************************************" << endl;
//	// 传值返回
//	// 不优化的情况下传值返回，编译器会生成一个拷贝返回对象的临时对象作为函数调用表达
//	//式的返回值
//		// 无优化 （vs2019 debug）
//		// 一些编译器会优化得更厉害，将构造的局部对象和拷贝构造的临时对象优化为直接构造
//		//（vs2022 debug）
//		f2();
//	cout << endl;
//	// 返回时一个表达式中，连续拷贝构造+拷贝构造->优化一个拷贝构造 （vs2019 debug）
//	// 一些编译器会优化得更厉害，进行跨行合并优化，将构造的局部对象aa和拷贝的临时对象
//	//和接收返回值对象aa2优化为一个直接构造。（vs2022 debug）
//		A aa2 = f2();
//	cout << endl;
//	// 一个表达式中，开始构造，中间拷贝构造+赋值重载->无法优化（vs2019 debug）
//	// 一些编译器会优化得更厉害，进行跨行合并优化，将构造的局部对象aa和拷贝临时对象合
//	//并为一个直接构造（vs2022 debug）
//		aa1 = f2();
//	cout << endl;
//	return 0;
//}


 // https://en.cppreference.com/w/cpp/language/copy_elision.html
//A f2()
//{
//	// NRVO
//	/*A aa;
//	cout << &aa << endl;
//	return aa;*/
//	
//	// URVO
//	return A(1);
//}
//
//int main()
//{
//	A aa1 = f2();
//	cout << &aa1 << endl;
//
//	return 0;
//}

//A f2()
//{
//	// NRVO
//	A aa;
//	cout << &aa << endl;
//	return aa;
//
//	// URVO
//	// return A(1);
//}
//
//int main()
//{
//	// 不推荐
//	A aa1;
//	aa1 = f2();
//	cout << &aa1 << endl;
//
//	// 推荐
//	A aa2 = f2();
//
//	return 0;
//}


//void main()
//{
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";
//	const char* pChar3 = "abcd";
//
//	*char2 += 1;
//	//(*(char*)pChar3) += 1;
//
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//	free(ptr1);
//	free(ptr3);
//
//	const int i = 10;
//	int j = 1;
//	cout << &i << endl;
//	cout << &j << endl;
//	cout << (void*)pChar3 << endl;
//}

//int globalVar = 1;
//static int staticGlobalVar = 1;
//void Test()
//{
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";
//	const char* pChar3 = "abcd";
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//	free(ptr1);
//	free(ptr3);
//}

//int main()
//{
//	// 1.malloc/calloc/realloc的区别是什么？
//	int* p2 = (int*)calloc(4, sizeof(int));
//	int* p3 = (int*)realloc(p2, sizeof(int) * 50);
//	cout << p2 << endl;
//	cout << p3 << endl;
//
//	// 这里需要free(p2)吗？
//	free(p3);
//
//	int* p5 = new int;	    // 单个对象
//	int* p6 = new int[10];  // 数组
//
//	int* p7 = new int(5);	    // 单个对象
//	int* p8 = new int[10]{1,2,3,10};  // 数组
//
//	delete p5;
//	delete[] p6;
//	delete p7;
//	delete[] p8;
//}

//void Test()
//{
//	// 动态申请一个int类型的空间
//	int* ptr4 = new int;
//	// 动态申请一个int类型的空间并初始化为10
//	int* ptr5 = new int(10);
//	// 动态申请10个int类型的空间
//	int* ptr6 = new int[3];
//	delete ptr4;
//	delete ptr5;
//	delete[] ptr6;
//}


class A
{
public:
	A(int a = 0)
		: _a(a)
	{
		cout << "A():" << this << endl;
	}
	~A()
	{
		cout << "~A():" << this << endl;
	}
private:
	int _a;
};

struct ListNode
{
	ListNode* _next;
	int _val;

	ListNode(int val)
		:_next(nullptr)
		, _val(val)
	{}
};

int main()
{
	// 只开空间，不调用构造初始化
	A* p1 = (A*)malloc(sizeof(A));

	A* p2 = new A;
	A* p3 = new A(10);

	delete p2;
	delete p3;

	ListNode* n1 = new ListNode(1);
	ListNode* n2 = new ListNode(2);
	ListNode* n3 = new ListNode(3);


	return 0;
}
