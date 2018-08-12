#include <iostream>
int main() {
    int m, n;
    std::cin >> m >> n;
    if (m <= n) {
        printf("%d", (m - 1) * 2);
    }
    else  {
        printf("%d", n * 2 - 1);
    }
    return 0;
}
