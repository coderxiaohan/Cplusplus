#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//using namespace std;
//
//int main(){
//	cout << "Hello Word!\n"<<endl;
//	return 0;
//
//};

////������ͻ
//#include<stdio.h>
//#include<stdlib.h>
//
//int rand = 10;
//
//int main() {
//
//	printf("%d\n", rand);  // ���뱨��rand�ض��壬��ǰ�Ķ����Ǻ���
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//namespace bit{
//	// �����ռ��п��Զ������/����/����
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
//	// �������﷨����ȷ�ϣ�Ĭ�Ϲ����Ⱦֲ�����->ȫ�ֲ���->û���ҵ��ͱ���δ�����ı�ʶ��
//	int a = 0;
//	printf("%d\n", a);  // 0
//	//�������޶���
//	printf("%d\n", ::a); // 1,::ȫ�ֲ���
//	
//	printf("%p\n", ::rand); // ���ֵ,::ȫ�ֲ���
//	// �������﷨����ȷ�ϣ�ָ�������򣬾�ֱ��ȥ��������->û���ҵ��ͱ���δ�����ı�ʶ��
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
//	// �κα�������ת�����ַ��������뵽����
//	// �Զ�ʶ������
//	std::cout << i<<'\n'<<"\n";
//	std::cout << "hello world"<< std::endl; // end line
//	std::cout << i <<" "<< d << std::endl;
//	printf("%.2f\n", d);
//
//	std::cin >> i >> d;
//	std::cout << i << " " << d << std::endl;
//
//	// �࣬��������, IO��֧�ָ��������������
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

// ����չ��
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





