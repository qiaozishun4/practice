#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	int main() {
		/**
		 * RealDream AK IOI
		 */
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		int maxn = 8, ans = 0;
		for (int i = 1; i <= 7; i++) {
			int a, b;
			cin >> a >> b;
			if (a + b > maxn) {
				maxn = a + b;
				ans = i;
			}
		}
		cout << ans << endl;
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
