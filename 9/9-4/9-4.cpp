#include <iostream>
using namespace std;

class LoopAdder {
	string name;
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string name = "") {
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run();
};

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
	cin >> x >> y;
}
void LoopAdder::write() {
	cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다." << endl;
}

void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}

class WhileLoopAdder : public LoopAdder {
protected:
	virtual int calculate() {
		int x = getX();
		int sum = 0;
		while (x <= getY()) {
			sum += x;
			x++;
		}
		return sum;
	}
public:
	WhileLoopAdder(string name) : LoopAdder(name) {}
};

class DoWhileLoopAdder : public LoopAdder {
protected:
	virtual int calculate() {
		int x = getX();
		int sum = 0;
		do {
			sum += x;
			x++;
		} while (x <= getY());
		return sum;
	}
public:
	DoWhileLoopAdder(string name) : LoopAdder(name) {}
};

int main() {
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder dowhileLoop("Do While Loop");

	whileLoop.run();
	dowhileLoop.run();
}