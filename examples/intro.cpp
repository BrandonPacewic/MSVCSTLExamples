// Copyright (c) Brandon Pacewic
// SPDX-License-Identifier: MIT

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    auto first = v.begin();
    auto last = v.end();

    for (; first != last; ++first) {
        std::cout << *first << ' ';
    }

    std::cin.get();
    return 0;
}
