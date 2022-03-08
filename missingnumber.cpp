#include <iostream>

int main(int argc, char const *argv[]) {
    
    size_t n;
    std::cin >> n;
    size_t max = (n * (n+1)) / 2;
    size_t sum = 0;
    
    for (size_t i = 0; i < n-1; i++) {
        size_t input;
        std::cin >> input;
        sum += input;
    }
    std::cout << max - sum << std::endl;
    
    return 0;
}