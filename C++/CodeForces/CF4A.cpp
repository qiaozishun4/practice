#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	string check(int n) {
		if ((n & 1) == 0 && (n > 2)) return "YES";
		return "NO";
	}
	int main() {
		/**
		 * RealDream AK IOI
		 */
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		int n;
		cin >> n;
		cout << check(n) << endl;
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
