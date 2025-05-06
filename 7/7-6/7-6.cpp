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
	Matrix operator+(Matrix m);
	Matrix& operator +=(Matrix m);
	bool operator ==(Matrix m);
};

Matrix Matrix::operator+(Matrix m) {
	Matrix tmp;
	for (int i = 0; i < 4; i++)
		tmp.arr[i] = arr[i] + m.arr[i];
	return tmp;
}
Matrix& Matrix::operator+=(Matrix m) {
	for (int i = 0; i < 4; i++)
		arr[i] += m.arr[i];
	return *this;
}
bool Matrix::operator==(Matrix m) {
	for (int i = 0; i < 4; i++) {
		if (arr[i] != m.arr[i]) return false;
	}
	return true;
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
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
	friend Matrix operator+(Matrix a, Matrix m);
	friend Matrix& operator +=(Matrix& a, Matrix m);
	friend bool operator ==(Matrix a, Matrix m);
};

Matrix operator+(Matrix a, Matrix m) {
	Matrix tmp;
	for (int i = 0; i < 4; i++)
		tmp.arr[i] = a.arr[i] + m.arr[i];
	return tmp;
}
Matrix& operator+=(Matrix& a, Matrix m) {
	for (int i = 0; i < 4; i++)
		a.arr[i] += m.arr[i];
	return a;
}
bool operator==(Matrix a, Matrix m) {
	for (int i = 0; i < 4; i++) {
		if (a.arr[i] != m.arr[i]) return false;
	}
	return true;
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}*/