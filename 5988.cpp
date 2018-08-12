#include <iostream>
int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        char arr[62] = { 0, };
        std::cin >> arr;
        for (int j = 0; j < 62; j++) {
            if (arr[j] == 0) {
                if (arr[j - 1] % 2 == 0) {
                    printf("even\n");
                }
                else  {
                    printf("odd\n");
                }
                break;
            }
        }
    }
    return 0;
}
