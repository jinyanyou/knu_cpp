#include <iostream>
#include <vector>
using namespace std;

template <class T>
void reverseArray(T x[], int n) {
	int j = n;
	int* p = new int[n];
	for (int i = 0; i < n; i++) p[i] = x[--j];
	for (int i = 0; i < n; i++) x[i] = p[i];
	
	delete[] p;
}

int main() {
	int x[] = {1, 10, 100, 5, 4};
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
}