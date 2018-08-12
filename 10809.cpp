#include <iostream>
using namespace std;
int main() {
    char s[100];
    cin >> s; //문자열 입력
    for (char c = 'a'; c <= 'z'; c++) {
        int i = 0;
        int res = -1;
        while (s[i] != '\0') { //문자열의 끝까지 탐색
            if (s[i] == c) {
                res = i; //해당 문자가 나올 경우 결과값을 저장
                break;
            }
            i++;
        }
        cout << res << " "; //결과 출력
    }
    return 0;
}
