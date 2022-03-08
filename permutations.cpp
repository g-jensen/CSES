#include <iostream> 

int main(int argc, char const *argv[]) {
    
    uint n;
    std::cin >> n;

    if (n == 1) {std::cout << "1" << std::endl; return 0;}
    if (n <= 3) {std::cout << "NO SOLUTION" << std::endl; return 0;} else {
        for (int i = 2; i <= n; i += 2) {
            std::cout << i << " ";
        }
        for (int i = 1; i <= n; i +=2) {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";
    
    return 0;
}