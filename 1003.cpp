#include <stdio.h>
int main() {
    int fib[42]; //N은 40 이하의 자연수이기 때문
    fib[0] = 1;
    fib[1] = 0;
    for (int i = 2; i < 42; i++) { //배열 요소값 저장
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int t;
    scanf("%d", &t);
    int n;
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("%d %d\n", fib[n], fib[n + 1]);
    }
    return 0;
}
