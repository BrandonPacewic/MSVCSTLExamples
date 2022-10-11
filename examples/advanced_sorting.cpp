// Copyright(c) Brandon Pacewic
// SPDX - License - Identifier: MIT

#include <algorithm>
#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v) {
    for (auto it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> v = { 10, 1, 9, 2, 8, 3, 7, 4, 6, 5 };

    std::cout << "Original vector: ";
    print_vector(v);
    std::cout << std::is_sorted(v.begin(), v.end()) << std::endl;

    sort(v.begin(), v.end());

    std::cout << "Sorted vector: ";
    print_vector(v);
    std::cout << std::is_sorted(v.begin(), v.end()) << std::endl;

    std::cin.get();
    return 0;
}
