#include <iostream>
using namespace std;

template <class T>
T biggest(T a[], int n) {
	if (n <= 0) return 0;

	T b = a[0];
	for (int i = 1; i < n; i++)
		if (b < a[i])
			b = a[i];
	return b;
}

int main() {
	int x[] = {1, 10, 100, 5, 4};
	cout << biggest(x, 5) << endl;

	double y[] = {1.3, 3.14, 2.67, 8.0, 6.35, 23.6, 9,12};
	cout << biggest(y, 7);
}