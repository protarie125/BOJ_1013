#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	const auto rex = regex{ "(100+1+|01)+" };

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		string line;
		cin >> line;

		const auto& isMatch = regex_match(line, rex);
		cout << (isMatch ? "YES" : "NO") << '\n';
	}

	return 0;
}