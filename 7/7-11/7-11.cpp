#include <iostream>
using namespace std;

class Stack {
	int st[100];
	int top;
public:
	Stack() { top = -1; }
	bool operator !() {
		if (top == -1) return true;
		else return false;
	}
	Stack& operator <<(int x) {
		st[++top] = x;
		return *this;
	}
	Stack& operator >>(int &x) {
		x = st[top--];
		return *this;
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (1) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}