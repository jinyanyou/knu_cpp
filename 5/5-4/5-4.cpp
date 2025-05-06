#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) {
		big = a;
		return true;
	}
	else {
		if (a > b) big = a;
		else big = b;
		return false;
	}
}

int main() {
	int a, b, big;
	cout << "두 개의 정수 입력 >> ";
	cin >> a >> b;

	if (bigger(a, b, big)) {
		cout << "두 수 동일" << endl;
	}
	else {
		cout << a << "와 " << b << " 중 큰 수는 " << big << endl;
	}
}