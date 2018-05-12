#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t); //t값 입력
    int a, b;
    for (int i = 0; i < t; i++) { //t회 반복
        scanf("%d %d", &a, &b); //a값과 b값 입력
        printf("%d\n", a + b); //a + b값 출력
    }
    return 0;
}
