#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class IntStack : public AbstractStack {
	int capacity;
	int* p;
	int tos;
public:
	IntStack(int size);
	~IntStack();
	bool push(int n);
	bool pop(int& n);
	int size() { return tos; }
};

IntStack::IntStack(int size) {
	p = new int[size];
	this->capacity = size;
	tos = 0;
}

IntStack::~IntStack() {
	if(p) delete[] p;
}

bool IntStack::push(int n) {
	if (tos >= capacity) return false;

	p[tos] = n;
	tos++;
	return true;
}

bool IntStack::pop(int& n) {
	if (tos == 0) return false;

	tos--;
	n = p[tos];
	return true;
}

int main() {
	IntStack a(6);
	for (int i = 0; i < 10; i++) {
		if (a.push(i)) cout << "push 성공" << endl;
		else cout << "스택 full" << endl;
	}

	int n;
	for (int i = 0; i < 10; i++) {
		if (a.pop(n)) cout << "pop 성공 " << n << endl;
		else cout << "스택 empty" << endl;
	}
}