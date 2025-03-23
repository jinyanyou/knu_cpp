#include <iostream>
using namespace std;

int main() {
	char s[50];
	cout << "문자열 입력>>";
	cin >> s;

	for (int i = 0; s[i] != 0; i++) {
		for (int j = 0; j <= i; j++) cout << s[j];
		cout << "\n";
	}

	return 0;
}