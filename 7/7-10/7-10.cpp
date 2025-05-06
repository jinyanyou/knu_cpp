#include <iostream>
using namespace std;

class Statistics {
	int* data;
	int size;
public:
	Statistics(int size = 0) { this->size = size; this->data = new int[size]; }
	bool operator !() {
		if (size == 0) return true;
		else false;
	}
	Statistics& operator >>(int& avg);
	Statistics& operator <<(int x);
	Statistics& operator ~();
};

Statistics& Statistics::operator >>(int& avg) {
	int sum = 0;
	for (int i = 0; i < size; i++) sum += data[i];
	avg = sum / size;
	return *this;
}
Statistics& Statistics::operator <<(int x) {
	size++;
	Statistics tmp(size);
	for (int i = 0; i < size - 1; i++) {
		tmp.data[i] = data[i];
	}
	tmp.data[size - 1] = x;

	delete[] this->data;
	this->data = new int[size];
	for (int i = 0; i < size; i++) {
		this->data[i] = tmp.data[i];
	}
	return *this;
}
Statistics& Statistics::operator ~() {
	for (int i = 0; i < size; i++)
		cout << data[i] << ' ';
	cout << endl;
	return *this;
}

int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;

	int x[5];
	cout << "5 개의 정수를 입력하라 >> ";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg = " << avg << endl;
}