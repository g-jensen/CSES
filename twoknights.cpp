#include <iostream>
#define li long int

li nC2(li n) {
    return ((n*n) - n)/2;
}

li sum(li n) {
    return (n*(n+1))/2;
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i <= 1) {
            std::cout << 0 << std::endl;
        } else { 
            std::cout << nC2(i*i) - (8 * sum(i-2)) << std::endl;
        }
    }

    return 0;
}