#include <iostream>

int main(int argc, char const *argv[]) {
    std::string input;
    std::cin >> input;
    
    size_t highest = 0;
    size_t length = 0;
    size_t l = input.size();
    char prev = input[0];
    for (size_t i = 1; i < l; i++) {
        if (prev == input[i]) {
            length++;
        } else {
            if (length > highest) {highest = length;}
            length = 0;
        }
        prev = input[i];
    }

    if (length > highest) {highest = length;}
    highest++;
    
    std::cout << highest << std::endl;

    return 0;
}
