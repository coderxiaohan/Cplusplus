#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//using namespace std;
//
//int main(){
//	cout << "Hello Word!\n"<<endl;
//	return 0;
//
//};

////命名冲突
//#include<stdio.h>
//#include<stdlib.h>
//
//int rand = 10;
//
//int main() {
//
//	printf("%d\n", rand);  // 编译报错，rand重定义，以前的定义是函数
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//namespace bit{
//	// 命名空间中可以定义变量/函数/类型
//	int rand = 10;
//
//	int add(int x, int y) {
//		return x + y;
//	}
//
//	struct Node {
//		struct Node* next;
//		int val;
//	};
//}
//
//int a = 1;
//void func() {
//	int a = 0;
//}
//
//int main() {
//	// 编译器语法查找确认，默认规则先局部查找->全局查找->没有找到就报错未声明的标识符
//	int a = 0;
//	printf("%d\n", a);  // 0
//	//域作用限定符
//	printf("%d\n", ::a); // 1,::全局查找
//	
//	printf("%p\n", ::rand); // 随机值,::全局查找
//	// 编译器语法查找确认，指定作用域，就直接去这个域查找->没有找到就报错未声明的标识符
//	printf("%d\n", bit::rand); // 10
//
//	printf("%p\n", bit::add);
//	printf("%d\n", bit::add(1, 2));
//	
//	struct bit::Node node;
//
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//namespace bit{
//	namespace xiaohan {
//		int age = 18;
//		int Add(int left, int right) {
//			return left + right;
//		}
//	}
//
//	namespace xiaoqian {
//		int age = 19;
//		int Add(int left, int right) {
//			return (left + right) * 10;
//		}
//	}
//}
//
//	
//
//int  main() {
//
//	printf("%d\n", bit::xiaohan::age);  //18
//	printf("%d\n", bit::xiaoqian::age);  //19
//
//	return 0;
//}


//#include"stack.h"
//int main() {
//	st::ST s1;
//	st::Init(&s1);
//	st::Push(&s1, 1);
//	st::Push(&s1, 2);
//	st::Push(&s1, 3);
//
//	return 0;
//}


//#include<algorithm>
//
//int main()
//{
//	int a[] = { 4,1,5,7 };
//	std::sort(a, a + 4);
//
//	return 0;
//}


//#include<iostream>
//
//int main()
//{
//	int i = 100;
//	i << 5;
//
//	double d = 1.1111;
//
//	// 任何变量，都转换成字符串，插入到流中
//	// 自动识别类型
//	std::cout << i<<'\n'<<"\n";
//	std::cout << "hello world"<< std::endl; // end line
//	std::cout << i <<" "<< d << std::endl;
//	printf("%.2f\n", d);
//
//	std::cin >> i >> d;
//	std::cout << i << " " << d << std::endl;
//
//	// 类，复杂类型, IO流支持复杂类型输入输出
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//// int cout = 0;
//
//int main()
//{
//	int i = 100;
//	double d = 1.1111;
//	cout << "hello world" << endl; // end line
//	cout << i << " " << d << endl;
//	cout << i << " " << d << endl;
//	cout << i << " " << d << endl;
//
//	return 0;
//}

#include<iostream>
#include<algorithm>

// 部分展开
using std::cout;
using std::endl;

//int cout = 0;
int sort = 0;

int main()
{
	int i = 100;
	double d = 1.1111;
	cout << "hello world" << endl; // end line
	cout << i << " " << d << endl;
	cout << i << " " << d << endl;
	cout << i << " " << d << endl;

	std::cin >> i;

	int a[] = { 4,1,5,7 };
	std::sort(a, a + 4);

	return 0;
}





