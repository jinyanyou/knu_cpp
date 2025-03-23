#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    char buf[10000];
    int freq[26] = { 0 };

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
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

    cout << "\n총 알파벳 수:  " << total << "\n";
    for (int i = 0; i < 26; i++) {
        cout << (char)('a' + i) << " (" << freq[i] << ") : ";
        for (int j = 0; j < freq[i]; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
