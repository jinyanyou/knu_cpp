#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() :Circle(1) {}
	Circle(int r) { this->radius = r; }
	void show() { cout << "반지름 : " << radius << endl; }
};

void swap(Circle& a, Circle& b) {
	Circle tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	Circle a(3), b(6);
	cout << "변경 전" << endl;
	a.show();
	b.show();

	cout << "변경 후" << endl;
	swap(a, b);
	a.show();
	b.show();
	return 0;
}