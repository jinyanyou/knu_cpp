#include <iostream>
using namespace std;

int main() {
	char s[50];
	cout << "���ڿ� �Է�>>";
	cin >> s;

	for (int i = 0; s[i] != 0; i++) {
		for (int j = 0; j <= i; j++) cout << s[j];
		cout << "\n";
	}

	return 0;
}