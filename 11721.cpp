#include <stdio.h>
int main() {
    int n = 0;
    char c;
    do { //우선 실행
        scanf("%c", &c); //문자 입력
        printf("%c", c); //문자 출력
        n++;
        if (n == 10) { //10회에 한 번씩 줄바꿈
            n = 0;
            printf("\n");
        }
    } while (c != '\n'); //정지조건
    return 0;
}
