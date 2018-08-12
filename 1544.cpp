#include <stdio.h>
int main() {
    int res = 1, n; //res : 공을 넣은 컵의 위치
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (res == a) { //바꾸는 과정
            res = b;
        }
        else if (res == b) {
            res = a;
        }
    }
    printf("%d", res);
    return 0;
}
