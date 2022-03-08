#include <iostream>

int main(int argc, char const *argv[]) {
    size_t n;
    std::cin >> n;

    std::cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n *= 3;
            n++;
        }
        std::cout << n << " ";
    }

    return 0;
}