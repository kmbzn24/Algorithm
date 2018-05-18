#include <stdio.h>
#include <math.h>
int pyt(int x1, int y1, int x2, int y2) { //(x1, y1)과 (x2, y2)간 거리의 제곱을 구하는 함수
    return pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2);
}
int main() {
    int t, x1, y1, x2, y2, n;
    scanf("%d", &t); //테스트 케이스의 수 입력
    while (t--) { //t회 반복
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2); //출발점 (x1, y1)과 도착점 (x2, y2)의 좌표 입력
        scanf("%d", &n); //행성계의 수 입력
        int x[n], y[n], r[n], c = 0, res = 0; //c : 카운팅 변수, res : 최종 결과 변수
        for (int i = 0; i < n; i++) {
            scanf("%d %d %d", &x[i], &y[i], &r[i]); //행성계의 x, y좌표 및 반지름 입력
            if (pyt(x1, y1, x[i], y[i]) < pow(r[i], 2)) { //출발점이 행성계에 포함될 경우
                c = 1;
            }
            if (pyt(x2, y2, x[i], y[i]) < pow(r[i], 2)) { //도착점이 행성계에 포함될 경우
                c = 1 - c;
            }
            res += c; //1이면 카운팅, 0이면 카운팅하지 않음.
            c = 0;
        }
        printf("%d\n", res); //최종 결과 출력
    }
    return 0;
}
