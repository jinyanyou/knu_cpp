#include <iostream>
int main() {
	for (int n = 1; n < 10; n++) {
		for (int i = 1; i < 10; i++) {
			std::cout << i << "x" << n << "=" << n * i << "\t";
		}
		std::cout << "\n";
	}
	
	return 0;
}