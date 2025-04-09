#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->name = name; this->radius = radius;
	}
	double getArea() { return radius * radius * 3.14; }
	string getName() { return name; }
};

class CircleManager {
	Circle *p;
	int size;
public:
	CircleManager(int size) {
		p = new Circle[size]; 
		this->size = size;
	}
	~CircleManager() { delete[] p; }
	void setCircle(int index, string name, int r);
	void searchByName();
	void searchByArea();
};

void CircleManager::setCircle(int index, string name, int r) {
	if (index >= 0 && index < size) {
		p[index].setCircle(name, r);
	}
}

void CircleManager::searchByName() {
	string q;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> q;

	for (int i = 0; i < size; i++) {
		if (q == p[i].getName()) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
			break;
		}
	}
}

void CircleManager::searchByArea() {
	int area;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;
	cout << area << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
	}
}

int main() {
	int num;
	cout << "원의 개수 >> ";
	cin >> num;
	CircleManager won(num);

	for (int i = 0; i < num; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		string name;
		int r;
		cin >> name >> r;
		won.setCircle(i, name, r);
	}
	won.searchByName();
	won.searchByArea();
}