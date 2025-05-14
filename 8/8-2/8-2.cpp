#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius = 0, string name = "") : Circle(radius) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
	void show() { cout << "가장 면적이 큰 피자는 " << name << "입니다."; }
	
	NamedCircle MaxCircle(NamedCircle arr[], int size) {
		int maxIndex = 0;
		double max = arr[0].getArea();
		for (int i = 0; i < size; i++) {
			if (max < arr[i].getArea()) {
				max = arr[i].getArea();
				maxIndex = i;
			}
		}
		return arr[maxIndex];
	}
};

int main() {
	NamedCircle pizza[5];

	cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " >> ";
		int radius;
		string name;
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}

	int maxIndex = 0;
	double max = 0;
	for (int i = 0; i < 5; i++) {
		if (max < pizza[i].getArea()) {
			max = pizza[i].getArea();
			maxIndex = i;
		}
	}
	cout << "가장 면적이 큰 피자는 " << pizza[maxIndex].getName() << "입니다";
}
