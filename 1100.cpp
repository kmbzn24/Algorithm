#include <iostream>
int main() {
    char c;
    int res = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            std::cin >> c;
            if (c == 'F') {
                if (!((i + j) % 2)) {
                    res++;
                }
            }
        }
    }
    std::cout << res;
    return 0;
}
