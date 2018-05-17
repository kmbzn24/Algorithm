#include <stdio.h>
int main() {
    int arr[8], res = 0;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 8; i++) {
        if (i + 1 == arr[i]) {
            res++;
        }
        if (i + arr[i] == 8) {
            res--;
        }
    }
    if (res == 8) {
        printf("ascending");
    }
    else if (res == -8) {
        printf("descending");
    }
    else {
        printf("mixed");
    }
    return 0;
}
