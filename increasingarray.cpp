#include <iostream>
int main(int argc, char const *argv[]) {
    size_t n;
    std::cin >> n;
    long unsigned int prev;
    std::cin >> prev; 
    size_t total = 0;
    for (size_t i = 1; i < n; i++) {
        long unsigned int v;
        std::cin >> v;
        size_t delta = 0;
        if (prev > v) {
            delta = prev - v;
            total += delta;
        }
        prev = v + delta;
    }
    std::cout << total << std::endl;
    return 0;
}