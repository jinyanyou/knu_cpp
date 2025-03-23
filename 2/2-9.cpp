#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	string ad;
	int age;

	cout << "이름은?";
	getline(cin, name);
	cout << "주소는?";
	getline(cin, ad);
	cout << "나이는 ?";
	cin >> age;

	cout << name << ", " << ad << ", " << age << "세";

	return 0;
}