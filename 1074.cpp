#include <stdio.h>
#include <math.h> //pow함수를 사용하기 위해 포함
int z(int n, int x, int y) {
    int plus = 0;
    if (n == 1) { //정지조건
        if (x == 1) {
            plus++;
        }
        if (y == 1) {
            plus += 2;
        }
        return plus;
    }
    if (x >= pow(2, n - 1)) {
        plus += pow(2, 2 * n - 2);
        x -= pow(2, n - 1);
    }
    if (y >= pow(2, n - 1)) {
        plus += pow(2, 2 * n - 1);
        y -= pow(2, n - 1);
    }
    return plus + z(n - 1, x, y); //재귀적 호출
}
int main() {
    int n, x, y;
    scanf("%d %d %d", &n, &y, &x); //입력
    printf("%d", z(n, x, y)); //출력
    return 0;
}
