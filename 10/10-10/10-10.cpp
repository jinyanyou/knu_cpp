#include <iostream>
#include <vector>
using namespace std;

class Nation {
    string nation;
    string capital;
public:
    Nation(string nation, string capital) { this->nation = nation; this->capital = capital; }
    string getNation() { return nation; }
    string getCapital() { return capital; }

};

void play() {
    Nation Kor("대한민국", "서울"), US("미국", "워싱턴"), Jp("일본", "도쿄");
    vector <Nation> v;
    v.push_back(Kor);
    v.push_back(US);
    v.push_back(Jp);

    cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;
    int num;
    while (1) {
        cout << "정보 입력: 1, 퀴즈: 2, 종료: 3 >> ";
        cin >> num;
        if (num == 1) {
            cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;
            cout << "나라와 수도를 입력하세요(no no 이면 입력끝)" << endl;
            while (1) {
                bool ok = true;
                cout << v.size() + 1 << ">>";
                string nation, capital;
                cin >> nation >> capital;
                Nation n(nation, capital);
                for (int i = 0; i < v.size(); ++i) { // 이미 존재하는 나라인지 확인
                    if (v[i].getNation() == nation) {
                        cout << "alreday exists !!!" << endl;
                        ok = false;
                        break;
                    }
                }
                if (nation == "no" && capital == "no") break;
                else {
                    if (ok == true) v.push_back(n);
                }
            }
        }
        else if (num == 2) {
            srand((unsigned)time(0));
            while (1) {
                int i = rand() % v.size();
                cout << v[i].getNation() << "의 수도는?";
                string answer;
                cin >> answer;
                if (answer == v[i].getCapital()) cout << "Correct !!" << endl;
                else if (answer == "exit") break;
                else cout << "No !!" << endl;
            }
        }
        else if (num == 3) break;
        else cout << "다시 입력해 주세요." << endl;
    }
}

int main() {
    play();
}