#include <iostream>
using namespace std;

// (1)

class Matrix {
	int arr[4];
public:
	Matrix() : Matrix(0, 0, 0, 0) {}
	Matrix(int a1, int a2, int a3, int a4) {
		arr[0] = a1;
		arr[1] = a2;
		arr[2] = a3;
		arr[3] = a4;
	}
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++)
			cout << arr[i] << ' ';
		cout << "}" << endl;
	}
	void operator >>(int b[4]) {
		for (int i = 0; i < 4; i++)
			b[i] = arr[i];
	}
	Matrix& operator <<(int b[4]) {
		for (int i = 0; i < 4; i++)
			arr[i] = b[i];
		return *this;
	}
};

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}

// (2)
/*
class Matrix {
	int arr[4];
public:
	Matrix() : Matrix(0, 0, 0, 0) {}
	Matrix(int a1, int a2, int a3, int a4) {
		arr[0] = a1;
		arr[1] = a2;
		arr[2] = a3;
		arr[3] = a4;
	}
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++)
			cout << arr[i] << ' ';
		cout << "}" << endl;
	}
	friend void operator >>(Matrix a, int b[4]);
	friend Matrix& operator <<(Matrix& a, int b[4]);
};

void operator >>(Matrix a, int b[4]) {
	for (int i = 0; i < 4; i++)
		b[i] = a.arr[i];
}
Matrix& operator <<(Matrix& a, int b[4]) {
	for (int i = 0; i < 4; i++)
		a.arr[i] = b[i];
	return a;
}

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}*/