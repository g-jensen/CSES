#include <algorithm>
#include <math.h>
#include <vector>
#include <numeric>
#include <unordered_map>
#include <set>
#include <iostream>
#include <array>
#include <string>

// https://www.cplusplus.com/reference/algorithm/

template <typename T>
void out(T data) {
    std::cout << data << std::endl;
}

int main(int argc, char const *argv[]) {

    /* sorting */
    std::array<int,5> sort1 = {76,12,234,65786,4};
    std::sort(sort1.begin(),sort1.end());
    for (auto& e: sort1) {out(e);}

    /* searching */
    std::array<int,5> b_search = {1,2,4,5,3};

    // gives index
    out(
        std::find(b_search.begin(),b_search.end()+1,3) - b_search.begin()
    );



}
