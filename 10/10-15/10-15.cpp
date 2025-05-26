#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Circle {
    string name;
    int radius;
public:
    Circle(int radius, string name) {
        this->radius = radius; this->name = name;
    }
    double getArea() { return 3.14 * radius * radius; }
    string getName() { return name; }
};

void program() {
    vector<Circle*> v;
    cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;

    while (1) {
        cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4  >> ";
        int choice;
        cin >> choice;
        if (choice == 1) {
            cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
            int radius;
            string name;
            cin >> radius >> name;
            v.push_back(new Circle(radius, name));
        }
        else if (choice == 2) {
            cout << "삭제하고자 하는 원의 이름은 >> ";
            string name;
            cin >> name;
            vector<Circle*>::iterator it;
            it = v.begin();
            int j = 0;
            for (int i = 0; i <= v.size(); i++) {
                if (v[j]->getName() == name) {
                    it = v.erase(it);
                }
                else { it++; j++; }
            }
        }

        else if (choice == 3) {
            for (int i = 0; i < v.size(); i++) {
                cout << v[i]->getName() << endl;
            }
            cout << endl;
        }

        else if (choice == 4) {
            cout << "프로그램을 종료합니다. . ." << endl;
            break;
        }
        else cout << "잘못 입력하였습니다. 다시 한번 입력해주세요." << endl;
    }
}

int main() {
    program();
}