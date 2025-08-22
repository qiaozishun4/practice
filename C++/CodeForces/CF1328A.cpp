#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	
	int divisibility(int a, int b, int times) {
		/*
		if (a % b == 0) return times;
		return divisibility(a + 1, b, times + 1);
		*/
		if (a % b == 0) return 0;
		return (a / b + 1) * b - a;
	}
	
	int main() {
		/**
		 * RealDream AK IOI
		 */
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		int t;
		cin >> t;
		for (int i = 0; i < t; i++) {
			int a, b;
			cin >> a >> b;
			cout << divisibility(a, b, 0) << endl;
		}
		return 0;
	}
};

int main() {
	/**
	 * Made By RealDream
	 */
	RealDream::main();
	return 0;
}
