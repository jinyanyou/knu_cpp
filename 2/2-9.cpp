#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	string ad;
	int age;

	cout << "�̸���?";
	getline(cin, name);
	cout << "�ּҴ�?";
	getline(cin, ad);
	cout << "���̴� ?";
	cin >> age;

	cout << name << ", " << ad << ", " << age << "��";

	return 0;
}