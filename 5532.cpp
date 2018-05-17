#include <stdio.h>
int deceil(int a, int b) { //a를 b로 나눈 후 올림처리하는 함수
    int res = a / b;
    if (a % b != 0) { //나머지가 0이 아닐 경우 +1
        return ++res;
    }
    return res;
}
int main() {
    int l, a, b, c, d, r;
    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d); //변수 입력
    r = (a / c >= b / d) ? deceil(a, c) : deceil(b, d);
    printf("%d", l - r); //l에서 r을 뺀 값 출력
    return 0;
}
