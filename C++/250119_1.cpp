#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	multiset<int, std::greater<int>> s;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &n);
		s.insert(n);
	}
	for (auto value : s) {
		printf("%d", value);
	}
	return 0;
}
