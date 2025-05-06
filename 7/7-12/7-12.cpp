#include <iostream>
using namespace std;

class SortedArray {
	int size;
	int* p;
	void sort();
public:
	SortedArray() {
		this->size = 0;
		this->p = NULL;
	}
	SortedArray(SortedArray& src) {
		this->size = src.size;
		this->p = new int[size];
		for (int i = 0; i < size; i++) {
			this->p[i] = src.p[i];
		}
		sort();
	}
	SortedArray(int p[], int size) {
		this->size = size;
		this->p = new int[size];
		for (int i = 0; i < size; i++) {
			this->p[i] = p[i];
		}
		sort();
	}
	~SortedArray() {
		delete[] p;
	}
	SortedArray operator +(SortedArray& op2);
	SortedArray& operator =(const SortedArray& op2);
	void show() {
		cout << "배열 출력 : ";
		for (int i = 0; i < size; i++) cout << p[i] << ' ';
		cout << endl;
	}
};

void SortedArray::sort() {
	int tmp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < (size - 1) - i; j++) {
			if (p[j] > p[j + 1]) {
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
}
SortedArray SortedArray::operator +(SortedArray& op2) {
	SortedArray tmp;
	tmp.size = this->size + op2.size;
	tmp.p = new int[tmp.size];
	int s = 0;
	for (int i = 0; i < this->size; i++) {
		tmp.p[s++] = this->p[i];
	}
	for (int i = 0; i < op2.size; i++) {
		tmp.p[s++] = op2.p[i];
	}
	sort();
	return tmp;
}
SortedArray& SortedArray::operator =(const SortedArray& op2) {
	delete[] this->p;
	this->size = op2.size;
	this->p = new int[this->size];
	for (int i = 0; i < size; i++) {
		this->p[i] = op2.p[i];
	}
	sort();
	return *this;
}

int main() {
	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;

	a.show(); b.show(); c.show();
}