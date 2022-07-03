#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	const auto& m = n / 4;
	for (auto i = 0; i < m; ++i) {
		cout << "long ";
	}

	cout << "int";

	return 0;
}