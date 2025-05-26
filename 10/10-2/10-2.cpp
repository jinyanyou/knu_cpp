#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <class T>
T equalArrays(T data1[], T data2[], int n) {
	for (int i = 0; i < n; i++) {
		if (data1[i] != data2[i]) return false;
		else return true;
	}
}

int main() {
	int x[] = {1, 10, 100, 5, 4};
	int y[] = {1, 10, 100, 5, 4};

	if (equalArrays(x, y, 5)) cout << "같다";
	else cout << "다르다";
}