#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    double arr[n]; //길이가 n인 double형 배열 선언
    for (int i = 0; i < n; i++) { //과목별 점수 각각 입력
        scanf("%lf", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < n; i++) { //최댓값 구하기
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++) { //점수 조작 과정
        arr[i] = arr[i] * 100 / max;
    }
    double sum = 0; //평균 구하기
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    sum /= n;
    printf("%.2lf", sum); //평균값 출력
    return 0;
}
