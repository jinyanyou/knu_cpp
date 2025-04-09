#include <iostream>
#include <string>
using namespace std;

int main() {
	int* arr = new int[5];
	float ave = 0.0f;

	cout << "정수 5개 입력 >> ";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		ave += arr[i];
	}

	ave /= 5;
	cout << "평균 " << ave << endl;

	return 0;
}