#include <iostream>
int main() {
	int n = 1;
	for (n; n <= 100; n++) {
		std::cout << n << "\t";
		if (n % 10 == 0) {
			std::cout << "\n";
		}
	}

	return 0;
}