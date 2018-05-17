#include <stdio.h>
int main() {
    int n, res = 0;
    scanf("%d", &n);
    while (n > 0) {
        res += n % 2;
        n /= 2;
    }
    printf("%d", res);
    return 0;
}
