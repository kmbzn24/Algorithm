#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); //n값 입력
    printf((n % 2) ? "SK" : "CY"); //홀수일 경우 "SK", 짝수일 경우 "CY" 출력
    return 0;
}
