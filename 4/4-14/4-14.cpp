#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
    string name;
public:
    Player(string name) : name(name) {}
    string getName() { return name; }
};

class GamblingGame {
    Player* players[2];
public:
    GamblingGame(Player* p1, Player* p2) {
        players[0] = p1;
        players[1] = p2;
        srand((unsigned int)time(0));
    }

    void play() {
        int turn = 0;
        while (true) {
            Player* current = players[turn % 2];
            cout << current->getName() << ":<Enter>" << endl;
            cin.ignore();

            int nums[3];
            cout << '\t' << '\t';
            for (int i = 0; i < 3; i++) {
                nums[i] = rand() % 3;
                cout << nums[i] << '\t';
            }

            if (nums[0] == nums[1] && nums[1] == nums[2]) {
                cout << current->getName() << "님 승리! !" << endl;
                break;
            }
            else {
                cout << "아쉽군요!" << endl;
                turn++;
            }
        }
    }
};

int main() {
    string n1, n2;
    cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
    cout << "첫번째 선수 이름>>";
    cin >> n1;
    cout << "두번째 선수 이름>>";
    cin >> n2;

    Player p1(n1);
    Player p2(n2);
    GamblingGame game(&p1, &p2);
    game.play();

    return 0;
}