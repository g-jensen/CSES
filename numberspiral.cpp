#include <iostream>
#include <cmath>

typedef long int big;

big calculate(uint y, uint x) {
    big x_edge;
    big y_edge;
    bool x_even;
    bool y_even;
    big delta = abs(y - x);
 
    if (x % 2 != 0) {
        x_edge = pow(x,2);
        x_even = false;
    } else { x_edge = pow(x-1,2) + 1; x_even = true; }
 
    if (y % 2 == 0) {
        y_edge = pow(y,2);
        y_even = true;
    } else { y_edge = pow(y-1,2) + 1; y_even = false; }
 
    if (y == 1) {return x_edge;}
    if (x == 1) {return y_edge;}
 
    if (y == x) { return pow(x,2) - (x-1); }
 
    if (x > y) {
        if (x_even) { return x_edge + (y - 1); } else { return x_edge - (y - 1); }
    }
    if (x < y) {
        if (y_even) { return y_edge - (x - 1); } else { return y_edge + (x - 1); }
    }
 
    return 0;
 
}

int main(int argc, char const *argv[]) {
    
    // int t;
    // std::cin >> t;

    // for (int i = 0; i < t; i++) {
    //     big y;
    //     big x;
    //     std::cin >> y;
    //     std::cin >> x;
    //     std::cout << calculate(y,x) << std::endl;
    // }

    uint y;
    uint x;

    std::cin >> y;
    std::cin >> x;

    std::cout << calculate(y,x) << std::endl;

    return 0;
}