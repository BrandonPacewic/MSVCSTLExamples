// Copyright(c) Brandon Pacewic
// SPDX - License - Identifier: MIT

#include <iostream>
#include <vector>

int main() {
	std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (auto it = v.begin(); it != v.end(); ++it) {
		std::cout << *it << ' ';
	}

	std::cin.get();
	return 0;
}
