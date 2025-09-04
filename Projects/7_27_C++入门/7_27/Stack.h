#pragma once
namespace st {
	typedef int STDataType;
	typedef struct Stack {
		STDataType* a;
		int top;
		int capacity;
	}ST;

	void Init(ST* ps);
	void Destroy(ST* ps);
	void Push(ST* ps, STDataType x);
	void Pop(ST* ps);

}


