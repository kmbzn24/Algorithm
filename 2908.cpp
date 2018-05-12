#include <stdio.h>
int rev(int n) { //거꾸로 읽은 수 반환
    return (n % 10 * 100) + (n % 100 / 10 * 10) + (n / 100);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b); //두 수 입력
    a = rev(a);
    b = rev(b);
    printf("%d", (a > b) ? a : b); //더 큰 수를 출력
    return 0;
}
