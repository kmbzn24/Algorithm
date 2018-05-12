#include <stdio.h>
int main() {
    int arr[4];
    scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]); //x, y, w, h
    arr[2] -= arr[0]; //w - x
    arr[3] -= arr[1]; //h - y
    int min = arr[0];
    for (int i = 1; i < 4; i++) {
        min = (arr[i] < min) ? arr[i] : min;
    }
    printf("%d", min); //최솟값 출력
    return 0;
}
