#include <stdio.h>
#include <math.h> //pow함수를 사용하기 위해서 포함
int length(int n) { //자연수 n이 몇 자리 자연수인지 출력
    int i = 1;
    while (1) {
        if ((pow(10, i - 1) <= n) && (pow(10, i) > n)) {
            return i;
        }
        i++;
    }
}
int main() {
    int v, r = 1;
    for (int i = 0; i < 3; i++) { //r변수에 세 값을 곱한 값 저장
        scanf("%d", &v);
        r *= v;
    }
    int l = length(r); //l변수에 세 값을 곱한 값의 자릿수를 저장
    int result[10] = {0, };
    for (int i = 0; i < l; i++) {
        result[r % 10]++;
        r /= 10;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}
