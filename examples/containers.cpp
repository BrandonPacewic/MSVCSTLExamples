// Copyright(c) Brandon Pacewic
// SPDX - License - Identifier: MIT WITH MSVC STL - Exception

#include <iostream>
#include <vector>

int main() {
	using namespace std;

	vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (auto it = v.begin(); it != v.end(); ++it) {
		cout << *it << ' ';
	}

	cin.get();
	return 0;
}
