#include <stdio.h>
int main() {
    int n, cy = 100, sd = 100, a, b;
    scanf("%d", &n); //라운드의 수 입력
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b); //창영 및 상덕이 주사위를 던져 나온 수 입력
        if (a > b) { //창영이 이겼을 경우
            sd -= a;
        }
        else if (a < b) { //상덕이 이겼을 경우
            cy -= b;
        }
    }
    printf("%d\n%d", cy, sd); //최종 점수 출력
    return 0;
}
