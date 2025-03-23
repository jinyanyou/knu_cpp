#include <iostream>

int main() {
	int sum = 0;
	for (int k = 1; k <= 10; k++) {
		sum += k;
	}

	std::cout << "1에서 10까지 더한 결과는 " << sum << "입니다";

	return 0;
}