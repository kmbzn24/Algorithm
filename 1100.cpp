#include <iostream>
int main() {
    char c;
    int res = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            std::cin >> c; //문자 입력
            if (c == 'F') { //말이 위치할 경우
                if (!((i + j) % 2)) { //칸의 색상이 하얀색일 경우
                    res++;
                }
            }
        }
    }
    std::cout << res; //출력
    return 0;
}
