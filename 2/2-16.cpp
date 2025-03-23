#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    char buf[10000];
    int freq[26] = { 0 };

    cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n";
    cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
    cin.getline(buf, 10000, ';');

    for (int i = 0; i < strlen(buf); i++) {
        if (isalpha(buf[i])) {
            char lower = tolower(buf[i]);
            freq[lower - 'a']++;
        }
    }

    int total = 0;
    for (int i = 0; i < 26; i++) {
        total += freq[i];
    }

    cout << "\n�� ���ĺ� ��:  " << total << "\n";
    for (int i = 0; i < 26; i++) {
        cout << (char)('a' + i) << " (" << freq[i] << ") : ";
        for (int j = 0; j < freq[i]; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
