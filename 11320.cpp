#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        int c = ceil(a / b); //두 값의 비를 올림한 값을 저장
        printf("%d\n", c * c); //c값의 제곱을 출력
    }
    return 0;
}
