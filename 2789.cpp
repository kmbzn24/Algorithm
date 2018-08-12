#include <stdio.h>
int main() {
    char str[101] = { 0, }; //문자열을 선언한 후 0으로 초기화
    scanf("%s", &str); //입력
    for (int i = 0; i < 101; i++) {
        if (((str[i] >= 'A') && (str[i] <= 'E')) || (str[i] == 'M') || (str[i] == 'R') || (str[i] == 'I') || (str[i] == 'G')) {
            str[i] = 0; //문자 검열
        }
    }
    for (int i = 0; i < 101; i++) {
        if (str[i] != 0) {
            printf("%c", str[i]); //검열된 문자를 제외하고 출력
        }
    }
    return 0;
}
