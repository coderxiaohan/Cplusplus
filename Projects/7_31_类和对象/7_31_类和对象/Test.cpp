#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//class Stack
//{
//public:
//	// ��Ա����
//	void Init(int n = 4)
//	{
//
//	}
//
////private:
//	// ��Ա����������
//	int* array; // 4 8 4
//	size_t capacity;  // 8  8  
//	size_t top;  // 8 8 8
//};
//
//int main()
//{
//	// ���壬��ʵ��������
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
//	// ��1byteΪ��ռλ�����洢ʵ�����ݣ���ʾ������ڹ�
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
//		//const����this�����޸�
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
//	// ����ֻ��������û�п��ռ�
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
//	p->Print();  // call ������ַ
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
//	//1. �޲ι��캯��
//	//Date() 
//	//{
//	//	_year = 2000;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//	// 2. ���ι��캯��������Ĭ�Ϲ��캯��
//	//Date(int year, int month, int day) 
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	// 3. ȫȱʡ���캯��
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
//	//��������
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
//	//��������
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
//// ����ջʵ��һ������
//class MyQueue
//{
//private:
//	// �Զ�������
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

//��������
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
//	//������������������Բ�д����Ϊû����Դ�ͷŵ�����
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//
//private:
//	//��������
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
//		//���a�Ƿ񿪱ٳɹ�
//		_top = 0;
//		_capacity = n;
//	}
//	// ����Դ���룬�Լ�д����
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
//// ����ջʵ��һ������
//class MyQueue
//{
//public:
//	~MyQueue() 
//	{
//		cout << "~MyQueue" << endl;
//	}
//private:
//	// �Զ�������
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






















